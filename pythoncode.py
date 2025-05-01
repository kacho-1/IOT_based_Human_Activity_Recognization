import pandas as pd
import numpy as np
from sklearn.model_selection import train_test_split, GridSearchCV
from sklearn.preprocessing import StandardScaler
from sklearn.ensemble import RandomForestClassifier
from sklearn.metrics import classification_report

# Load and prepare data
data = pd.read_csv('/content/mpu6050_dataset.csv', skiprows=1, header=None)
X = data.iloc[:, :6].astype(float).values
y = data.iloc[:, 6].values

# Scale features
scaler = StandardScaler()
X_scaled = scaler.fit_transform(X)

# Split data
X_train, X_test, y_train, y_test = train_test_split(X_scaled, y, test_size=0.2, random_state=42)

# Define parameter grid
param_grid = {
    'n_estimators': [100, 200],
    'max_depth': [10, 20],
    'min_samples_split': [2, 5],
    'min_samples_leaf': [1, 2]
}

# Grid search
rf = RandomForestClassifier()
grid_search = GridSearchCV(rf, param_grid, cv=5, n_jobs=-1)
grid_search.fit(X_train, y_train)

# Best model
best_rf = grid_search.best_estimator_

# Evaluate
y_pred = best_rf.predict(X_test)
print("Best parameters:", grid_search.best_params_)
print("\nModel Performance:")
print(classification_report(y_test, y_pred))

# Generate Arduino code for top trees
def generate_tree_code(tree, tree_id):
    tree_code = f"""
int predict_tree_{tree_id}(float* features) {{
    float scaled_features[6];
    for(int i = 0; i < 6; i++) {{
        scaled_features[i] = (features[i] - {scaler.mean_[i]}f) / {scaler.scale_[i]}f;
    }}
"""

    n_nodes = tree.tree_.node_count
    feature = tree.tree_.feature
    threshold = tree.tree_.threshold
    children_left = tree.tree_.children_left
    children_right = tree.tree_.children_right
    value = tree.tree_.value

    def recurse(node, depth):
        indent = "    " * (depth + 1)
        if feature[node] != -2:  # not a leaf
            code = f"{indent}if (scaled_features[{feature[node]}] <= {threshold[node]}f) {{\n"
            code += recurse(children_left[node], depth + 1)
            code += f"{indent}}} else {{\n"
            code += recurse(children_right[node], depth + 1)
            code += f"{indent}}}\n"
        else:
            code = f"{indent}return {value[node][0].argmax()};\n"
        return code

    tree_code += recurse(0, 0)
    tree_code += "}\n"
    return tree_code

# Function to generate the majority voting code
def generate_voting_code(n_trees):
    return """
int get_final_prediction(float* features) {
    int votes[4] = {0, 0, 0, 0};  // Array to store votes for each class

    // Get predictions from each tree
""" + "\n".join([f"    votes[predict_tree_{i}(features)]++;" for i in range(n_trees)]) + """

    // Find the class with maximum votes
    int max_votes = votes[0];
    int predicted_class = 0;
    for(int i = 1; i < 4; i++) {
        if(votes[i] > max_votes) {
            max_votes = votes[i];
            predicted_class = i;
        }
    }
    return predicted_class;
}
"""

print("\nGenerated Arduino code:")
for i, tree in enumerate(best_rf.estimators_[:5]):  # First 5 trees
    print(generate_tree_code(tree, i))


# Generate and print the voting code
print(generate_voting_code(5))    