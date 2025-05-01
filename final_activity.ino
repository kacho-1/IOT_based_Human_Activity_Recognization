#include <Wire.h>
#include <MPU6050.h>
#include <ESP8266WiFi.h>
#include <ThingSpeak.h>
#include <DHT.h>
#include "decision_trees.h"

const char* ssid = "OPPO A16";
const char* password = "888777666";

unsigned long channelID = 2799756;
const char* apiKey = "JHR9BVGS57KWFVG5";

const int greenLED = D7; 
const int yellowLED = D6; 
const int redLED = D5; 

#define DHTPIN D3
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);

MPU6050 mpu;
WiFiClient client;

float features[6];

const char* activities[] = {"resting", "sitting", "standing", "walking"};
void setup() {
    Serial.begin(115200);
    Wire.begin();
    
    pinMode(greenLED, OUTPUT);
    pinMode(yellowLED, OUTPUT);
    pinMode(redLED, OUTPUT);
    
    digitalWrite(greenLED, LOW);
    digitalWrite(yellowLED, LOW);
    digitalWrite(redLED, LOW);
    
    dht.begin();
    
    Serial.println("Initializing MPU6050...");
    mpu.initialize();
    
    if (!mpu.testConnection()) {
        Serial.println("MPU6050 connection failed!");
        while (1);
    }
    Serial.println("MPU6050 connection successful!");

    Serial.print("Connecting to WiFi");
    WiFi.begin(ssid, password);
    while (WiFi.status() != WL_CONNECTED) {
        delay(1000);
        Serial.print(".");
    }
    Serial.println("\nWiFi connected!");
    
    ThingSpeak.begin(client);
    
    delay(1000);
    mpu.CalibrateAccel(6);
    mpu.CalibrateGyro(6);
}

void loop() {
  
    int16_t ax, ay, az, gx, gy, gz;
    mpu.getMotion6(&ax, &ay, &az, &gx, &gy, &gz);
    
    features[0] = ax / 16384.0;  // Convert to g (±2g)
    features[1] = ay / 16384.0;
    features[2] = az / 16384.0;
    features[3] = gx / 131.0;    // Convert to degrees/sec (±250°/s)
    features[4] = gy / 131.0;
    features[5] = gz / 131.0;
    
     int predicted_activity = get_final_prediction(features);
    
    if (predicted_activity == 0 || predicted_activity == 1) { // Resting and Sitting
        digitalWrite(redLED, HIGH);
        digitalWrite(yellowLED, LOW);
        digitalWrite(greenLED, LOW);
    } else if (predicted_activity == 2) { // Standing
        digitalWrite(redLED, LOW);
        digitalWrite(yellowLED, HIGH);
        digitalWrite(greenLED, LOW);
    } else if (predicted_activity == 3) { // Walking
        digitalWrite(redLED, LOW);
        digitalWrite(yellowLED, LOW);
        digitalWrite(greenLED, HIGH);
    } else { 
        digitalWrite(redLED, LOW);
        digitalWrite(yellowLED, LOW);
        digitalWrite(greenLED, LOW);
    }
    
    float temperature = dht.readTemperature();
    float humidity = dht.readHumidity();
    
    Serial.print("Acc X: "); Serial.print(features[0]);
    Serial.print(" Y: "); Serial.print(features[1]);
    Serial.print(" Z: "); Serial.println(features[2]);
    Serial.print("Gyro X: "); Serial.print(features[3]);
    Serial.print(" Y: "); Serial.print(features[4]);
    Serial.print(" Z: "); Serial.println(features[5]);
    Serial.print("Predicted Activity: ");
    Serial.println(activities[predicted_activity]);
    Serial.print("Temperature: "); Serial.print(temperature);
    Serial.print(" °C, Humidity: "); Serial.print(humidity);
    Serial.println(" %");
    
    ThingSpeak.setField(1, predicted_activity);
    ThingSpeak.setField(2, temperature);
    ThingSpeak.setField(3, humidity);
    int status = ThingSpeak.writeFields(channelID, apiKey);
     if (status == 200) {
        Serial.println("Data sent to ThingSpeak!");
    } else {
        Serial.printf("Failed to send data, status: %d\n", status);
    }

    
    delay(1000);
}
