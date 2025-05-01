#ifndef DECISION_TREES_H
#define DECISION_TREES_H

// Function declarations
int predict_tree_0(float* features);
int predict_tree_1(float* features);
int predict_tree_2(float* features);
int predict_tree_3(float* features);
int predict_tree_4(float* features);
int get_final_prediction(float* features);
int predict_tree_0(float* features) {
    float scaled_features[6];
    for(int i = 0; i < 6; i++) {
        scaled_features[i] = (features[i] - -0.002055480120171704f) / 1.0002363421829419f;
    }
    if (scaled_features[4] <= -0.7388364374637604f) {
        return 3;
    } else {
        if (scaled_features[0] <= 1.2162763476371765f) {
            if (scaled_features[0] <= -1.297261893749237f) {
                if (scaled_features[4] <= 0.4869285374879837f) {
                    if (scaled_features[1] <= -0.6788498163223267f) {
                        return 3;
                    } else {
                        if (scaled_features[0] <= -1.700140118598938f) {
                            return 3;
                        } else {
                            if (scaled_features[0] <= -1.4216119647026062f) {
                                if (scaled_features[4] <= -0.2885952517390251f) {
                                    return 2;
                                } else {
                                    if (scaled_features[1] <= 1.1383588314056396f) {
                                        if (scaled_features[5] <= -0.10517028346657753f) {
                                            return 1;
                                        } else {
                                            if (scaled_features[3] <= -0.1417218828573823f) {
                                                return 1;
                                            } else {
                                                return 0;
                                            }
                                        }
                                    } else {
                                        return 3;
                                    }
                                }
                            } else {
                                if (scaled_features[1] <= 1.4484332352876663f) {
                                    return 2;
                                } else {
                                    return 3;
                                }
                            }
                        }
                    }
                } else {
                    return 3;
                }
            } else {
                if (scaled_features[3] <= -0.7398366630077362f) {
                    return 3;
                } else {
                    if (scaled_features[4] <= 0.3708374798297882f) {
                        if (scaled_features[2] <= -0.6062959134578705f) {
                            if (scaled_features[2] <= -1.3296846151351929f) {
                                if (scaled_features[4] <= -0.33263298869132996f) {
                                    return 2;
                                } else {
                                    if (scaled_features[3] <= -0.26101890206336975f) {
                                        return 2;
                                    } else {
                                        if (scaled_features[3] <= 0.28584930300712585f) {
                                            if (scaled_features[5] <= 0.3476940095424652f) {
                                                if (scaled_features[1] <= -0.3999022841453552f) {
                                                    return 0;
                                                } else {
                                                    if (scaled_features[0] <= 0.13928043842315674f) {
                                                        if (scaled_features[1] <= 0.7231324017047882f) {
                                                            if (scaled_features[2] <= -1.9000427722930908f) {
                                                                return 2;
                                                            } else {
                                                                if (scaled_features[2] <= -1.456152319908142f) {
                                                                    if (scaled_features[4] <= 0.0038120076060295105f) {
                                                                        return 1;
                                                                    } else {
                                                                        return 0;
                                                                    }
                                                                } else {
                                                                    if (scaled_features[3] <= 0.11385628022253513f) {
                                                                        return 2;
                                                                    } else {
                                                                        return 1;
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            if (scaled_features[0] <= -0.12334127631038427f) {
                                                                return 0;
                                                            } else {
                                                                return 2;
                                                            }
                                                        }
                                                    } else {
                                                        if (scaled_features[5] <= -0.384993314743042f) {
                                                            return 2;
                                                        } else {
                                                            if (scaled_features[0] <= 0.21975237131118774f) {
                                                                if (scaled_features[1] <= 0.013988629914820194f) {
                                                                    return 0;
                                                                } else {
                                                                    return 1;
                                                                }
                                                            } else {
                                                                return 1;
                                                            }
                                                        }
                                                    }
                                                }
                                            } else {
                                                return 2;
                                            }
                                        } else {
                                            if (scaled_features[3] <= 0.5044337213039398f) {
                                                if (scaled_features[4] <= 0.34300652146339417f) {
                                                    if (scaled_features[4] <= 0.03631284832954407f) {
                                                        return 2;
                                                    } else {
                                                        if (scaled_features[3] <= 0.35675206780433655f) {
                                                            return 1;
                                                        } else {
                                                            return 2;
                                                        }
                                                    }
                                                } else {
                                                    return 1;
                                                }
                                            } else {
                                                return 2;
                                            }
                                        }
                                    }
                                }
                            } else {
                                if (scaled_features[4] <= -0.30838093161582947f) {
                                    return 2;
                                } else {
                                    if (scaled_features[1] <= -0.03587007336318493f) {
                                        if (scaled_features[3] <= 0.47481217980384827f) {
                                            if (scaled_features[3] <= -0.09763457998633385f) {
                                                if (scaled_features[5] <= 0.28312236070632935f) {
                                                    if (scaled_features[4] <= -0.08784790709614754f) {
                                                        if (scaled_features[5] <= -0.09065622836351395f) {
                                                            if (scaled_features[2] <= -0.6645069122314453f) {
                                                                return 2;
                                                            } else {
                                                                return 0;
                                                            }
                                                        } else {
                                                            return 1;
                                                        }
                                                    } else {
                                                        return 1;
                                                    }
                                                } else {
                                                    return 2;
                                                }
                                            } else {
                                                if (scaled_features[0] <= -0.44717076420783997f) {
                                                    if (scaled_features[2] <= -0.9875570237636566f) {
                                                        return 1;
                                                    } else {
                                                        if (scaled_features[0] <= -0.4983745217323303f) {
                                                            return 0;
                                                        } else {
                                                            return 1;
                                                        }
                                                    }
                                                } else {
                                                    if (scaled_features[5] <= 0.0749862790107727f) {
                                                        if (scaled_features[4] <= 0.18200844526290894f) {
                                                            if (scaled_features[4] <= -0.07581309601664543f) {
                                                                if (scaled_features[3] <= 0.1083790771663189f) {
                                                                    return 0;
                                                                } else {
                                                                    if (scaled_features[0] <= -0.06487936154007912f) {
                                                                        return 0;
                                                                    } else {
                                                                        return 1;
                                                                    }
                                                                }
                                                            } else {
                                                                if (scaled_features[5] <= -0.0037564264493994415f) {
                                                                    if (scaled_features[4] <= 0.10493884608149529f) {
                                                                        return 0;
                                                                    } else {
                                                                        if (scaled_features[4] <= 0.142333984375f) {
                                                                            return 1;
                                                                        } else {
                                                                            return 0;
                                                                        }
                                                                    }
                                                                } else {
                                                                    if (scaled_features[4] <= 0.10519872605800629f) {
                                                                        if (scaled_features[0] <= 0.7178551852703094f) {
                                                                            if (scaled_features[0] <= 0.04417480528354645f) {
                                                                                return 0;
                                                                            } else {
                                                                                if (scaled_features[0] <= 0.40719376504421234f) {
                                                                                    return 1;
                                                                                } else {
                                                                                    return 0;
                                                                                }
                                                                            }
                                                                        } else {
                                                                            return 1;
                                                                        }
                                                                    } else {
                                                                        return 2;
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            if (scaled_features[3] <= 0.239699587225914f) {
                                                                return 1;
                                                            } else {
                                                                if (scaled_features[2] <= -0.9916474223136902f) {
                                                                    return 2;
                                                                } else {
                                                                    return 1;
                                                                }
                                                            }
                                                        }
                                                    } else {
                                                        if (scaled_features[0] <= -0.12556733191013336f) {
                                                            if (scaled_features[5] <= 0.15885819494724274f) {
                                                                if (scaled_features[1] <= -0.1923847272992134f) {
                                                                    return 2;
                                                                } else {
                                                                    return 1;
                                                                }
                                                            } else {
                                                                return 2;
                                                            }
                                                        } else {
                                                            if (scaled_features[0] <= 0.19400249421596527f) {
                                                                if (scaled_features[1] <= -0.0985912885516882f) {
                                                                    return 1;
                                                                } else {
                                                                    return 2;
                                                                }
                                                            } else {
                                                                if (scaled_features[3] <= 0.2475636526942253f) {
                                                                    return 0;
                                                                } else {
                                                                    return 1;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            return 2;
                                        }
                                    } else {
                                        if (scaled_features[3] <= 0.3668295443058014f) {
                                            if (scaled_features[3] <= -0.23947268724441528f) {
                                                return 2;
                                            } else {
                                                if (scaled_features[4] <= -0.19917290657758713f) {
                                                    if (scaled_features[1] <= 0.029252411797642708f) {
                                                        return 2;
                                                    } else {
                                                        return 1;
                                                    }
                                                } else {
                                                    if (scaled_features[1] <= 0.004442021483555436f) {
                                                        if (scaled_features[3] <= 0.011172173311933875f) {
                                                            if (scaled_features[2] <= -0.7375167310237885f) {
                                                                return 2;
                                                            } else {
                                                                if (scaled_features[0] <= -0.8345973193645477f) {
                                                                    return 1;
                                                                } else {
                                                                    return 0;
                                                                }
                                                            }
                                                        } else {
                                                            return 1;
                                                        }
                                                    } else {
                                                        if (scaled_features[3] <= 0.1498364433646202f) {
                                                            if (scaled_features[5] <= -0.15446750447154045f) {
                                                                if (scaled_features[1] <= 0.11242830753326416f) {
                                                                    return 2;
                                                                } else {
                                                                    if (scaled_features[5] <= -0.47078877687454224f) {
                                                                        return 2;
                                                                    } else {
                                                                        return 1;
                                                                    }
                                                                }
                                                            } else {
                                                                if (scaled_features[3] <= -0.024548538029193878f) {
                                                                    if (scaled_features[1] <= 0.20509933680295944f) {
                                                                        return 0;
                                                                    } else {
                                                                        if (scaled_features[2] <= -0.7989940941333771f) {
                                                                            if (scaled_features[4] <= -0.14024527370929718f) {
                                                                                return 1;
                                                                            } else {
                                                                                if (scaled_features[5] <= 0.1413336992263794f) {
                                                                                    return 0;
                                                                                } else {
                                                                                    return 2;
                                                                                }
                                                                            }
                                                                        } else {
                                                                            return 2;
                                                                        }
                                                                    }
                                                                } else {
                                                                    if (scaled_features[5] <= 0.020531244575977325f) {
                                                                        return 0;
                                                                    } else {
                                                                        if (scaled_features[2] <= -0.6810348033905029f) {
                                                                            return 1;
                                                                        } else {
                                                                            if (scaled_features[0] <= -0.7234407365322113f) {
                                                                                return 1;
                                                                            } else {
                                                                                return 0;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            if (scaled_features[5] <= -0.26963600516319275f) {
                                                                return 2;
                                                            } else {
                                                                if (scaled_features[4] <= 0.04888258874416351f) {
                                                                    if (scaled_features[0] <= -0.03666495345532894f) {
                                                                        if (scaled_features[5] <= 0.2640838846564293f) {
                                                                            return 0;
                                                                        } else {
                                                                            return 1;
                                                                        }
                                                                    } else {
                                                                        return 2;
                                                                    }
                                                                } else {
                                                                    if (scaled_features[5] <= 0.5120348259806633f) {
                                                                        return 1;
                                                                    } else {
                                                                        return 2;
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            return 2;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (scaled_features[4] <= -0.1239357478916645f) {
                                if (scaled_features[3] <= -0.3487575054168701f) {
                                    if (scaled_features[1] <= 0.5374195873737335f) {
                                        return 2;
                                    } else {
                                        if (scaled_features[5] <= -0.6591832786798477f) {
                                            return 3;
                                        } else {
                                            return 2;
                                        }
                                    }
                                } else {
                                    if (scaled_features[0] <= 0.9933922588825226f) {
                                        if (scaled_features[4] <= -0.3335869312286377f) {
                                            if (scaled_features[3] <= 1.1378184258937836f) {
                                                if (scaled_features[0] <= 0.6293586492538452f) {
                                                    if (scaled_features[4] <= -0.3948517292737961f) {
                                                        return 2;
                                                    } else {
                                                        if (scaled_features[2] <= 0.5569100379943848f) {
                                                            if (scaled_features[2] <= -0.47724029421806335f) {
                                                                return 2;
                                                            } else {
                                                                if (scaled_features[5] <= -0.34328819811344147f) {
                                                                    return 2;
                                                                } else {
                                                                    if (scaled_features[5] <= 0.03978519141674042f) {
                                                                        return 1;
                                                                    } else {
                                                                        if (scaled_features[5] <= 0.09874061308801174f) {
                                                                            return 2;
                                                                        } else {
                                                                            return 1;
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            return 2;
                                                        }
                                                    }
                                                } else {
                                                    if (scaled_features[0] <= 0.7963702380657196f) {
                                                        return 1;
                                                    } else {
                                                        if (scaled_features[1] <= -0.5836988538503647f) {
                                                            return 2;
                                                        } else {
                                                            return 3;
                                                        }
                                                    }
                                                }
                                            } else {
                                                return 3;
                                            }
                                        } else {
                                            if (scaled_features[5] <= 0.3312613368034363f) {
                                                if (scaled_features[4] <= -0.20445659011602402f) {
                                                    if (scaled_features[5] <= -0.3748968541622162f) {
                                                        return 2;
                                                    } else {
                                                        if (scaled_features[1] <= 1.0659725069999695f) {
                                                            if (scaled_features[2] <= -0.2202463150024414f) {
                                                                if (scaled_features[4] <= -0.26609642803668976f) {
                                                                    if (scaled_features[4] <= -0.26842865347862244f) {
                                                                        if (scaled_features[0] <= -0.27812208980321884f) {
                                                                            return 2;
                                                                        } else {
                                                                            if (scaled_features[3] <= 0.30700527131557465f) {
                                                                                return 1;
                                                                            } else {
                                                                                return 2;
                                                                            }
                                                                        }
                                                                    } else {
                                                                        return 0;
                                                                    }
                                                                } else {
                                                                    if (scaled_features[0] <= 0.1489082481712103f) {
                                                                        return 2;
                                                                    } else {
                                                                        return 1;
                                                                    }
                                                                }
                                                            } else {
                                                                if (scaled_features[0] <= 0.03154239058494568f) {
                                                                    if (scaled_features[3] <= -0.18579396605491638f) {
                                                                        if (scaled_features[5] <= 0.016807117965072393f) {
                                                                            if (scaled_features[1] <= 0.4892024025321007f) {
                                                                                return 1;
                                                                            } else {
                                                                                return 2;
                                                                            }
                                                                        } else {
                                                                            return 2;
                                                                        }
                                                                    } else {
                                                                        if (scaled_features[4] <= -0.21374844014644623f) {
                                                                            if (scaled_features[4] <= -0.2392944097518921f) {
                                                                                return 1;
                                                                            } else {
                                                                                if (scaled_features[0] <= -0.8501341342926025f) {
                                                                                    return 0;
                                                                                } else {
                                                                                    return 1;
                                                                                }
                                                                            }
                                                                        } else {
                                                                            if (scaled_features[2] <= 0.13224582374095917f) {
                                                                                return 0;
                                                                            } else {
                                                                                return 1;
                                                                            }
                                                                        }
                                                                    }
                                                                } else {
                                                                    return 1;
                                                                }
                                                            }
                                                        } else {
                                                            return 2;
                                                        }
                                                    }
                                                } else {
                                                    if (scaled_features[4] <= -0.20250335335731506f) {
                                                        return 0;
                                                    } else {
                                                        if (scaled_features[3] <= -0.05574895814061165f) {
                                                            if (scaled_features[5] <= -0.47188112139701843f) {
                                                                return 2;
                                                            } else {
                                                                if (scaled_features[0] <= 0.45517225563526154f) {
                                                                    if (scaled_features[4] <= -0.18097882717847824f) {
                                                                        if (scaled_features[4] <= -0.1848713532090187f) {
                                                                            if (scaled_features[2] <= 0.8563623428344727f) {
                                                                                return 1;
                                                                            } else {
                                                                                if (scaled_features[2] <= 0.9213136732578278f) {
                                                                                    return 0;
                                                                                } else {
                                                                                    return 1;
                                                                                }
                                                                            }
                                                                        } else {
                                                                            return 0;
                                                                        }
                                                                    } else {
                                                                        return 1;
                                                                    }
                                                                } else {
                                                                    if (scaled_features[5] <= -0.008307500567752868f) {
                                                                        return 1;
                                                                    } else {
                                                                        if (scaled_features[1] <= -0.4580100476741791f) {
                                                                            return 0;
                                                                        } else {
                                                                            return 1;
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            if (scaled_features[5] <= 0.14698072522878647f) {
                                                                if (scaled_features[4] <= -0.1422170177102089f) {
                                                                    if (scaled_features[2] <= -0.10338814184069633f) {
                                                                        if (scaled_features[2] <= -0.3109498620033264f) {
                                                                            if (scaled_features[4] <= -0.1578066647052765f) {
                                                                                if (scaled_features[5] <= -0.14382467791438103f) {
                                                                                    return 2;
                                                                                } else {
                                                                                    return 0;
                                                                                }
                                                                            } else {
                                                                                return 1;
                                                                            }
                                                                        } else {
                                                                            return 1;
                                                                        }
                                                                    } else {
                                                                        if (scaled_features[0] <= -0.7423372864723206f) {
                                                                            return 1;
                                                                        } else {
                                                                            if (scaled_features[4] <= -0.14591659605503082f) {
                                                                                if (scaled_features[3] <= 0.08866670355200768f) {
                                                                                    return 0;
                                                                                } else {
                                                                                    return 0;
                                                                                }
                                                                            } else {
                                                                                if (scaled_features[1] <= -0.28129854798316956f) {
                                                                                    return 2;
                                                                                } else {
                                                                                    return 0;
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                } else {
                                                                    if (scaled_features[2] <= 0.02866572141647339f) {
                                                                        return 1;
                                                                    } else {
                                                                        if (scaled_features[4] <= -0.12766797095537186f) {
                                                                            if (scaled_features[2] <= 0.6507601290941238f) {
                                                                                if (scaled_features[2] <= 0.29786237701773643f) {
                                                                                    return 0;
                                                                                } else {
                                                                                    return 2;
                                                                                }
                                                                            } else {
                                                                                return 1;
                                                                            }
                                                                        } else {
                                                                            if (scaled_features[4] <= -0.12736506015062332f) {
                                                                                return 0;
                                                                            } else {
                                                                                if (scaled_features[0] <= 0.2009691409766674f) {
                                                                                    return 2;
                                                                                } else {
                                                                                    return 0;
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            } else {
                                                                return 1;
                                                            }
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (scaled_features[5] <= 1.6494649946689606f) {
                                                    if (scaled_features[1] <= 0.10947383940219879f) {
                                                        return 2;
                                                    } else {
                                                        if (scaled_features[1] <= 0.3700612857937813f) {
                                                            return 1;
                                                        } else {
                                                            return 2;
                                                        }
                                                    }
                                                } else {
                                                    return 3;
                                                }
                                            }
                                        }
                                    } else {
                                        if (scaled_features[2] <= 0.43800705671310425f) {
                                            return 2;
                                        } else {
                                            if (scaled_features[4] <= -0.32836247980594635f) {
                                                return 3;
                                            } else {
                                                return 1;
                                            }
                                        }
                                    }
                                }
                            } else {
                                if (scaled_features[3] <= -0.10479153320193291f) {
                                    if (scaled_features[5] <= -0.33716967701911926f) {
                                        if (scaled_features[3] <= -0.12369882315397263f) {
                                            if (scaled_features[2] <= 0.9862696826457977f) {
                                                if (scaled_features[4] <= 0.05309135094285011f) {
                                                    if (scaled_features[4] <= 0.03846549056470394f) {
                                                        return 2;
                                                    } else {
                                                        return 1;
                                                    }
                                                } else {
                                                    return 2;
                                                }
                                            } else {
                                                if (scaled_features[0] <= 0.772874653339386f) {
                                                    return 3;
                                                } else {
                                                    return 2;
                                                }
                                            }
                                        } else {
                                            return 1;
                                        }
                                    } else {
                                        if (scaled_features[5] <= 0.31477680802345276f) {
                                            if (scaled_features[3] <= -0.4131780415773392f) {
                                                return 2;
                                            } else {
                                                if (scaled_features[5] <= -0.13573003560304642f) {
                                                    if (scaled_features[2] <= 0.17563527077436447f) {
                                                        if (scaled_features[2] <= 0.154544435441494f) {
                                                            return 1;
                                                        } else {
                                                            return 0;
                                                        }
                                                    } else {
                                                        return 1;
                                                    }
                                                } else {
                                                    if (scaled_features[3] <= -0.20109476894140244f) {
                                                        if (scaled_features[0] <= -0.2990545481443405f) {
                                                            if (scaled_features[1] <= 0.11951827071607113f) {
                                                                if (scaled_features[1] <= -0.058575840666890144f) {
                                                                    return 1;
                                                                } else {
                                                                    return 2;
                                                                }
                                                            } else {
                                                                return 1;
                                                            }
                                                        } else {
                                                            return 1;
                                                        }
                                                    } else {
                                                        if (scaled_features[5] <= 0.15749229490756989f) {
                                                            if (scaled_features[2] <= -0.1576833426952362f) {
                                                                if (scaled_features[0] <= -0.7007288038730621f) {
                                                                    return 1;
                                                                } else {
                                                                    if (scaled_features[4] <= 0.14619441516697407f) {
                                                                        return 0;
                                                                    } else {
                                                                        return 1;
                                                                    }
                                                                }
                                                            } else {
                                                                if (scaled_features[4] <= 0.2358570694923401f) {
                                                                    if (scaled_features[5] <= -0.045051854103803635f) {
                                                                        if (scaled_features[0] <= 0.389842227101326f) {
                                                                            if (scaled_features[2] <= 0.33627206832170486f) {
                                                                                return 1;
                                                                            } else {
                                                                                if (scaled_features[2] <= 0.4716484397649765f) {
                                                                                    return 0;
                                                                                } else {
                                                                                    return 0;
                                                                                }
                                                                            }
                                                                        } else {
                                                                            return 0;
                                                                        }
                                                                    } else {
                                                                        if (scaled_features[3] <= -0.11382418498396873f) {
                                                                            if (scaled_features[2] <= 1.0579379200935364f) {
                                                                                return 0;
                                                                            } else {
                                                                                if (scaled_features[1] <= -0.7969979643821716f) {
                                                                                    return 2;
                                                                                } else {
                                                                                    return 0;
                                                                                }
                                                                            }
                                                                        } else {
                                                                            return 1;
                                                                        }
                                                                    }
                                                                } else {
                                                                    return 1;
                                                                }
                                                            }
                                                        } else {
                                                            return 1;
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            if (scaled_features[2] <= 0.3498918265104294f) {
                                                if (scaled_features[4] <= 0.07620396465063095f) {
                                                    return 2;
                                                } else {
                                                    if (scaled_features[4] <= 0.23282291740179062f) {
                                                        return 1;
                                                    } else {
                                                        if (scaled_features[5] <= 0.979395180940628f) {
                                                            return 2;
                                                        } else {
                                                            return 3;
                                                        }
                                                    }
                                                }
                                            } else {
                                                return 1;
                                            }
                                        }
                                    }
                                } else {
                                    if (scaled_features[4] <= 0.25369879603385925f) {
                                        if (scaled_features[0] <= -0.6960372626781464f) {
                                            if (scaled_features[2] <= 1.4657195210456848f) {
                                                if (scaled_features[5] <= -0.20260165631771088f) {
                                                    if (scaled_features[5] <= -0.4797874838113785f) {
                                                        return 2;
                                                    } else {
                                                        if (scaled_features[1] <= -0.8721457719802856f) {
                                                            return 0;
                                                        } else {
                                                            if (scaled_features[0] <= -1.0646976232528687f) {
                                                                if (scaled_features[0] <= -1.1876951456069946f) {
                                                                    return 1;
                                                                } else {
                                                                    return 0;
                                                                }
                                                            } else {
                                                                return 1;
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    if (scaled_features[4] <= 0.19175604730844498f) {
                                                        if (scaled_features[1] <= -0.5506293177604675f) {
                                                            if (scaled_features[2] <= 0.0055261984234675765f) {
                                                                return 2;
                                                            } else {
                                                                return 1;
                                                            }
                                                        } else {
                                                            if (scaled_features[5] <= 0.2520582228899002f) {
                                                                if (scaled_features[0] <= -0.7110403478145599f) {
                                                                    if (scaled_features[3] <= 0.17388441413640976f) {
                                                                        if (scaled_features[3] <= 0.013486802112311125f) {
                                                                            if (scaled_features[4] <= 0.031897369772195816f) {
                                                                                if (scaled_features[1] <= 0.39235643669962883f) {
                                                                                    return 1;
                                                                                } else {
                                                                                    return 0;
                                                                                }
                                                                            } else {
                                                                                return 0;
                                                                            }
                                                                        } else {
                                                                            return 0;
                                                                        }
                                                                    } else {
                                                                        if (scaled_features[5] <= 0.047085028141736984f) {
                                                                            if (scaled_features[1] <= -0.059080012142658234f) {
                                                                                return 2;
                                                                            } else {
                                                                                return 1;
                                                                            }
                                                                        } else {
                                                                            return 0;
                                                                        }
                                                                    }
                                                                } else {
                                                                    return 1;
                                                                }
                                                            } else {
                                                                return 2;
                                                            }
                                                        }
                                                    } else {
                                                        return 1;
                                                    }
                                                }
                                            } else {
                                                return 1;
                                            }
                                        } else {
                                            if (scaled_features[1] <= -0.6372024118900299f) {
                                                if (scaled_features[4] <= -0.10494237020611763f) {
                                                    return 0;
                                                } else {
                                                    if (scaled_features[5] <= -0.16959872096776962f) {
                                                        if (scaled_features[3] <= 0.39096038043498993f) {
                                                            if (scaled_features[5] <= -0.2651350051164627f) {
                                                                return 1;
                                                            } else {
                                                                if (scaled_features[3] <= 0.09572494309395552f) {
                                                                    return 0;
                                                                } else {
                                                                    return 1;
                                                                }
                                                            }
                                                        } else {
                                                            if (scaled_features[0] <= 0.0017180535942316055f) {
                                                                return 3;
                                                            } else {
                                                                return 2;
                                                            }
                                                        }
                                                    } else {
                                                        if (scaled_features[2] <= 1.2992334365844727f) {
                                                            if (scaled_features[5] <= 0.16498415917158127f) {
                                                                if (scaled_features[4] <= -0.05926399119198322f) {
                                                                    if (scaled_features[0] <= -0.23565956205129623f) {
                                                                        return 0;
                                                                    } else {
                                                                        return 1;
                                                                    }
                                                                } else {
                                                                    if (scaled_features[5] <= 0.04589743725955486f) {
                                                                        if (scaled_features[4] <= 0.04087761044502258f) {
                                                                            if (scaled_features[3] <= 0.012592034181579947f) {
                                                                                return 0;
                                                                            } else {
                                                                                if (scaled_features[3] <= 0.020412967540323734f) {
                                                                                    return 1;
                                                                                } else {
                                                                                    return 0;
                                                                                }
                                                                            }
                                                                        } else {
                                                                            return 0;
                                                                        }
                                                                    } else {
                                                                        if (scaled_features[5] <= 0.057064738124608994f) {
                                                                            if (scaled_features[2] <= -0.019062727689743042f) {
                                                                                return 1;
                                                                            } else {
                                                                                return 0;
                                                                            }
                                                                        } else {
                                                                            if (scaled_features[0] <= 0.15917205810546875f) {
                                                                                if (scaled_features[4] <= 0.09571933560073376f) {
                                                                                    return 1;
                                                                                } else {
                                                                                    return 0;
                                                                                }
                                                                            } else {
                                                                                return 0;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            } else {
                                                                if (scaled_features[2] <= 0.09925583377480507f) {
                                                                    if (scaled_features[5] <= 0.4187348783016205f) {
                                                                        if (scaled_features[3] <= 0.04777889512479305f) {
                                                                            return 2;
                                                                        } else {
                                                                            return 1;
                                                                        }
                                                                    } else {
                                                                        return 2;
                                                                    }
                                                                } else {
                                                                    if (scaled_features[2] <= 0.7575273513793945f) {
                                                                        return 1;
                                                                    } else {
                                                                        if (scaled_features[1] <= -0.7595860362052917f) {
                                                                            return 0;
                                                                        } else {
                                                                            return 1;
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            if (scaled_features[4] <= -0.07814778573811054f) {
                                                                return 2;
                                                            } else {
                                                                return 1;
                                                            }
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (scaled_features[5] <= 0.19416942447423935f) {
                                                    if (scaled_features[5] <= -0.2451881542801857f) {
                                                        if (scaled_features[5] <= -0.453551709651947f) {
                                                            return 2;
                                                        } else {
                                                            if (scaled_features[1] <= 0.5287763923406601f) {
                                                                if (scaled_features[4] <= -0.07049203664064407f) {
                                                                    return 2;
                                                                } else {
                                                                    if (scaled_features[5] <= -0.2562183439731598f) {
                                                                        if (scaled_features[3] <= 0.522241935133934f) {
                                                                            return 1;
                                                                        } else {
                                                                            return 2;
                                                                        }
                                                                    } else {
                                                                        if (scaled_features[3] <= 0.11528442427515984f) {
                                                                            return 1;
                                                                        } else {
                                                                            return 2;
                                                                        }
                                                                    }
                                                                }
                                                            } else {
                                                                if (scaled_features[2] <= 0.5773640424013138f) {
                                                                    return 2;
                                                                } else {
                                                                    return 0;
                                                                }
                                                            }
                                                        }
                                                    } else {
                                                        if (scaled_features[5] <= -0.2012048363685608f) {
                                                            if (scaled_features[3] <= 0.1430138200521469f) {
                                                                if (scaled_features[2] <= -0.15934204682707787f) {
                                                                    return 1;
                                                                } else {
                                                                    if (scaled_features[4] <= 0.14204897359013557f) {
                                                                        if (scaled_features[0] <= 0.4445152282714844f) {
                                                                            return 0;
                                                                        } else {
                                                                            return 1;
                                                                        }
                                                                    } else {
                                                                        return 1;
                                                                    }
                                                                }
                                                            } else {
                                                                if (scaled_features[2] <= -0.1463201940059662f) {
                                                                    return 0;
                                                                } else {
                                                                    if (scaled_features[2] <= 0.5478340685367584f) {
                                                                        if (scaled_features[1] <= -0.2176869809627533f) {
                                                                            return 2;
                                                                        } else {
                                                                            return 1;
                                                                        }
                                                                    } else {
                                                                        return 1;
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            if (scaled_features[3] <= 0.303609237074852f) {
                                                                if (scaled_features[3] <= 0.18932083994150162f) {
                                                                    if (scaled_features[0] <= -0.20983193814754486f) {
                                                                        if (scaled_features[1] <= 0.39988064765930176f) {
                                                                            if (scaled_features[4] <= -0.10992272943258286f) {
                                                                                return 1;
                                                                            } else {
                                                                                if (scaled_features[5] <= 0.17828597873449326f) {
                                                                                    return 0;
                                                                                } else {
                                                                                    return 1;
                                                                                }
                                                                            }
                                                                        } else {
                                                                            if (scaled_features[1] <= 0.41334564983844757f) {
                                                                                return 1;
                                                                            } else {
                                                                                if (scaled_features[4] <= 0.21359333395957947f) {
                                                                                    return 0;
                                                                                } else {
                                                                                    return 2;
                                                                                }
                                                                            }
                                                                        }
                                                                    } else {
                                                                        if (scaled_features[2] <= 0.875969409942627f) {
                                                                            if (scaled_features[4] <= -0.059587107971310616f) {
                                                                                if (scaled_features[5] <= 0.03735063783824444f) {
                                                                                    return 0;
                                                                                } else {
                                                                                    return 0;
                                                                                }
                                                                            } else {
                                                                                if (scaled_features[3] <= -0.06997545436024666f) {
                                                                                    return 0;
                                                                                } else {
                                                                                    return 0;
                                                                                }
                                                                            }
                                                                        } else {
                                                                            if (scaled_features[0] <= -0.1548437625169754f) {
                                                                                if (scaled_features[4] <= -0.06683382391929626f) {
                                                                                    return 0;
                                                                                } else {
                                                                                    return 1;
                                                                                }
                                                                            } else {
                                                                                if (scaled_features[0] <= 0.09726119786500931f) {
                                                                                    return 0;
                                                                                } else {
                                                                                    return 0;
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                } else {
                                                                    if (scaled_features[4] <= 0.1636640727519989f) {
                                                                        if (scaled_features[0] <= -0.32994702458381653f) {
                                                                            return 0;
                                                                        } else {
                                                                            if (scaled_features[5] <= 0.15710093826055527f) {
                                                                                if (scaled_features[0] <= -0.2205401211977005f) {
                                                                                    return 1;
                                                                                } else {
                                                                                    return 0;
                                                                                }
                                                                            } else {
                                                                                return 2;
                                                                            }
                                                                        }
                                                                    } else {
                                                                        if (scaled_features[0] <= 0.584754079580307f) {
                                                                            if (scaled_features[4] <= 0.21655602008104324f) {
                                                                                if (scaled_features[0] <= -0.20189383148681372f) {
                                                                                    return 0;
                                                                                } else {
                                                                                    return 1;
                                                                                }
                                                                            } else {
                                                                                return 1;
                                                                            }
                                                                        } else {
                                                                            return 2;
                                                                        }
                                                                    }
                                                                }
                                                            } else {
                                                                if (scaled_features[3] <= 0.5560311824083328f) {
                                                                    if (scaled_features[0] <= 0.32727792859077454f) {
                                                                        if (scaled_features[1] <= -0.39897221326828003f) {
                                                                            return 0;
                                                                        } else {
                                                                            if (scaled_features[2] <= 0.6008351445198059f) {
                                                                                if (scaled_features[1] <= 0.5282323658466339f) {
                                                                                    return 1;
                                                                                } else {
                                                                                    return 2;
                                                                                }
                                                                            } else {
                                                                                if (scaled_features[3] <= 0.32004718482494354f) {
                                                                                    return 1;
                                                                                } else {
                                                                                    return 0;
                                                                                }
                                                                            }
                                                                        }
                                                                    } else {
                                                                        return 0;
                                                                    }
                                                                } else {
                                                                    return 2;
                                                                }
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    if (scaled_features[2] <= 0.6777408123016357f) {
                                                        if (scaled_features[5] <= 0.39011943340301514f) {
                                                            if (scaled_features[3] <= 0.3282571882009506f) {
                                                                if (scaled_features[2] <= 0.5992850959300995f) {
                                                                    if (scaled_features[5] <= 0.26351048052310944f) {
                                                                        if (scaled_features[5] <= 0.2519368901848793f) {
                                                                            return 1;
                                                                        } else {
                                                                            return 0;
                                                                        }
                                                                    } else {
                                                                        return 1;
                                                                    }
                                                                } else {
                                                                    return 0;
                                                                }
                                                            } else {
                                                                if (scaled_features[1] <= -0.020197637379169464f) {
                                                                    if (scaled_features[4] <= -0.045232607051730156f) {
                                                                        return 2;
                                                                    } else {
                                                                        return 1;
                                                                    }
                                                                } else {
                                                                    return 2;
                                                                }
                                                            }
                                                        } else {
                                                            return 2;
                                                        }
                                                    } else {
                                                        if (scaled_features[4] <= 0.07853181287646294f) {
                                                            return 1;
                                                        } else {
                                                            if (scaled_features[5] <= 0.47161993384361267f) {
                                                                if (scaled_features[5] <= 0.21515173465013504f) {
                                                                    return 0;
                                                                } else {
                                                                    if (scaled_features[1] <= 0.2853781282901764f) {
                                                                        return 1;
                                                                    } else {
                                                                        return 0;
                                                                    }
                                                                }
                                                            } else {
                                                                return 2;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        if (scaled_features[3] <= 0.38757477700710297f) {
                                            if (scaled_features[5] <= -0.5385400205850601f) {
                                                if (scaled_features[3] <= 0.23498492687940598f) {
                                                    return 3;
                                                } else {
                                                    return 2;
                                                }
                                            } else {
                                                if (scaled_features[1] <= 0.2670382857322693f) {
                                                    if (scaled_features[5] <= 0.43372075259685516f) {
                                                        if (scaled_features[1] <= -0.8538923859596252f) {
                                                            if (scaled_features[4] <= 0.317802369594574f) {
                                                                return 2;
                                                            } else {
                                                                return 1;
                                                            }
                                                        } else {
                                                            if (scaled_features[2] <= -0.4846288412809372f) {
                                                                if (scaled_features[4] <= 0.29966510832309723f) {
                                                                    return 2;
                                                                } else {
                                                                    return 1;
                                                                }
                                                            } else {
                                                                if (scaled_features[1] <= -0.504603236913681f) {
                                                                    if (scaled_features[1] <= -0.5687677264213562f) {
                                                                        return 1;
                                                                    } else {
                                                                        return 2;
                                                                    }
                                                                } else {
                                                                    return 1;
                                                                }
                                                            }
                                                        }
                                                    } else {
                                                        return 2;
                                                    }
                                                } else {
                                                    if (scaled_features[1] <= 0.3514239639043808f) {
                                                        if (scaled_features[2] <= 0.22199030593037605f) {
                                                            return 1;
                                                        } else {
                                                            return 0;
                                                        }
                                                    } else {
                                                        if (scaled_features[5] <= 0.10072098486125469f) {
                                                            if (scaled_features[3] <= 0.29508303105831146f) {
                                                                return 1;
                                                            } else {
                                                                if (scaled_features[3] <= 0.3318968564271927f) {
                                                                    return 2;
                                                                } else {
                                                                    return 1;
                                                                }
                                                            }
                                                        } else {
                                                            return 2;
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            if (scaled_features[3] <= 0.522268146276474f) {
                                                return 2;
                                            } else {
                                                if (scaled_features[5] <= 0.15944773703813553f) {
                                                    return 1;
                                                } else {
                                                    return 2;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (scaled_features[3] <= 0.8299647271633148f) {
                            if (scaled_features[5] <= 0.7299672961235046f) {
                                if (scaled_features[4] <= 0.7484552562236786f) {
                                    if (scaled_features[4] <= 0.4677642583847046f) {
                                        if (scaled_features[2] <= -0.5036703050136566f) {
                                            if (scaled_features[0] <= 0.2725030779838562f) {
                                                return 2;
                                            } else {
                                                if (scaled_features[4] <= 0.3766055554151535f) {
                                                    if (scaled_features[5] <= 0.32984133064746857f) {
                                                        return 0;
                                                    } else {
                                                        return 2;
                                                    }
                                                } else {
                                                    return 2;
                                                }
                                            }
                                        } else {
                                            if (scaled_features[3] <= 0.44874078035354614f) {
                                                if (scaled_features[0] <= 0.18023554235696793f) {
                                                    if (scaled_features[0] <= -0.6401852667331696f) {
                                                        return 1;
                                                    } else {
                                                        if (scaled_features[4] <= 0.4290621429681778f) {
                                                            return 2;
                                                        } else {
                                                            if (scaled_features[4] <= 0.43827101588249207f) {
                                                                return 1;
                                                            } else {
                                                                return 2;
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    if (scaled_features[0] <= 0.5454521924257278f) {
                                                        if (scaled_features[4] <= 0.4020654708147049f) {
                                                            return 1;
                                                        } else {
                                                            if (scaled_features[4] <= 0.41732870042324066f) {
                                                                return 2;
                                                            } else {
                                                                return 1;
                                                            }
                                                        }
                                                    } else {
                                                        return 2;
                                                    }
                                                }
                                            } else {
                                                return 2;
                                            }
                                        }
                                    } else {
                                        if (scaled_features[0] <= 0.726089209318161f) {
                                            return 2;
                                        } else {
                                            if (scaled_features[4] <= 0.6666662096977234f) {
                                                return 2;
                                            } else {
                                                if (scaled_features[0] <= 0.7501034736633301f) {
                                                    return 3;
                                                } else {
                                                    return 2;
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    if (scaled_features[3] <= -0.38573895394802094f) {
                                        return 2;
                                    } else {
                                        if (scaled_features[1] <= -0.5383769422769547f) {
                                            if (scaled_features[5] <= -1.2592145204544067f) {
                                                return 3;
                                            } else {
                                                return 2;
                                            }
                                        } else {
                                            return 3;
                                        }
                                    }
                                }
                            } else {
                                return 3;
                            }
                        } else {
                            return 3;
                        }
                    }
                }
            }
        } else {
            if (scaled_features[0] <= 1.5490840077400208f) {
                if (scaled_features[4] <= 0.337261825799942f) {
                    if (scaled_features[4] <= -0.19773442298173904f) {
                        return 3;
                    } else {
                        if (scaled_features[0] <= 1.4199034571647644f) {
                            if (scaled_features[0] <= 1.2486116886138916f) {
                                return 0;
                            } else {
                                if (scaled_features[1] <= -0.6172365695238113f) {
                                    return 0;
                                } else {
                                    return 1;
                                }
                            }
                        } else {
                            if (scaled_features[3] <= -0.13027120009064674f) {
                                return 2;
                            } else {
                                return 0;
                            }
                        }
                    }
                } else {
                    if (scaled_features[5] <= -0.12109346501529217f) {
                        if (scaled_features[2] <= -0.8915550857782364f) {
                            return 2;
                        } else {
                            if (scaled_features[4] <= 0.5633492767810822f) {
                                return 2;
                            } else {
                                if (scaled_features[5] <= -0.8122166097164154f) {
                                    return 3;
                                } else {
                                    return 2;
                                }
                            }
                        }
                    } else {
                        return 3;
                    }
                }
            } else {
                return 3;
            }
        }
    }
}


int predict_tree_1(float* features) {
    float scaled_features[6];
    for(int i = 0; i < 6; i++) {
        scaled_features[i] = (features[i] - 0.016768150196364864f) / 1.016266888400905f;
    }
    if (scaled_features[5] <= -0.7140609323978424f) {
        if (scaled_features[5] <= -0.8075706660747528f) {
            return 3;
        } else {
            if (scaled_features[0] <= 0.8944059312343597f) {
                if (scaled_features[3] <= -0.8472684174776077f) {
                    return 3;
                } else {
                    return 2;
                }
            } else {
                return 3;
            }
        }
    } else {
        if (scaled_features[1] <= 1.1203712224960327f) {
            if (scaled_features[3] <= 0.9070082902908325f) {
                if (scaled_features[3] <= -0.6712625920772552f) {
                    if (scaled_features[1] <= -0.35554538667201996f) {
                        return 3;
                    } else {
                        if (scaled_features[5] <= 0.07349008601158857f) {
                            if (scaled_features[1] <= -0.2935096025466919f) {
                                return 2;
                            } else {
                                return 3;
                            }
                        } else {
                            return 3;
                        }
                    }
                } else {
                    if (scaled_features[3] <= 0.4167700707912445f) {
                        if (scaled_features[5] <= 0.38142338395118713f) {
                            if (scaled_features[4] <= 0.35495220124721527f) {
                                if (scaled_features[3] <= -0.134993776679039f) {
                                    if (scaled_features[0] <= 1.134101390838623f) {
                                        if (scaled_features[3] <= -0.3832700550556183f) {
                                            return 2;
                                        } else {
                                            if (scaled_features[5] <= -0.4279007166624069f) {
                                                return 2;
                                            } else {
                                                if (scaled_features[1] <= -0.1322827823460102f) {
                                                    if (scaled_features[2] <= -1.3567073941230774f) {
                                                        return 2;
                                                    } else {
                                                        if (scaled_features[3] <= -0.1974727213382721f) {
                                                            if (scaled_features[2] <= -0.09162461385130882f) {
                                                                if (scaled_features[2] <= -0.14691995084285736f) {
                                                                    if (scaled_features[1] <= -0.21934667229652405f) {
                                                                        return 1;
                                                                    } else {
                                                                        if (scaled_features[5] <= 0.20314480923116207f) {
                                                                            return 1;
                                                                        } else {
                                                                            return 2;
                                                                        }
                                                                    }
                                                                } else {
                                                                    return 2;
                                                                }
                                                            } else {
                                                                return 1;
                                                            }
                                                        } else {
                                                            if (scaled_features[1] <= -0.47476688027381897f) {
                                                                if (scaled_features[2] <= 1.3637614250183105f) {
                                                                    return 1;
                                                                } else {
                                                                    return 2;
                                                                }
                                                            } else {
                                                                if (scaled_features[2] <= 0.6333902478218079f) {
                                                                    if (scaled_features[5] <= 0.13011670857667923f) {
                                                                        if (scaled_features[3] <= -0.1389509215950966f) {
                                                                            return 0;
                                                                        } else {
                                                                            return 1;
                                                                        }
                                                                    } else {
                                                                        if (scaled_features[4] <= -0.2873198091983795f) {
                                                                            return 2;
                                                                        } else {
                                                                            return 1;
                                                                        }
                                                                    }
                                                                } else {
                                                                    return 1;
                                                                }
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    if (scaled_features[4] <= -0.4196762293577194f) {
                                                        if (scaled_features[2] <= 0.4093211703002453f) {
                                                            return 2;
                                                        } else {
                                                            return 3;
                                                        }
                                                    } else {
                                                        if (scaled_features[1] <= -0.0937269814312458f) {
                                                            if (scaled_features[0] <= 0.04108165204524994f) {
                                                                return 2;
                                                            } else {
                                                                return 0;
                                                            }
                                                        } else {
                                                            if (scaled_features[4] <= 0.24869320541620255f) {
                                                                if (scaled_features[3] <= -0.1390310302376747f) {
                                                                    if (scaled_features[0] <= -0.3106771260499954f) {
                                                                        if (scaled_features[3] <= -0.26462920010089874f) {
                                                                            if (scaled_features[5] <= -0.25227104127407074f) {
                                                                                return 1;
                                                                            } else {
                                                                                if (scaled_features[1] <= 0.0687766745686531f) {
                                                                                    return 1;
                                                                                } else {
                                                                                    return 2;
                                                                                }
                                                                            }
                                                                        } else {
                                                                            if (scaled_features[1] <= 0.10248473659157753f) {
                                                                                return 2;
                                                                            } else {
                                                                                if (scaled_features[0] <= -0.4618186503648758f) {
                                                                                    return 1;
                                                                                } else {
                                                                                    return 2;
                                                                                }
                                                                            }
                                                                        }
                                                                    } else {
                                                                        if (scaled_features[1] <= 0.9380919933319092f) {
                                                                            if (scaled_features[2] <= 0.15471552312374115f) {
                                                                                return 1;
                                                                            } else {
                                                                                if (scaled_features[4] <= 0.09791373088955879f) {
                                                                                    return 1;
                                                                                } else {
                                                                                    return 0;
                                                                                }
                                                                            }
                                                                        } else {
                                                                            if (scaled_features[4] <= -0.12034543231129646f) {
                                                                                return 2;
                                                                            } else {
                                                                                return 1;
                                                                            }
                                                                        }
                                                                    }
                                                                } else {
                                                                    return 0;
                                                                }
                                                            } else {
                                                                if (scaled_features[2] <= -0.09763003140687943f) {
                                                                    return 2;
                                                                } else {
                                                                    if (scaled_features[5] <= -0.33635076880455017f) {
                                                                        return 2;
                                                                    } else {
                                                                        return 1;
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        if (scaled_features[2] <= 0.5822510346770287f) {
                                            if (scaled_features[1] <= -0.3406444787979126f) {
                                                if (scaled_features[4] <= 0.07885120622813702f) {
                                                    return 2;
                                                } else {
                                                    return 1;
                                                }
                                            } else {
                                                return 2;
                                            }
                                        } else {
                                            return 0;
                                        }
                                    }
                                } else {
                                    if (scaled_features[4] <= -0.1542656570672989f) {
                                        if (scaled_features[2] <= -0.7935417294502258f) {
                                            if (scaled_features[4] <= -0.3152429461479187f) {
                                                return 2;
                                            } else {
                                                if (scaled_features[4] <= -0.17691656202077866f) {
                                                    if (scaled_features[5] <= 0.22684746980667114f) {
                                                        return 1;
                                                    } else {
                                                        return 2;
                                                    }
                                                } else {
                                                    if (scaled_features[5] <= 0.14038654835894704f) {
                                                        return 2;
                                                    } else {
                                                        return 1;
                                                    }
                                                }
                                            }
                                        } else {
                                            if (scaled_features[4] <= -0.36110417544841766f) {
                                                if (scaled_features[1] <= -1.153543770313263f) {
                                                    return 3;
                                                } else {
                                                    if (scaled_features[1] <= 0.9658868312835693f) {
                                                        return 2;
                                                    } else {
                                                        return 3;
                                                    }
                                                }
                                            } else {
                                                if (scaled_features[4] <= -0.20650553703308105f) {
                                                    if (scaled_features[5] <= -0.33184273540973663f) {
                                                        return 2;
                                                    } else {
                                                        if (scaled_features[0] <= 1.7405089139938354f) {
                                                            if (scaled_features[5] <= 0.24205241352319717f) {
                                                                if (scaled_features[1] <= 0.8248227536678314f) {
                                                                    if (scaled_features[2] <= -0.13231178000569344f) {
                                                                        if (scaled_features[2] <= -0.1903400495648384f) {
                                                                            if (scaled_features[5] <= -0.03633475489914417f) {
                                                                                if (scaled_features[2] <= -0.27873189747333527f) {
                                                                                    return 0;
                                                                                } else {
                                                                                    return 1;
                                                                                }
                                                                            } else {
                                                                                if (scaled_features[4] <= -0.21727586537599564f) {
                                                                                    return 1;
                                                                                } else {
                                                                                    return 2;
                                                                                }
                                                                            }
                                                                        } else {
                                                                            return 0;
                                                                        }
                                                                    } else {
                                                                        if (scaled_features[5] <= 0.1035015769302845f) {
                                                                            if (scaled_features[2] <= 0.6434259712696075f) {
                                                                                if (scaled_features[0] <= 0.40346187353134155f) {
                                                                                    return 1;
                                                                                } else {
                                                                                    return 1;
                                                                                }
                                                                            } else {
                                                                                return 1;
                                                                            }
                                                                        } else {
                                                                            if (scaled_features[2] <= 0.7072423994541168f) {
                                                                                return 1;
                                                                            } else {
                                                                                if (scaled_features[0] <= -0.7400755435228348f) {
                                                                                    return 1;
                                                                                } else {
                                                                                    return 0;
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                } else {
                                                                    return 2;
                                                                }
                                                            } else {
                                                                if (scaled_features[5] <= 0.24959410727024078f) {
                                                                    return 2;
                                                                } else {
                                                                    if (scaled_features[0] <= -0.18776991218328476f) {
                                                                        return 1;
                                                                    } else {
                                                                        if (scaled_features[2] <= -0.008657336235046387f) {
                                                                            return 2;
                                                                        } else {
                                                                            if (scaled_features[4] <= -0.2943508177995682f) {
                                                                                return 2;
                                                                            } else {
                                                                                return 1;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            return 3;
                                                        }
                                                    }
                                                } else {
                                                    if (scaled_features[1] <= 0.303900346159935f) {
                                                        if (scaled_features[4] <= -0.17072762548923492f) {
                                                            if (scaled_features[5] <= -0.1910102292895317f) {
                                                                if (scaled_features[2] <= 0.18667799420654774f) {
                                                                    if (scaled_features[5] <= -0.21608750522136688f) {
                                                                        if (scaled_features[4] <= -0.19068976491689682f) {
                                                                            return 1;
                                                                        } else {
                                                                            return 2;
                                                                        }
                                                                    } else {
                                                                        return 2;
                                                                    }
                                                                } else {
                                                                    return 1;
                                                                }
                                                            } else {
                                                                if (scaled_features[5] <= -0.06850534304976463f) {
                                                                    if (scaled_features[3] <= 0.0560874855145812f) {
                                                                        return 0;
                                                                    } else {
                                                                        if (scaled_features[1] <= 0.08481676131486893f) {
                                                                            return 0;
                                                                        } else {
                                                                            if (scaled_features[4] <= -0.19263821095228195f) {
                                                                                return 2;
                                                                            } else {
                                                                                return 0;
                                                                            }
                                                                        }
                                                                    }
                                                                } else {
                                                                    if (scaled_features[5] <= -0.04441796615719795f) {
                                                                        return 1;
                                                                    } else {
                                                                        if (scaled_features[4] <= -0.17680847644805908f) {
                                                                            if (scaled_features[2] <= 0.6117030680179596f) {
                                                                                if (scaled_features[5] <= 0.06204588524997234f) {
                                                                                    return 0;
                                                                                } else {
                                                                                    return 1;
                                                                                }
                                                                            } else {
                                                                                return 0;
                                                                            }
                                                                        } else {
                                                                            return 0;
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            if (scaled_features[4] <= -0.1674167960882187f) {
                                                                if (scaled_features[0] <= -0.636256255209446f) {
                                                                    return 1;
                                                                } else {
                                                                    return 2;
                                                                }
                                                            } else {
                                                                return 1;
                                                            }
                                                        }
                                                    } else {
                                                        if (scaled_features[5] <= -0.4899027645587921f) {
                                                            return 2;
                                                        } else {
                                                            if (scaled_features[3] <= 0.11209249496459961f) {
                                                                if (scaled_features[3] <= 0.03635398781625554f) {
                                                                    if (scaled_features[1] <= 0.5368113219738007f) {
                                                                        return 1;
                                                                    } else {
                                                                        return 0;
                                                                    }
                                                                } else {
                                                                    return 0;
                                                                }
                                                            } else {
                                                                return 1;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        if (scaled_features[5] <= -0.2158839926123619f) {
                                            if (scaled_features[2] <= -0.4435894936323166f) {
                                                if (scaled_features[0] <= -0.18638023734092712f) {
                                                    if (scaled_features[4] <= 0.06384260766208172f) {
                                                        if (scaled_features[4] <= -0.0622224286198616f) {
                                                            if (scaled_features[5] <= -0.27708423137664795f) {
                                                                return 2;
                                                            } else {
                                                                if (scaled_features[4] <= -0.07476352900266647f) {
                                                                    return 1;
                                                                } else {
                                                                    return 0;
                                                                }
                                                            }
                                                        } else {
                                                            return 2;
                                                        }
                                                    } else {
                                                        if (scaled_features[0] <= -0.7141289710998535f) {
                                                            return 3;
                                                        } else {
                                                            return 2;
                                                        }
                                                    }
                                                } else {
                                                    if (scaled_features[0] <= 0.07387852855026722f) {
                                                        if (scaled_features[5] <= -0.45640453696250916f) {
                                                            return 2;
                                                        } else {
                                                            return 1;
                                                        }
                                                    } else {
                                                        if (scaled_features[2] <= -0.7427115142345428f) {
                                                            if (scaled_features[5] <= -0.3929528743028641f) {
                                                                return 2;
                                                            } else {
                                                                return 1;
                                                            }
                                                        } else {
                                                            return 2;
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (scaled_features[1] <= -0.9703800678253174f) {
                                                    if (scaled_features[5] <= -0.3764572888612747f) {
                                                        return 2;
                                                    } else {
                                                        return 0;
                                                    }
                                                } else {
                                                    if (scaled_features[0] <= -1.0578550398349762f) {
                                                        if (scaled_features[2] <= 0.5522107630968094f) {
                                                            return 1;
                                                        } else {
                                                            return 0;
                                                        }
                                                    } else {
                                                        if (scaled_features[3] <= 0.08723853528499603f) {
                                                            if (scaled_features[3] <= 0.01833865698426962f) {
                                                                return 1;
                                                            } else {
                                                                if (scaled_features[0] <= -0.09732222557067871f) {
                                                                    if (scaled_features[2] <= 0.4722835570573807f) {
                                                                        return 0;
                                                                    } else {
                                                                        if (scaled_features[3] <= 0.03902754466980696f) {
                                                                            return 0;
                                                                        } else {
                                                                            return 1;
                                                                        }
                                                                    }
                                                                } else {
                                                                    return 1;
                                                                }
                                                            }
                                                        } else {
                                                            if (scaled_features[3] <= 0.11151844263076782f) {
                                                                return 2;
                                                            } else {
                                                                if (scaled_features[3] <= 0.14912863820791245f) {
                                                                    if (scaled_features[2] <= -0.29532843828201294f) {
                                                                        return 1;
                                                                    } else {
                                                                        if (scaled_features[0] <= 0.225718155503273f) {
                                                                            return 1;
                                                                        } else {
                                                                            return 0;
                                                                        }
                                                                    }
                                                                } else {
                                                                    if (scaled_features[1] <= 0.5350199490785599f) {
                                                                        if (scaled_features[5] <= -0.24154891818761826f) {
                                                                            if (scaled_features[0] <= 0.0908658467233181f) {
                                                                                return 1;
                                                                            } else {
                                                                                if (scaled_features[5] <= -0.29366977512836456f) {
                                                                                    return 1;
                                                                                } else {
                                                                                    return 2;
                                                                                }
                                                                            }
                                                                        } else {
                                                                            if (scaled_features[4] <= 0.05503719672560692f) {
                                                                                return 1;
                                                                            } else {
                                                                                return 2;
                                                                            }
                                                                        }
                                                                    } else {
                                                                        if (scaled_features[3] <= 0.30928727984428406f) {
                                                                            return 2;
                                                                        } else {
                                                                            return 1;
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            if (scaled_features[4] <= 0.23475344479084015f) {
                                                if (scaled_features[3] <= 0.27162592113018036f) {
                                                    if (scaled_features[3] <= 0.1296582818031311f) {
                                                        if (scaled_features[3] <= -0.07615881785750389f) {
                                                            if (scaled_features[4] <= 0.06439249962568283f) {
                                                                if (scaled_features[5] <= 0.12923332676291466f) {
                                                                    if (scaled_features[0] <= 0.38340698182582855f) {
                                                                        if (scaled_features[5] <= -0.08979622647166252f) {
                                                                            if (scaled_features[4] <= -0.04294007271528244f) {
                                                                                if (scaled_features[3] <= -0.08592294901609421f) {
                                                                                    return 1;
                                                                                } else {
                                                                                    return 2;
                                                                                }
                                                                            } else {
                                                                                return 1;
                                                                            }
                                                                        } else {
                                                                            if (scaled_features[1] <= 0.4771531820297241f) {
                                                                                return 0;
                                                                            } else {
                                                                                return 1;
                                                                            }
                                                                        }
                                                                    } else {
                                                                        if (scaled_features[1] <= 0.7014868557453156f) {
                                                                            return 0;
                                                                        } else {
                                                                            if (scaled_features[1] <= 0.7945205271244049f) {
                                                                                return 1;
                                                                            } else {
                                                                                return 0;
                                                                            }
                                                                        }
                                                                    }
                                                                } else {
                                                                    if (scaled_features[2] <= -1.4354240894317627f) {
                                                                        return 0;
                                                                    } else {
                                                                        return 1;
                                                                    }
                                                                }
                                                            } else {
                                                                if (scaled_features[5] <= 0.23102130740880966f) {
                                                                    if (scaled_features[5] <= -0.1742541268467903f) {
                                                                        if (scaled_features[3] <= -0.09597071632742882f) {
                                                                            return 0;
                                                                        } else {
                                                                            return 1;
                                                                        }
                                                                    } else {
                                                                        if (scaled_features[4] <= 0.21387960761785507f) {
                                                                            if (scaled_features[3] <= -0.13288339227437973f) {
                                                                                return 1;
                                                                            } else {
                                                                                return 0;
                                                                            }
                                                                        } else {
                                                                            if (scaled_features[5] <= -0.045739512890577316f) {
                                                                                return 0;
                                                                            } else {
                                                                                return 1;
                                                                            }
                                                                        }
                                                                    }
                                                                } else {
                                                                    return 1;
                                                                }
                                                            }
                                                        } else {
                                                            if (scaled_features[0] <= 0.08834708854556084f) {
                                                                if (scaled_features[1] <= 0.864069789648056f) {
                                                                    if (scaled_features[0] <= -0.6420769989490509f) {
                                                                        if (scaled_features[0] <= -0.7465507686138153f) {
                                                                            if (scaled_features[2] <= -0.5189551264047623f) {
                                                                                if (scaled_features[4] <= 0.13287635520100594f) {
                                                                                    return 1;
                                                                                } else {
                                                                                    return 0;
                                                                                }
                                                                            } else {
                                                                                if (scaled_features[2] <= 0.7100338339805603f) {
                                                                                    return 0;
                                                                                } else {
                                                                                    return 0;
                                                                                }
                                                                            }
                                                                        } else {
                                                                            if (scaled_features[4] <= -0.0070944062899798155f) {
                                                                                return 1;
                                                                            } else {
                                                                                if (scaled_features[5] <= -0.1371191367506981f) {
                                                                                    return 1;
                                                                                } else {
                                                                                    return 0;
                                                                                }
                                                                            }
                                                                        }
                                                                    } else {
                                                                        if (scaled_features[3] <= 0.08296536654233932f) {
                                                                            if (scaled_features[5] <= 0.1625739336013794f) {
                                                                                if (scaled_features[2] <= -0.5135655701160431f) {
                                                                                    return 0;
                                                                                } else {
                                                                                    return 0;
                                                                                }
                                                                            } else {
                                                                                if (scaled_features[2] <= 0.4798273369669914f) {
                                                                                    return 1;
                                                                                } else {
                                                                                    return 0;
                                                                                }
                                                                            }
                                                                        } else {
                                                                            if (scaled_features[4] <= -0.13802379369735718f) {
                                                                                return 2;
                                                                            } else {
                                                                                if (scaled_features[2] <= 1.6241650581359863f) {
                                                                                    return 0;
                                                                                } else {
                                                                                    return 1;
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                } else {
                                                                    if (scaled_features[1] <= 0.8696215152740479f) {
                                                                        return 1;
                                                                    } else {
                                                                        return 0;
                                                                    }
                                                                }
                                                            } else {
                                                                if (scaled_features[1] <= -1.2869696617126465f) {
                                                                    if (scaled_features[2] <= 0.5019450709223747f) {
                                                                        return 1;
                                                                    } else {
                                                                        return 0;
                                                                    }
                                                                } else {
                                                                    if (scaled_features[5] <= 0.18544935435056686f) {
                                                                        if (scaled_features[3] <= 0.12386735156178474f) {
                                                                            if (scaled_features[2] <= 0.3059185743331909f) {
                                                                                if (scaled_features[5] <= -0.12272835150361061f) {
                                                                                    return 0;
                                                                                } else {
                                                                                    return 0;
                                                                                }
                                                                            } else {
                                                                                if (scaled_features[0] <= 0.30694858729839325f) {
                                                                                    return 0;
                                                                                } else {
                                                                                    return 0;
                                                                                }
                                                                            }
                                                                        } else {
                                                                            if (scaled_features[4] <= -0.08080348931252956f) {
                                                                                return 1;
                                                                            } else {
                                                                                return 0;
                                                                            }
                                                                        }
                                                                    } else {
                                                                        if (scaled_features[5] <= 0.22442162036895752f) {
                                                                            if (scaled_features[3] <= -0.0014686640352010727f) {
                                                                                return 0;
                                                                            } else {
                                                                                return 1;
                                                                            }
                                                                        } else {
                                                                            return 1;
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    } else {
                                                        if (scaled_features[5] <= 0.14329731464385986f) {
                                                            if (scaled_features[0] <= -0.8240576088428497f) {
                                                                return 1;
                                                            } else {
                                                                if (scaled_features[1] <= 0.21494486927986145f) {
                                                                    if (scaled_features[4] <= 0.19523748010396957f) {
                                                                        if (scaled_features[0] <= -0.48049481213092804f) {
                                                                            return 0;
                                                                        } else {
                                                                            if (scaled_features[1] <= 0.1200099028646946f) {
                                                                                if (scaled_features[4] <= -0.04957080818712711f) {
                                                                                    return 0;
                                                                                } else {
                                                                                    return 0;
                                                                                }
                                                                            } else {
                                                                                if (scaled_features[3] <= 0.2541247084736824f) {
                                                                                    return 1;
                                                                                } else {
                                                                                    return 0;
                                                                                }
                                                                            }
                                                                        }
                                                                    } else {
                                                                        if (scaled_features[3] <= 0.18689106404781342f) {
                                                                            return 0;
                                                                        } else {
                                                                            return 1;
                                                                        }
                                                                    }
                                                                } else {
                                                                    if (scaled_features[0] <= -0.7606955468654633f) {
                                                                        return 1;
                                                                    } else {
                                                                        if (scaled_features[2] <= 1.5236122608184814f) {
                                                                            if (scaled_features[5] <= -0.16130439937114716f) {
                                                                                if (scaled_features[1] <= 0.6841071248054504f) {
                                                                                    return 0;
                                                                                } else {
                                                                                    return 1;
                                                                                }
                                                                            } else {
                                                                                if (scaled_features[4] <= -0.1317237727344036f) {
                                                                                    return 1;
                                                                                } else {
                                                                                    return 0;
                                                                                }
                                                                            }
                                                                        } else {
                                                                            return 1;
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            if (scaled_features[3] <= 0.1574515551328659f) {
                                                                if (scaled_features[1] <= 0.3109215199947357f) {
                                                                    return 1;
                                                                } else {
                                                                    return 0;
                                                                }
                                                            } else {
                                                                if (scaled_features[3] <= 0.16950977593660355f) {
                                                                    return 0;
                                                                } else {
                                                                    if (scaled_features[0] <= -0.4350734353065491f) {
                                                                        if (scaled_features[4] <= -0.13642435520887375f) {
                                                                            return 0;
                                                                        } else {
                                                                            return 1;
                                                                        }
                                                                    } else {
                                                                        if (scaled_features[1] <= 0.3054593950510025f) {
                                                                            return 1;
                                                                        } else {
                                                                            return 2;
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    if (scaled_features[2] <= -1.1633762121200562f) {
                                                        if (scaled_features[0] <= -0.7202364802360535f) {
                                                            return 1;
                                                        } else {
                                                            if (scaled_features[3] <= 0.29534581303596497f) {
                                                                return 1;
                                                            } else {
                                                                return 2;
                                                            }
                                                        }
                                                    } else {
                                                        if (scaled_features[2] <= -0.1269473247230053f) {
                                                            return 1;
                                                        } else {
                                                            if (scaled_features[0] <= -0.004711935966042802f) {
                                                                if (scaled_features[5] <= 0.12302283942699432f) {
                                                                    if (scaled_features[5] <= 0.09301082789897919f) {
                                                                        if (scaled_features[1] <= 0.3037407249212265f) {
                                                                            return 1;
                                                                        } else {
                                                                            if (scaled_features[2] <= 0.7222748100757599f) {
                                                                                return 1;
                                                                            } else {
                                                                                return 0;
                                                                            }
                                                                        }
                                                                    } else {
                                                                        return 0;
                                                                    }
                                                                } else {
                                                                    return 1;
                                                                }
                                                            } else {
                                                                if (scaled_features[3] <= 0.3031133711338043f) {
                                                                    if (scaled_features[5] <= -0.11998974904417992f) {
                                                                        return 1;
                                                                    } else {
                                                                        return 0;
                                                                    }
                                                                } else {
                                                                    if (scaled_features[0] <= 0.2714967355132103f) {
                                                                        if (scaled_features[3] <= 0.35860903561115265f) {
                                                                            return 1;
                                                                        } else {
                                                                            return 2;
                                                                        }
                                                                    } else {
                                                                        if (scaled_features[2] <= 1.4517707824707031f) {
                                                                            if (scaled_features[0] <= 0.7088860273361206f) {
                                                                                return 0;
                                                                            } else {
                                                                                if (scaled_features[4] <= -0.05398685671389103f) {
                                                                                    return 1;
                                                                                } else {
                                                                                    return 0;
                                                                                }
                                                                            }
                                                                        } else {
                                                                            return 1;
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (scaled_features[4] <= 0.2731848806142807f) {
                                                    if (scaled_features[4] <= 0.2669193744659424f) {
                                                        if (scaled_features[3] <= -0.08367136493325233f) {
                                                            return 0;
                                                        } else {
                                                            if (scaled_features[5] <= 0.09989460930228233f) {
                                                                if (scaled_features[5] <= 0.0877278484404087f) {
                                                                    return 1;
                                                                } else {
                                                                    return 0;
                                                                }
                                                            } else {
                                                                return 1;
                                                            }
                                                        }
                                                    } else {
                                                        return 0;
                                                    }
                                                } else {
                                                    if (scaled_features[3] <= 0.3113478571176529f) {
                                                        return 1;
                                                    } else {
                                                        if (scaled_features[1] <= 0.24008886702358723f) {
                                                            return 1;
                                                        } else {
                                                            return 2;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                if (scaled_features[2] <= 0.6172209680080414f) {
                                    if (scaled_features[3] <= 0.34960295259952545f) {
                                        if (scaled_features[2] <= -2.1866345405578613f) {
                                            return 3;
                                        } else {
                                            if (scaled_features[2] <= -0.5044782757759094f) {
                                                if (scaled_features[3] <= 0.1267293468117714f) {
                                                    return 2;
                                                } else {
                                                    if (scaled_features[4] <= 1.459994912147522f) {
                                                        return 2;
                                                    } else {
                                                        return 3;
                                                    }
                                                }
                                            } else {
                                                if (scaled_features[2] <= -0.19534575194120407f) {
                                                    if (scaled_features[4] <= 0.3936142474412918f) {
                                                        return 1;
                                                    } else {
                                                        if (scaled_features[5] <= 0.10317230853252113f) {
                                                            return 2;
                                                        } else {
                                                            if (scaled_features[5] <= 0.22428986430168152f) {
                                                                return 1;
                                                            } else {
                                                                return 2;
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    if (scaled_features[2] <= -0.05040416494011879f) {
                                                        if (scaled_features[4] <= 0.40481607615947723f) {
                                                            return 1;
                                                        } else {
                                                            return 2;
                                                        }
                                                    } else {
                                                        return 2;
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        if (scaled_features[1] <= -0.4559246748685837f) {
                                            return 3;
                                        } else {
                                            if (scaled_features[1] <= 0.4909012168645859f) {
                                                return 2;
                                            } else {
                                                return 1;
                                            }
                                        }
                                    }
                                } else {
                                    if (scaled_features[4] <= 0.45156149566173553f) {
                                        return 1;
                                    } else {
                                        if (scaled_features[1] <= -1.5147587358951569f) {
                                            return 3;
                                        } else {
                                            return 2;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (scaled_features[5] <= 0.7672964036464691f) {
                                if (scaled_features[4] <= 1.2961816787719727f) {
                                    if (scaled_features[4] <= -1.806894451379776f) {
                                        return 3;
                                    } else {
                                        if (scaled_features[5] <= 0.7292666137218475f) {
                                            if (scaled_features[2] <= -0.41406166553497314f) {
                                                return 2;
                                            } else {
                                                if (scaled_features[2] <= -0.37477558851242065f) {
                                                    return 1;
                                                } else {
                                                    if (scaled_features[2] <= 1.2586529850959778f) {
                                                        if (scaled_features[3] <= 0.17564745247364044f) {
                                                            return 2;
                                                        } else {
                                                            if (scaled_features[2] <= 0.04788388591259718f) {
                                                                return 1;
                                                            } else {
                                                                return 2;
                                                            }
                                                        }
                                                    } else {
                                                        if (scaled_features[0] <= -0.15188253670930862f) {
                                                            return 2;
                                                        } else {
                                                            return 1;
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            if (scaled_features[0] <= 1.078615665435791f) {
                                                return 2;
                                            } else {
                                                return 3;
                                            }
                                        }
                                    }
                                } else {
                                    return 3;
                                }
                            } else {
                                return 3;
                            }
                        }
                    } else {
                        if (scaled_features[4] <= -0.7770676016807556f) {
                            return 3;
                        } else {
                            if (scaled_features[5] <= 0.9250742495059967f) {
                                if (scaled_features[2] <= 1.0575339794158936f) {
                                    if (scaled_features[0] <= 1.2326105833053589f) {
                                        if (scaled_features[4] <= -0.39265234768390656f) {
                                            return 2;
                                        } else {
                                            if (scaled_features[1] <= 0.8481514751911163f) {
                                                if (scaled_features[3] <= 0.4768148362636566f) {
                                                    if (scaled_features[2] <= -0.43721042573451996f) {
                                                        return 2;
                                                    } else {
                                                        if (scaled_features[0] <= -0.15776381641626358f) {
                                                            if (scaled_features[3] <= 0.42982424795627594f) {
                                                                return 1;
                                                            } else {
                                                                return 2;
                                                            }
                                                        } else {
                                                            if (scaled_features[1] <= -0.5916565507650375f) {
                                                                return 2;
                                                            } else {
                                                                if (scaled_features[5] <= -0.31119706481695175f) {
                                                                    return 2;
                                                                } else {
                                                                    if (scaled_features[5] <= 0.20114488154649734f) {
                                                                        return 1;
                                                                    } else {
                                                                        if (scaled_features[3] <= 0.4548231363296509f) {
                                                                            return 2;
                                                                        } else {
                                                                            return 1;
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    if (scaled_features[1] <= 0.016006700228899717f) {
                                                        if (scaled_features[2] <= 0.2722240462899208f) {
                                                            if (scaled_features[4] <= 0.056077729910612106f) {
                                                                if (scaled_features[1] <= -0.11619751760736108f) {
                                                                    if (scaled_features[2] <= -0.1585720032453537f) {
                                                                        return 2;
                                                                    } else {
                                                                        if (scaled_features[4] <= -0.136640727519989f) {
                                                                            return 1;
                                                                        } else {
                                                                            return 2;
                                                                        }
                                                                    }
                                                                } else {
                                                                    return 1;
                                                                }
                                                            } else {
                                                                return 2;
                                                            }
                                                        } else {
                                                            if (scaled_features[5] <= -0.21857740730047226f) {
                                                                return 1;
                                                            } else {
                                                                return 2;
                                                            }
                                                        }
                                                    } else {
                                                        return 2;
                                                    }
                                                }
                                            } else {
                                                if (scaled_features[2] <= -1.2546766102313995f) {
                                                    return 1;
                                                } else {
                                                    if (scaled_features[3] <= 0.5075189918279648f) {
                                                        return 1;
                                                    } else {
                                                        return 2;
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        if (scaled_features[3] <= 0.5201920121908188f) {
                                            return 1;
                                        } else {
                                            return 2;
                                        }
                                    }
                                } else {
                                    if (scaled_features[0] <= -0.28595299273729324f) {
                                        return 1;
                                    } else {
                                        if (scaled_features[2] <= 1.249617099761963f) {
                                            return 1;
                                        } else {
                                            return 2;
                                        }
                                    }
                                }
                            } else {
                                return 3;
                            }
                        }
                    }
                }
            } else {
                return 3;
            }
        } else {
            if (scaled_features[4] <= 0.6120135188102722f) {
                if (scaled_features[3] <= -0.4083479344844818f) {
                    return 3;
                } else {
                    if (scaled_features[3] <= 0.7044879794120789f) {
                        if (scaled_features[4] <= -0.6394367516040802f) {
                            return 3;
                        } else {
                            if (scaled_features[0] <= -0.5195842832326889f) {
                                if (scaled_features[4] <= 0.37113291770219803f) {
                                    return 1;
                                } else {
                                    return 2;
                                }
                            } else {
                                if (scaled_features[4] <= 0.04594309255480766f) {
                                    if (scaled_features[3] <= -0.22751984745264053f) {
                                        return 3;
                                    } else {
                                        if (scaled_features[3] <= 0.3514135628938675f) {
                                            if (scaled_features[0] <= 0.2994483485817909f) {
                                                return 2;
                                            } else {
                                                if (scaled_features[2] <= 0.46750424802303314f) {
                                                    if (scaled_features[4] <= -0.2581213712692261f) {
                                                        return 2;
                                                    } else {
                                                        if (scaled_features[5] <= -0.037870146334171295f) {
                                                            return 1;
                                                        } else {
                                                            return 2;
                                                        }
                                                    }
                                                } else {
                                                    return 0;
                                                }
                                            }
                                        } else {
                                            return 2;
                                        }
                                    }
                                } else {
                                    if (scaled_features[0] <= 0.3514354703947902f) {
                                        return 0;
                                    } else {
                                        if (scaled_features[4] <= 0.3012419641017914f) {
                                            return 2;
                                        } else {
                                            return 1;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        return 3;
                    }
                }
            } else {
                return 3;
            }
        }
    }
}


int predict_tree_2(float* features) {
    float scaled_features[6];
    for(int i = 0; i < 6; i++) {
        scaled_features[i] = (features[i] - 9.88522200981208f) / 0.7304700361248821f;
    }
    if (scaled_features[3] <= -0.6658619344234467f) {
        if (scaled_features[2] <= 0.04090819135308266f) {
            if (scaled_features[5] <= -0.06349454540759325f) {
                return 3;
            } else {
                if (scaled_features[1] <= -0.3260677605867386f) {
                    return 3;
                } else {
                    if (scaled_features[5] <= 0.5686973929405212f) {
                        if (scaled_features[1] <= 1.5328974723815918f) {
                            return 2;
                        } else {
                            return 3;
                        }
                    } else {
                        return 3;
                    }
                }
            }
        } else {
            return 3;
        }
    } else {
        if (scaled_features[4] <= 0.731296569108963f) {
            if (scaled_features[4] <= -0.7234395444393158f) {
                if (scaled_features[3] <= -0.5285859405994415f) {
                    if (scaled_features[0] <= 0.48341846466064453f) {
                        return 2;
                    } else {
                        return 3;
                    }
                } else {
                    if (scaled_features[2] <= -0.8330036699771881f) {
                        if (scaled_features[4] <= -0.7531459033489227f) {
                            return 3;
                        } else {
                            return 2;
                        }
                    } else {
                        return 3;
                    }
                }
            } else {
                if (scaled_features[2] <= -0.4818769693374634f) {
                    if (scaled_features[2] <= -1.2668786644935608f) {
                        if (scaled_features[0] <= 0.8161158561706543f) {
                            if (scaled_features[1] <= 0.07972079515457153f) {
                                if (scaled_features[5] <= 0.12241590023040771f) {
                                    if (scaled_features[3] <= 0.3791101723909378f) {
                                        if (scaled_features[4] <= -0.29542257636785507f) {
                                            return 2;
                                        } else {
                                            if (scaled_features[3] <= -0.09985379502177238f) {
                                                if (scaled_features[3] <= -0.3013038784265518f) {
                                                    return 2;
                                                } else {
                                                    if (scaled_features[2] <= -1.982097566127777f) {
                                                        return 2;
                                                    } else {
                                                        return 1;
                                                    }
                                                }
                                            } else {
                                                if (scaled_features[5] <= -0.12500695139169693f) {
                                                    return 1;
                                                } else {
                                                    if (scaled_features[4] <= 0.07229236327111721f) {
                                                        return 0;
                                                    } else {
                                                        if (scaled_features[2] <= -1.5499477982521057f) {
                                                            return 0;
                                                        } else {
                                                            return 1;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        return 2;
                                    }
                                } else {
                                    if (scaled_features[0] <= -0.8397491574287415f) {
                                        return 0;
                                    } else {
                                        if (scaled_features[1] <= 0.013202599715441465f) {
                                            if (scaled_features[1] <= -0.2202722355723381f) {
                                                return 2;
                                            } else {
                                                if (scaled_features[3] <= 0.33328160643577576f) {
                                                    return 2;
                                                } else {
                                                    if (scaled_features[0] <= -0.18905647099018097f) {
                                                        return 2;
                                                    } else {
                                                        return 1;
                                                    }
                                                }
                                            }
                                        } else {
                                            return 1;
                                        }
                                    }
                                }
                            } else {
                                if (scaled_features[0] <= -1.9383442401885986f) {
                                    return 3;
                                } else {
                                    if (scaled_features[1] <= 0.5896981954574585f) {
                                        if (scaled_features[2] <= -1.468033492565155f) {
                                            return 2;
                                        } else {
                                            if (scaled_features[1] <= 0.2180817350745201f) {
                                                return 2;
                                            } else {
                                                if (scaled_features[4] <= 0.17962749302387238f) {
                                                    if (scaled_features[0] <= -0.36915095522999763f) {
                                                        return 0;
                                                    } else {
                                                        if (scaled_features[4] <= -0.32427436113357544f) {
                                                            return 2;
                                                        } else {
                                                            return 1;
                                                        }
                                                    }
                                                } else {
                                                    return 2;
                                                }
                                            }
                                        }
                                    } else {
                                        if (scaled_features[4] <= -0.35743139684200287f) {
                                            return 2;
                                        } else {
                                            if (scaled_features[2] <= -1.7987778186798096f) {
                                                if (scaled_features[1] <= 0.8783470690250397f) {
                                                    return 1;
                                                } else {
                                                    return 2;
                                                }
                                            } else {
                                                if (scaled_features[2] <= -1.532276690006256f) {
                                                    if (scaled_features[3] <= 0.08395942393690348f) {
                                                        return 1;
                                                    } else {
                                                        return 0;
                                                    }
                                                } else {
                                                    if (scaled_features[3] <= 0.19715018570423126f) {
                                                        return 2;
                                                    } else {
                                                        if (scaled_features[3] <= 0.2917031794786453f) {
                                                            return 1;
                                                        } else {
                                                            return 2;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        } else {
                            if (scaled_features[0] <= 1.453117311000824f) {
                                if (scaled_features[1] <= 0.30698831379413605f) {
                                    return 2;
                                } else {
                                    if (scaled_features[4] <= 0.13676228746771812f) {
                                        if (scaled_features[5] <= -0.0518952701240778f) {
                                            return 0;
                                        } else {
                                            return 1;
                                        }
                                    } else {
                                        return 3;
                                    }
                                }
                            } else {
                                return 3;
                            }
                        }
                    } else {
                        if (scaled_features[5] <= -0.33257898688316345f) {
                            if (scaled_features[3] <= 1.582913190126419f) {
                                if (scaled_features[5] <= -0.37494590878486633f) {
                                    return 2;
                                } else {
                                    if (scaled_features[2] <= -0.6398305892944336f) {
                                        return 2;
                                    } else {
                                        if (scaled_features[3] <= -0.018771424889564514f) {
                                            return 2;
                                        } else {
                                            return 1;
                                        }
                                    }
                                }
                            } else {
                                return 3;
                            }
                        } else {
                            if (scaled_features[2] <= -0.6201141476631165f) {
                                if (scaled_features[2] <= -0.70960533618927f) {
                                    if (scaled_features[4] <= -0.30838093161582947f) {
                                        return 2;
                                    } else {
                                        if (scaled_features[5] <= 0.3767346143722534f) {
                                            if (scaled_features[4] <= 0.35103191435337067f) {
                                                if (scaled_features[5] <= -0.19172822684049606f) {
                                                    if (scaled_features[3] <= 0.442189484834671f) {
                                                        if (scaled_features[5] <= -0.3179711550474167f) {
                                                            if (scaled_features[1] <= 0.8476095795631409f) {
                                                                return 2;
                                                            } else {
                                                                return 1;
                                                            }
                                                        } else {
                                                            if (scaled_features[1] <= -0.15195722877979279f) {
                                                                if (scaled_features[4] <= 0.08244449086487293f) {
                                                                    if (scaled_features[0] <= 0.14285175874829292f) {
                                                                        return 1;
                                                                    } else {
                                                                        return 0;
                                                                    }
                                                                } else {
                                                                    return 1;
                                                                }
                                                            } else {
                                                                return 1;
                                                            }
                                                        }
                                                    } else {
                                                        return 2;
                                                    }
                                                } else {
                                                    if (scaled_features[3] <= 0.5069544017314911f) {
                                                        if (scaled_features[0] <= 0.28287725150585175f) {
                                                            if (scaled_features[5] <= 0.03204799257218838f) {
                                                                if (scaled_features[4] <= 0.22893523424863815f) {
                                                                    if (scaled_features[0] <= -0.7746182680130005f) {
                                                                        return 1;
                                                                    } else {
                                                                        if (scaled_features[1] <= 0.7933221459388733f) {
                                                                            if (scaled_features[3] <= -0.11173233389854431f) {
                                                                                if (scaled_features[1] <= -0.724274754524231f) {
                                                                                    return 1;
                                                                                } else {
                                                                                    return 0;
                                                                                }
                                                                            } else {
                                                                                if (scaled_features[2] <= -0.9122122228145599f) {
                                                                                    return 0;
                                                                                } else {
                                                                                    return 0;
                                                                                }
                                                                            }
                                                                        } else {
                                                                            return 1;
                                                                        }
                                                                    }
                                                                } else {
                                                                    return 1;
                                                                }
                                                            } else {
                                                                if (scaled_features[1] <= 0.626860648393631f) {
                                                                    if (scaled_features[5] <= 0.14086473733186722f) {
                                                                        if (scaled_features[4] <= -0.15506793186068535f) {
                                                                            return 1;
                                                                        } else {
                                                                            if (scaled_features[5] <= 0.06977995485067368f) {
                                                                                if (scaled_features[3] <= -0.0476289251819253f) {
                                                                                    return 2;
                                                                                } else {
                                                                                    return 1;
                                                                                }
                                                                            } else {
                                                                                return 0;
                                                                            }
                                                                        }
                                                                    } else {
                                                                        if (scaled_features[3] <= -0.4006471186876297f) {
                                                                            return 2;
                                                                        } else {
                                                                            if (scaled_features[3] <= 0.018242571968585253f) {
                                                                                if (scaled_features[0] <= -0.6734753549098969f) {
                                                                                    return 2;
                                                                                } else {
                                                                                    return 1;
                                                                                }
                                                                            } else {
                                                                                return 1;
                                                                            }
                                                                        }
                                                                    }
                                                                } else {
                                                                    if (scaled_features[2] <= -0.9814993739128113f) {
                                                                        if (scaled_features[5] <= 0.16060318052768707f) {
                                                                            return 1;
                                                                        } else {
                                                                            return 0;
                                                                        }
                                                                    } else {
                                                                        return 2;
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            if (scaled_features[5] <= 0.12281226739287376f) {
                                                                if (scaled_features[3] <= -0.15506166219711304f) {
                                                                    return 2;
                                                                } else {
                                                                    if (scaled_features[4] <= 0.1772676557302475f) {
                                                                        if (scaled_features[1] <= 0.2941548749804497f) {
                                                                            if (scaled_features[0] <= 0.87245312333107f) {
                                                                                if (scaled_features[5] <= -0.00935143162496388f) {
                                                                                    return 1;
                                                                                } else {
                                                                                    return 1;
                                                                                }
                                                                            } else {
                                                                                if (scaled_features[1] <= -0.14054875075817108f) {
                                                                                    return 0;
                                                                                } else {
                                                                                    return 1;
                                                                                }
                                                                            }
                                                                        } else {
                                                                            return 0;
                                                                        }
                                                                    } else {
                                                                        return 1;
                                                                    }
                                                                }
                                                            } else {
                                                                return 1;
                                                            }
                                                        }
                                                    } else {
                                                        return 2;
                                                    }
                                                }
                                            } else {
                                                return 2;
                                            }
                                        } else {
                                            if (scaled_features[1] <= -2.283293128013611f) {
                                                return 3;
                                            } else {
                                                return 2;
                                            }
                                        }
                                    }
                                } else {
                                    if (scaled_features[3] <= -0.22817640751600266f) {
                                        return 2;
                                    } else {
                                        if (scaled_features[1] <= 0.0018157931044697762f) {
                                            if (scaled_features[2] <= -0.6278504133224487f) {
                                                if (scaled_features[0] <= -0.6112281680107117f) {
                                                    return 1;
                                                } else {
                                                    if (scaled_features[4] <= 0.000836497638374567f) {
                                                        if (scaled_features[5] <= 0.05843972600996494f) {
                                                            return 0;
                                                        } else {
                                                            return 1;
                                                        }
                                                    } else {
                                                        if (scaled_features[1] <= -1.1454294323921204f) {
                                                            return 1;
                                                        } else {
                                                            if (scaled_features[1] <= -0.5522478222846985f) {
                                                                if (scaled_features[4] <= 0.17101594805717468f) {
                                                                    if (scaled_features[3] <= 0.00022535957396030426f) {
                                                                        return 2;
                                                                    } else {
                                                                        return 0;
                                                                    }
                                                                } else {
                                                                    return 0;
                                                                }
                                                            } else {
                                                                return 0;
                                                            }
                                                        }
                                                    }
                                                }
                                            } else {
                                                return 2;
                                            }
                                        } else {
                                            if (scaled_features[0] <= 0.3415186256170273f) {
                                                if (scaled_features[4] <= 0.1605498306453228f) {
                                                    if (scaled_features[5] <= -0.05906408093869686f) {
                                                        if (scaled_features[2] <= -0.6400867104530334f) {
                                                            if (scaled_features[3] <= 0.009240888059139252f) {
                                                                return 1;
                                                            } else {
                                                                return 2;
                                                            }
                                                        } else {
                                                            if (scaled_features[4] <= -0.20168577134609222f) {
                                                                return 2;
                                                            } else {
                                                                return 0;
                                                            }
                                                        }
                                                    } else {
                                                        return 0;
                                                    }
                                                } else {
                                                    return 2;
                                                }
                                            } else {
                                                if (scaled_features[4] <= 0.06461634766310453f) {
                                                    return 1;
                                                } else {
                                                    return 0;
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                if (scaled_features[0] <= 0.3189506232738495f) {
                                    if (scaled_features[5] <= 0.06676292419433594f) {
                                        if (scaled_features[3] <= -0.03746379166841507f) {
                                            if (scaled_features[1] <= 0.060206761583685875f) {
                                                if (scaled_features[3] <= -0.27988430857658386f) {
                                                    return 1;
                                                } else {
                                                    return 2;
                                                }
                                            } else {
                                                return 1;
                                            }
                                        } else {
                                            if (scaled_features[2] <= -0.5022199302911758f) {
                                                if (scaled_features[1] <= 0.10147673264145851f) {
                                                    if (scaled_features[0] <= -0.3101166933774948f) {
                                                        if (scaled_features[4] <= -0.10992272943258286f) {
                                                            return 1;
                                                        } else {
                                                            return 0;
                                                        }
                                                    } else {
                                                        if (scaled_features[1] <= -0.18862884864211082f) {
                                                            return 1;
                                                        } else {
                                                            if (scaled_features[5] <= -0.007250748574733734f) {
                                                                return 1;
                                                            } else {
                                                                return 0;
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    if (scaled_features[4] <= 0.08415334508754313f) {
                                                        return 1;
                                                    } else {
                                                        return 0;
                                                    }
                                                }
                                            } else {
                                                return 0;
                                            }
                                        }
                                    } else {
                                        if (scaled_features[5] <= 0.11158725246787071f) {
                                            if (scaled_features[5] <= 0.07417957484722137f) {
                                                if (scaled_features[2] <= -0.5444872975349426f) {
                                                    return 0;
                                                } else {
                                                    return 2;
                                                }
                                            } else {
                                                return 2;
                                            }
                                        } else {
                                            if (scaled_features[1] <= 0.24777816236019135f) {
                                                if (scaled_features[5] <= 0.5247645974159241f) {
                                                    return 1;
                                                } else {
                                                    if (scaled_features[1] <= -0.4187147617340088f) {
                                                        return 3;
                                                    } else {
                                                        return 2;
                                                    }
                                                }
                                            } else {
                                                return 2;
                                            }
                                        }
                                    }
                                } else {
                                    if (scaled_features[4] <= -0.08909882605075836f) {
                                        if (scaled_features[4] <= -0.18275584653019905f) {
                                            if (scaled_features[0] <= 0.6297517120838165f) {
                                                return 2;
                                            } else {
                                                if (scaled_features[1] <= 0.22881034016609192f) {
                                                    return 1;
                                                } else {
                                                    return 2;
                                                }
                                            }
                                        } else {
                                            return 1;
                                        }
                                    } else {
                                        if (scaled_features[3] <= -0.14366807416081429f) {
                                            return 2;
                                        } else {
                                            if (scaled_features[2] <= -0.4986150860786438f) {
                                                return 0;
                                            } else {
                                                return 1;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (scaled_features[5] <= -0.2134326547384262f) {
                        if (scaled_features[5] <= -0.4398447871208191f) {
                            if (scaled_features[2] <= 0.9592024087905884f) {
                                if (scaled_features[3] <= 0.9076228439807892f) {
                                    if (scaled_features[3] <= -0.49965329468250275f) {
                                        if (scaled_features[5] <= -0.8597129881381989f) {
                                            return 3;
                                        } else {
                                            return 2;
                                        }
                                    } else {
                                        if (scaled_features[1] <= -0.5047854483127594f) {
                                            if (scaled_features[5] <= -0.46756771206855774f) {
                                                return 2;
                                            } else {
                                                return 1;
                                            }
                                        } else {
                                            if (scaled_features[5] <= -1.2318255603313446f) {
                                                return 3;
                                            } else {
                                                if (scaled_features[5] <= -0.7227026522159576f) {
                                                    if (scaled_features[2] <= 0.07575095444917679f) {
                                                        return 2;
                                                    } else {
                                                        return 3;
                                                    }
                                                } else {
                                                    return 2;
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    return 3;
                                }
                            } else {
                                if (scaled_features[4] <= 0.20228762924671173f) {
                                    return 3;
                                } else {
                                    if (scaled_features[1] <= -0.2949527893215418f) {
                                        return 3;
                                    } else {
                                        return 1;
                                    }
                                }
                            }
                        } else {
                            if (scaled_features[1] <= 0.5741836428642273f) {
                                if (scaled_features[1] <= 0.32150329649448395f) {
                                    if (scaled_features[3] <= 0.5148880630731583f) {
                                        if (scaled_features[3] <= -0.3806018829345703f) {
                                            return 2;
                                        } else {
                                            if (scaled_features[5] <= -0.25455528497695923f) {
                                                if (scaled_features[4] <= -0.12368113175034523f) {
                                                    if (scaled_features[5] <= -0.34570854902267456f) {
                                                        return 2;
                                                    } else {
                                                        if (scaled_features[5] <= -0.2893137037754059f) {
                                                            return 1;
                                                        } else {
                                                            if (scaled_features[1] <= -0.10597533825784922f) {
                                                                return 2;
                                                            } else {
                                                                if (scaled_features[3] <= 0.282596692442894f) {
                                                                    return 1;
                                                                } else {
                                                                    if (scaled_features[5] <= -0.27642151713371277f) {
                                                                        return 2;
                                                                    } else {
                                                                        return 1;
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    if (scaled_features[4] <= 0.5182653069496155f) {
                                                        if (scaled_features[0] <= -1.0004591941833496f) {
                                                            return 0;
                                                        } else {
                                                            if (scaled_features[2] <= 1.5548330545425415f) {
                                                                if (scaled_features[2] <= 0.10619515553116798f) {
                                                                    if (scaled_features[3] <= 0.268450066447258f) {
                                                                        if (scaled_features[1] <= -0.9252971112728119f) {
                                                                            if (scaled_features[4] <= -0.008701125159859657f) {
                                                                                return 2;
                                                                            } else {
                                                                                return 1;
                                                                            }
                                                                        } else {
                                                                            if (scaled_features[2] <= -0.18813449144363403f) {
                                                                                if (scaled_features[0] <= 0.4218001887202263f) {
                                                                                    return 0;
                                                                                } else {
                                                                                    return 1;
                                                                                }
                                                                            } else {
                                                                                return 1;
                                                                            }
                                                                        }
                                                                    } else {
                                                                        if (scaled_features[2] <= -0.11769092455506325f) {
                                                                            return 1;
                                                                        } else {
                                                                            return 2;
                                                                        }
                                                                    }
                                                                } else {
                                                                    return 1;
                                                                }
                                                            } else {
                                                                if (scaled_features[3] <= 0.23660189658403397f) {
                                                                    return 0;
                                                                } else {
                                                                    return 1;
                                                                }
                                                            }
                                                        }
                                                    } else {
                                                        return 2;
                                                    }
                                                }
                                            } else {
                                                if (scaled_features[0] <= -0.13946272060275078f) {
                                                    return 1;
                                                } else {
                                                    if (scaled_features[0] <= -0.0947108045220375f) {
                                                        if (scaled_features[1] <= -0.28234103322029114f) {
                                                            return 0;
                                                        } else {
                                                            return 2;
                                                        }
                                                    } else {
                                                        if (scaled_features[5] <= -0.24208484590053558f) {
                                                            return 1;
                                                        } else {
                                                            if (scaled_features[2] <= 0.37390291690826416f) {
                                                                return 2;
                                                            } else {
                                                                if (scaled_features[3] <= 0.10991061106324196f) {
                                                                    return 1;
                                                                } else {
                                                                    return 0;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        return 2;
                                    }
                                } else {
                                    if (scaled_features[0] <= 0.6521067917346954f) {
                                        return 1;
                                    } else {
                                        return 2;
                                    }
                                }
                            } else {
                                if (scaled_features[2] <= 0.4094671905040741f) {
                                    if (scaled_features[4] <= 0.22535692155361176f) {
                                        return 2;
                                    } else {
                                        if (scaled_features[5] <= -0.32959429919719696f) {
                                            return 2;
                                        } else {
                                            return 1;
                                        }
                                    }
                                } else {
                                    if (scaled_features[3] <= -0.14781160652637482f) {
                                        if (scaled_features[1] <= 0.6280349791049957f) {
                                            return 1;
                                        } else {
                                            return 2;
                                        }
                                    } else {
                                        if (scaled_features[4] <= -0.005002517253160477f) {
                                            if (scaled_features[5] <= -0.2811824530363083f) {
                                                return 1;
                                            } else {
                                                return 0;
                                            }
                                        } else {
                                            return 1;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (scaled_features[4] <= 0.35495220124721527f) {
                            if (scaled_features[5] <= 0.17440377175807953f) {
                                if (scaled_features[5] <= -0.14229901880025864f) {
                                    if (scaled_features[4] <= -0.08926688134670258f) {
                                        if (scaled_features[5] <= -0.20396367460489273f) {
                                            return 2;
                                        } else {
                                            if (scaled_features[2] <= 1.2410550117492676f) {
                                                if (scaled_features[2] <= 0.2819707840681076f) {
                                                    if (scaled_features[4] <= -0.2169203907251358f) {
                                                        return 1;
                                                    } else {
                                                        if (scaled_features[1] <= -0.21762260980904102f) {
                                                            return 1;
                                                        } else {
                                                            return 0;
                                                        }
                                                    }
                                                } else {
                                                    return 1;
                                                }
                                            } else {
                                                if (scaled_features[3] <= -0.0384383425116539f) {
                                                    return 1;
                                                } else {
                                                    return 0;
                                                }
                                            }
                                        }
                                    } else {
                                        if (scaled_features[4] <= 0.17298026382923126f) {
                                            if (scaled_features[1] <= -0.6347742676734924f) {
                                                return 0;
                                            } else {
                                                if (scaled_features[0] <= -0.43783383071422577f) {
                                                    if (scaled_features[5] <= -0.19555332511663437f) {
                                                        return 2;
                                                    } else {
                                                        return 0;
                                                    }
                                                } else {
                                                    if (scaled_features[3] <= -0.04391273483633995f) {
                                                        if (scaled_features[5] <= -0.193736232817173f) {
                                                            return 0;
                                                        } else {
                                                            if (scaled_features[1] <= 0.18134604394435883f) {
                                                                return 1;
                                                            } else {
                                                                if (scaled_features[1] <= 0.4487747997045517f) {
                                                                    return 0;
                                                                } else {
                                                                    return 1;
                                                                }
                                                            }
                                                        }
                                                    } else {
                                                        if (scaled_features[1] <= 0.23607781529426575f) {
                                                            if (scaled_features[2] <= -0.422792986035347f) {
                                                                return 1;
                                                            } else {
                                                                if (scaled_features[4] <= 0.02008388750255108f) {
                                                                    if (scaled_features[2] <= 0.4211081564426422f) {
                                                                        if (scaled_features[4] <= -0.016975917853415012f) {
                                                                            return 0;
                                                                        } else {
                                                                            return 1;
                                                                        }
                                                                    } else {
                                                                        if (scaled_features[4] <= -0.013375820592045784f) {
                                                                            return 0;
                                                                        } else {
                                                                            return 2;
                                                                        }
                                                                    }
                                                                } else {
                                                                    return 0;
                                                                }
                                                            }
                                                        } else {
                                                            if (scaled_features[5] <= -0.15584763139486313f) {
                                                                if (scaled_features[0] <= -0.16238142549991608f) {
                                                                    if (scaled_features[3] <= 0.16969804465770721f) {
                                                                        return 1;
                                                                    } else {
                                                                        return 0;
                                                                    }
                                                                } else {
                                                                    if (scaled_features[5] <= -0.1672949269413948f) {
                                                                        return 0;
                                                                    } else {
                                                                        if (scaled_features[1] <= 0.7799862027168274f) {
                                                                            return 0;
                                                                        } else {
                                                                            return 1;
                                                                        }
                                                                    }
                                                                }
                                                            } else {
                                                                return 1;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            if (scaled_features[5] <= -0.1724332943558693f) {
                                                if (scaled_features[5] <= -0.17950735241174698f) {
                                                    if (scaled_features[2] <= 0.2346966192126274f) {
                                                        if (scaled_features[2] <= -0.08094046264886856f) {
                                                            return 1;
                                                        } else {
                                                            return 2;
                                                        }
                                                    } else {
                                                        return 1;
                                                    }
                                                } else {
                                                    return 0;
                                                }
                                            } else {
                                                return 1;
                                            }
                                        }
                                    }
                                } else {
                                    if (scaled_features[2] <= 1.091909945011139f) {
                                        if (scaled_features[4] <= -0.19687703996896744f) {
                                            if (scaled_features[3] <= 0.48950502276420593f) {
                                                if (scaled_features[4] <= -0.3335869312286377f) {
                                                    if (scaled_features[5] <= 0.14781811833381653f) {
                                                        if (scaled_features[1] <= -0.9344999492168427f) {
                                                            return 1;
                                                        } else {
                                                            if (scaled_features[4] <= -0.3454814702272415f) {
                                                                return 2;
                                                            } else {
                                                                if (scaled_features[2] <= 0.1945137083530426f) {
                                                                    return 1;
                                                                } else {
                                                                    return 2;
                                                                }
                                                            }
                                                        }
                                                    } else {
                                                        return 1;
                                                    }
                                                } else {
                                                    if (scaled_features[3] <= -0.37697288393974304f) {
                                                        return 2;
                                                    } else {
                                                        if (scaled_features[2] <= -0.21518396586179733f) {
                                                            if (scaled_features[0] <= -0.23933236300945282f) {
                                                                if (scaled_features[5] <= 0.03236257494427264f) {
                                                                    return 0;
                                                                } else {
                                                                    return 2;
                                                                }
                                                            } else {
                                                                return 1;
                                                            }
                                                        } else {
                                                            if (scaled_features[1] <= 1.1643148064613342f) {
                                                                if (scaled_features[2] <= 0.6176251471042633f) {
                                                                    if (scaled_features[4] <= -0.21517976373434067f) {
                                                                        return 1;
                                                                    } else {
                                                                        if (scaled_features[2] <= 0.13224582374095917f) {
                                                                            if (scaled_features[5] <= -0.01695447415113449f) {
                                                                                return 0;
                                                                            } else {
                                                                                if (scaled_features[5] <= 0.09972935542464256f) {
                                                                                    return 2;
                                                                                } else {
                                                                                    return 1;
                                                                                }
                                                                            }
                                                                        } else {
                                                                            return 1;
                                                                        }
                                                                    }
                                                                } else {
                                                                    if (scaled_features[5] <= 0.08255546167492867f) {
                                                                        if (scaled_features[4] <= -0.2193148136138916f) {
                                                                            return 1;
                                                                        } else {
                                                                            return 0;
                                                                        }
                                                                    } else {
                                                                        if (scaled_features[1] <= -0.20304035767912865f) {
                                                                            return 0;
                                                                        } else {
                                                                            return 1;
                                                                        }
                                                                    }
                                                                }
                                                            } else {
                                                                return 2;
                                                            }
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (scaled_features[2] <= 0.7151084840297699f) {
                                                    return 2;
                                                } else {
                                                    return 3;
                                                }
                                            }
                                        } else {
                                            if (scaled_features[4] <= 0.18358949571847916f) {
                                                if (scaled_features[3] <= 0.26999175548553467f) {
                                                    if (scaled_features[3] <= -0.15844662487506866f) {
                                                        if (scaled_features[3] <= -0.24433039128780365f) {
                                                            if (scaled_features[4] <= -0.17497102916240692f) {
                                                                return 0;
                                                            } else {
                                                                if (scaled_features[5] <= -0.08703617379069328f) {
                                                                    if (scaled_features[1] <= -0.34056319296360016f) {
                                                                        return 1;
                                                                    } else {
                                                                        return 2;
                                                                    }
                                                                } else {
                                                                    if (scaled_features[3] <= -0.27200914174318314f) {
                                                                        return 1;
                                                                    } else {
                                                                        return 2;
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            if (scaled_features[1] <= -0.023886341601610184f) {
                                                                if (scaled_features[2] <= 0.5790452361106873f) {
                                                                    if (scaled_features[1] <= -0.40736083686351776f) {
                                                                        return 1;
                                                                    } else {
                                                                        return 0;
                                                                    }
                                                                } else {
                                                                    if (scaled_features[3] <= -0.2263711392879486f) {
                                                                        return 1;
                                                                    } else {
                                                                        return 0;
                                                                    }
                                                                }
                                                            } else {
                                                                return 1;
                                                            }
                                                        }
                                                    } else {
                                                        if (scaled_features[4] <= -0.09303827211260796f) {
                                                            if (scaled_features[3] <= -0.05574895814061165f) {
                                                                if (scaled_features[3] <= -0.13321472704410553f) {
                                                                    return 0;
                                                                } else {
                                                                    if (scaled_features[5] <= -0.03850838914513588f) {
                                                                        if (scaled_features[3] <= -0.08288166299462318f) {
                                                                            return 1;
                                                                        } else {
                                                                            if (scaled_features[4] <= -0.10141744464635849f) {
                                                                                return 2;
                                                                            } else {
                                                                                return 1;
                                                                            }
                                                                        }
                                                                    } else {
                                                                        if (scaled_features[0] <= 0.12886713445186615f) {
                                                                            if (scaled_features[3] <= -0.10143837705254555f) {
                                                                                return 1;
                                                                            } else {
                                                                                return 0;
                                                                            }
                                                                        } else {
                                                                            return 1;
                                                                        }
                                                                    }
                                                                }
                                                            } else {
                                                                if (scaled_features[5] <= 0.14567876607179642f) {
                                                                    if (scaled_features[3] <= 0.17287741601467133f) {
                                                                        if (scaled_features[3] <= 0.08971065655350685f) {
                                                                            if (scaled_features[4] <= -0.09363598003983498f) {
                                                                                return 0;
                                                                            } else {
                                                                                return 1;
                                                                            }
                                                                        } else {
                                                                            if (scaled_features[0] <= 0.15325552225112915f) {
                                                                                if (scaled_features[4] <= -0.1023695133626461f) {
                                                                                    return 0;
                                                                                } else {
                                                                                    return 1;
                                                                                }
                                                                            } else {
                                                                                return 0;
                                                                            }
                                                                        }
                                                                    } else {
                                                                        if (scaled_features[2] <= 0.38434652984142303f) {
                                                                            if (scaled_features[2] <= -0.05381520092487335f) {
                                                                                if (scaled_features[1] <= 0.30177126079797745f) {
                                                                                    return 0;
                                                                                } else {
                                                                                    return 1;
                                                                                }
                                                                            } else {
                                                                                return 1;
                                                                            }
                                                                        } else {
                                                                            if (scaled_features[5] <= 0.030739177018404007f) {
                                                                                return 0;
                                                                            } else {
                                                                                return 1;
                                                                            }
                                                                        }
                                                                    }
                                                                } else {
                                                                    return 1;
                                                                }
                                                            }
                                                        } else {
                                                            if (scaled_features[3] <= -0.05061006359755993f) {
                                                                if (scaled_features[2] <= 1.0579379200935364f) {
                                                                    if (scaled_features[2] <= 0.023818762972950935f) {
                                                                        if (scaled_features[5] <= -0.0765300877392292f) {
                                                                            if (scaled_features[5] <= -0.10014094784855843f) {
                                                                                return 0;
                                                                            } else {
                                                                                return 1;
                                                                            }
                                                                        } else {
                                                                            return 0;
                                                                        }
                                                                    } else {
                                                                        if (scaled_features[3] <= -0.05776962824165821f) {
                                                                            if (scaled_features[4] <= 0.031542252749204636f) {
                                                                                if (scaled_features[0] <= 0.6371030509471893f) {
                                                                                    return 0;
                                                                                } else {
                                                                                    return 0;
                                                                                }
                                                                            } else {
                                                                                if (scaled_features[4] <= 0.05337758548557758f) {
                                                                                    return 1;
                                                                                } else {
                                                                                    return 0;
                                                                                }
                                                                            }
                                                                        } else {
                                                                            return 1;
                                                                        }
                                                                    }
                                                                } else {
                                                                    return 1;
                                                                }
                                                            } else {
                                                                if (scaled_features[1] <= -0.19303922355175018f) {
                                                                    if (scaled_features[1] <= -0.27644865214824677f) {
                                                                        if (scaled_features[0] <= -0.2586343213915825f) {
                                                                            return 0;
                                                                        } else {
                                                                            if (scaled_features[0] <= -0.2314971163868904f) {
                                                                                return 1;
                                                                            } else {
                                                                                if (scaled_features[1] <= -1.029525250196457f) {
                                                                                    return 0;
                                                                                } else {
                                                                                    return 0;
                                                                                }
                                                                            }
                                                                        }
                                                                    } else {
                                                                        if (scaled_features[5] <= 0.09208251163363457f) {
                                                                            if (scaled_features[2] <= 0.4984424561262131f) {
                                                                                if (scaled_features[5] <= 0.040541818365454674f) {
                                                                                    return 1;
                                                                                } else {
                                                                                    return 1;
                                                                                }
                                                                            } else {
                                                                                return 0;
                                                                            }
                                                                        } else {
                                                                            return 0;
                                                                        }
                                                                    }
                                                                } else {
                                                                    if (scaled_features[3] <= 0.22052434086799622f) {
                                                                        if (scaled_features[3] <= 0.13433529436588287f) {
                                                                            if (scaled_features[5] <= -0.13344153761863708f) {
                                                                                if (scaled_features[1] <= -0.006344906985759735f) {
                                                                                    return 1;
                                                                                } else {
                                                                                    return 0;
                                                                                }
                                                                            } else {
                                                                                if (scaled_features[2] <= 0.875266432762146f) {
                                                                                    return 0;
                                                                                } else {
                                                                                    return 0;
                                                                                }
                                                                            }
                                                                        } else {
                                                                            if (scaled_features[4] <= 0.1255142167210579f) {
                                                                                if (scaled_features[0] <= 0.5090304315090179f) {
                                                                                    return 0;
                                                                                } else {
                                                                                    return 0;
                                                                                }
                                                                            } else {
                                                                                if (scaled_features[2] <= 0.002420002594590187f) {
                                                                                    return 1;
                                                                                } else {
                                                                                    return 0;
                                                                                }
                                                                            }
                                                                        }
                                                                    } else {
                                                                        if (scaled_features[3] <= 0.2228664606809616f) {
                                                                            return 1;
                                                                        } else {
                                                                            if (scaled_features[4] <= -0.07066838443279266f) {
                                                                                return 1;
                                                                            } else {
                                                                                if (scaled_features[5] <= 0.12642545625567436f) {
                                                                                    return 0;
                                                                                } else {
                                                                                    return 2;
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    if (scaled_features[1] <= 0.8264369964599609f) {
                                                        if (scaled_features[4] <= 0.06114700436592102f) {
                                                            if (scaled_features[1] <= -0.013461118564009666f) {
                                                                if (scaled_features[5] <= 0.09109805338084698f) {
                                                                    if (scaled_features[5] <= -0.1074959933757782f) {
                                                                        return 1;
                                                                    } else {
                                                                        return 0;
                                                                    }
                                                                } else {
                                                                    return 1;
                                                                }
                                                            } else {
                                                                if (scaled_features[0] <= -0.4451490342617035f) {
                                                                    return 1;
                                                                } else {
                                                                    if (scaled_features[4] <= 0.022392259910702705f) {
                                                                        if (scaled_features[0] <= 0.080790676176548f) {
                                                                            return 2;
                                                                        } else {
                                                                            return 1;
                                                                        }
                                                                    } else {
                                                                        if (scaled_features[0] <= 0.14365984499454498f) {
                                                                            return 2;
                                                                        } else {
                                                                            if (scaled_features[0] <= 0.24542856216430664f) {
                                                                                return 1;
                                                                            } else {
                                                                                return 0;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            if (scaled_features[2] <= 0.859073668718338f) {
                                                                return 1;
                                                            } else {
                                                                return 0;
                                                            }
                                                        }
                                                    } else {
                                                        return 2;
                                                    }
                                                }
                                            } else {
                                                if (scaled_features[5] <= -0.09023813158273697f) {
                                                    if (scaled_features[4] <= 0.26321594417095184f) {
                                                        return 0;
                                                    } else {
                                                        return 1;
                                                    }
                                                } else {
                                                    if (scaled_features[1] <= 0.39886295795440674f) {
                                                        if (scaled_features[4] <= 0.27102625370025635f) {
                                                            if (scaled_features[4] <= 0.20962195843458176f) {
                                                                if (scaled_features[1] <= -0.8270952999591827f) {
                                                                    return 0;
                                                                } else {
                                                                    if (scaled_features[0] <= 0.88679438829422f) {
                                                                        if (scaled_features[0] <= 0.36936114728450775f) {
                                                                            return 1;
                                                                        } else {
                                                                            if (scaled_features[4] <= 0.19280195981264114f) {
                                                                                return 0;
                                                                            } else {
                                                                                return 1;
                                                                            }
                                                                        }
                                                                    } else {
                                                                        return 0;
                                                                    }
                                                                }
                                                            } else {
                                                                if (scaled_features[4] <= 0.22670109570026398f) {
                                                                    return 0;
                                                                } else {
                                                                    if (scaled_features[1] <= -0.23240550607442856f) {
                                                                        return 1;
                                                                    } else {
                                                                        if (scaled_features[3] <= 0.0808449499309063f) {
                                                                            return 0;
                                                                        } else {
                                                                            if (scaled_features[2] <= 0.03402657061815262f) {
                                                                                return 2;
                                                                            } else {
                                                                                if (scaled_features[1] <= -0.18329929560422897f) {
                                                                                    return 0;
                                                                                } else {
                                                                                    return 1;
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            if (scaled_features[2] <= 0.4689227193593979f) {
                                                                return 1;
                                                            } else {
                                                                if (scaled_features[0] <= 0.05854169465601444f) {
                                                                    return 1;
                                                                } else {
                                                                    return 2;
                                                                }
                                                            }
                                                        }
                                                    } else {
                                                        if (scaled_features[0] <= -0.2504589185118675f) {
                                                            if (scaled_features[5] <= 0.11603433266282082f) {
                                                                return 0;
                                                            } else {
                                                                return 2;
                                                            }
                                                        } else {
                                                            if (scaled_features[0] <= 0.951204389333725f) {
                                                                if (scaled_features[2] <= -0.1778602059930563f) {
                                                                    return 2;
                                                                } else {
                                                                    if (scaled_features[5] <= 0.11314819380640984f) {
                                                                        return 1;
                                                                    } else {
                                                                        return 2;
                                                                    }
                                                                }
                                                            } else {
                                                                return 2;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        if (scaled_features[3] <= 0.25368691235780716f) {
                                            if (scaled_features[0] <= -0.4590196758508682f) {
                                                if (scaled_features[5] <= 0.03375221695750952f) {
                                                    if (scaled_features[2] <= 1.443913221359253f) {
                                                        return 1;
                                                    } else {
                                                        return 0;
                                                    }
                                                } else {
                                                    return 1;
                                                }
                                            } else {
                                                if (scaled_features[1] <= 0.12222947925329208f) {
                                                    if (scaled_features[1] <= -0.6291508376598358f) {
                                                        if (scaled_features[0] <= 0.2828604578971863f) {
                                                            return 1;
                                                        } else {
                                                            return 0;
                                                        }
                                                    } else {
                                                        if (scaled_features[5] <= 0.09639589115977287f) {
                                                            if (scaled_features[4] <= -0.1179191879928112f) {
                                                                return 1;
                                                            } else {
                                                                if (scaled_features[1] <= -0.0498665040358901f) {
                                                                    return 0;
                                                                } else {
                                                                    if (scaled_features[4] <= -0.05110228806734085f) {
                                                                        return 2;
                                                                    } else {
                                                                        return 0;
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            if (scaled_features[5] <= 0.14817571640014648f) {
                                                                return 1;
                                                            } else {
                                                                return 0;
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    if (scaled_features[5] <= -0.09727149829268456f) {
                                                        if (scaled_features[3] <= -0.24803945794701576f) {
                                                            return 2;
                                                        } else {
                                                            return 1;
                                                        }
                                                    } else {
                                                        if (scaled_features[4] <= 0.17777223885059357f) {
                                                            if (scaled_features[2] <= 1.1133180856704712f) {
                                                                return 1;
                                                            } else {
                                                                if (scaled_features[4] <= 0.0221622409299016f) {
                                                                    if (scaled_features[0] <= 0.2189054638147354f) {
                                                                        return 1;
                                                                    } else {
                                                                        if (scaled_features[1] <= 0.7819721102714539f) {
                                                                            if (scaled_features[3] <= -0.2686736099421978f) {
                                                                                return 2;
                                                                            } else {
                                                                                return 0;
                                                                            }
                                                                        } else {
                                                                            return 1;
                                                                        }
                                                                    }
                                                                } else {
                                                                    return 0;
                                                                }
                                                            }
                                                        } else {
                                                            return 1;
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            if (scaled_features[4] <= -0.05134732679584886f) {
                                                if (scaled_features[0] <= -0.01082070916891098f) {
                                                    return 2;
                                                } else {
                                                    return 1;
                                                }
                                            } else {
                                                return 1;
                                            }
                                        }
                                    }
                                }
                            } else {
                                if (scaled_features[1] <= -1.1495243906974792f) {
                                    return 3;
                                } else {
                                    if (scaled_features[4] <= -0.3319998234510422f) {
                                        if (scaled_features[5] <= 0.9717901051044464f) {
                                            if (scaled_features[1] <= -0.8117400705814362f) {
                                                return 1;
                                            } else {
                                                return 2;
                                            }
                                        } else {
                                            return 3;
                                        }
                                    } else {
                                        if (scaled_features[2] <= -0.42824313044548035f) {
                                            return 2;
                                        } else {
                                            if (scaled_features[2] <= 0.3498918265104294f) {
                                                if (scaled_features[2] <= 0.2638418525457382f) {
                                                    if (scaled_features[5] <= 0.38432492315769196f) {
                                                        if (scaled_features[1] <= 0.17297684401273727f) {
                                                            if (scaled_features[2] <= -0.12571752816438675f) {
                                                                if (scaled_features[5] <= 0.1782097890973091f) {
                                                                    if (scaled_features[2] <= -0.17841356992721558f) {
                                                                        return 1;
                                                                    } else {
                                                                        return 0;
                                                                    }
                                                                } else {
                                                                    if (scaled_features[1] <= -0.13730329275131226f) {
                                                                        return 1;
                                                                    } else {
                                                                        if (scaled_features[5] <= 0.29287193715572357f) {
                                                                            return 0;
                                                                        } else {
                                                                            if (scaled_features[1] <= 0.0010720565915107727f) {
                                                                                return 2;
                                                                            } else {
                                                                                return 1;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            } else {
                                                                if (scaled_features[3] <= 0.5365880578756332f) {
                                                                    if (scaled_features[2] <= 0.09373772144317627f) {
                                                                        if (scaled_features[0] <= -0.3975052386522293f) {
                                                                            return 1;
                                                                        } else {
                                                                            if (scaled_features[4] <= -0.18614062666893005f) {
                                                                                return 2;
                                                                            } else {
                                                                                if (scaled_features[2] <= -0.10355299338698387f) {
                                                                                    return 2;
                                                                                } else {
                                                                                    return 1;
                                                                                }
                                                                            }
                                                                        }
                                                                    } else {
                                                                        if (scaled_features[5] <= 0.22024253755807877f) {
                                                                            if (scaled_features[0] <= 0.36831000447273254f) {
                                                                                if (scaled_features[1] <= 0.06705215945839882f) {
                                                                                    return 0;
                                                                                } else {
                                                                                    return 1;
                                                                                }
                                                                            } else {
                                                                                return 1;
                                                                            }
                                                                        } else {
                                                                            return 1;
                                                                        }
                                                                    }
                                                                } else {
                                                                    return 2;
                                                                }
                                                            }
                                                        } else {
                                                            return 1;
                                                        }
                                                    } else {
                                                        return 2;
                                                    }
                                                } else {
                                                    if (scaled_features[3] <= 1.7999262511730194f) {
                                                        return 2;
                                                    } else {
                                                        return 3;
                                                    }
                                                }
                                            } else {
                                                if (scaled_features[3] <= -0.3171576112508774f) {
                                                    if (scaled_features[5] <= 0.8258687257766724f) {
                                                        return 2;
                                                    } else {
                                                        return 3;
                                                    }
                                                } else {
                                                    if (scaled_features[5] <= 0.5178120136260986f) {
                                                        if (scaled_features[0] <= 0.07324939034879208f) {
                                                            if (scaled_features[5] <= 0.2728702872991562f) {
                                                                if (scaled_features[4] <= -0.19679484516382217f) {
                                                                    return 1;
                                                                } else {
                                                                    if (scaled_features[2] <= 1.8590556383132935f) {
                                                                        if (scaled_features[0] <= -0.3496987521648407f) {
                                                                            if (scaled_features[3] <= 0.2896205633878708f) {
                                                                                return 0;
                                                                            } else {
                                                                                return 1;
                                                                            }
                                                                        } else {
                                                                            if (scaled_features[0] <= -0.039143986999988556f) {
                                                                                if (scaled_features[2] <= 1.4981616139411926f) {
                                                                                    return 1;
                                                                                } else {
                                                                                    return 0;
                                                                                }
                                                                            } else {
                                                                                return 0;
                                                                            }
                                                                        }
                                                                    } else {
                                                                        return 1;
                                                                    }
                                                                }
                                                            } else {
                                                                if (scaled_features[5] <= 0.3307768404483795f) {
                                                                    return 1;
                                                                } else {
                                                                    if (scaled_features[5] <= 0.41096481680870056f) {
                                                                        if (scaled_features[1] <= 0.3270225077867508f) {
                                                                            return 2;
                                                                        } else {
                                                                            if (scaled_features[0] <= -0.3572043403983116f) {
                                                                                return 1;
                                                                            } else {
                                                                                return 2;
                                                                            }
                                                                        }
                                                                    } else {
                                                                        return 1;
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            if (scaled_features[4] <= 0.013434830587357283f) {
                                                                if (scaled_features[1] <= -0.07505936920642853f) {
                                                                    return 1;
                                                                } else {
                                                                    if (scaled_features[1] <= 0.1575111821293831f) {
                                                                        return 0;
                                                                    } else {
                                                                        return 1;
                                                                    }
                                                                }
                                                            } else {
                                                                return 1;
                                                            }
                                                        }
                                                    } else {
                                                        if (scaled_features[2] <= 1.6956588625907898f) {
                                                            return 2;
                                                        } else {
                                                            return 3;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        } else {
                            if (scaled_features[3] <= 0.7667742371559143f) {
                                if (scaled_features[5] <= 0.004042602609843016f) {
                                    if (scaled_features[4] <= 0.41783666610717773f) {
                                        if (scaled_features[4] <= 0.36753110587596893f) {
                                            return 2;
                                        } else {
                                            return 1;
                                        }
                                    } else {
                                        if (scaled_features[0] <= 0.42406877875328064f) {
                                            return 2;
                                        } else {
                                            if (scaled_features[0] <= 0.5327324271202087f) {
                                                return 1;
                                            } else {
                                                return 2;
                                            }
                                        }
                                    }
                                } else {
                                    if (scaled_features[2] <= 1.2139873504638672f) {
                                        if (scaled_features[0] <= 1.1470556259155273f) {
                                            if (scaled_features[4] <= 0.36786194145679474f) {
                                                if (scaled_features[0] <= -0.27727053314447403f) {
                                                    return 2;
                                                } else {
                                                    return 1;
                                                }
                                            } else {
                                                if (scaled_features[4] <= 0.4396626055240631f) {
                                                    if (scaled_features[0] <= 0.22892213612794876f) {
                                                        return 2;
                                                    } else {
                                                        if (scaled_features[4] <= 0.41407908499240875f) {
                                                            return 2;
                                                        } else {
                                                            return 1;
                                                        }
                                                    }
                                                } else {
                                                    return 2;
                                                }
                                            }
                                        } else {
                                            return 3;
                                        }
                                    } else {
                                        if (scaled_features[3] <= 0.44087132811546326f) {
                                            return 1;
                                        } else {
                                            return 2;
                                        }
                                    }
                                }
                            } else {
                                if (scaled_features[4] <= 0.5809155404567719f) {
                                    return 3;
                                } else {
                                    return 2;
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if (scaled_features[4] <= 0.7529533505439758f) {
                if (scaled_features[0] <= -0.22692126035690308f) {
                    if (scaled_features[0] <= -1.8804579973220825f) {
                        return 3;
                    } else {
                        if (scaled_features[0] <= -0.5212700143456459f) {
                            return 2;
                        } else {
                            return 3;
                        }
                    }
                } else {
                    return 2;
                }
            } else {
                if (scaled_features[1] <= -0.06484085228294134f) {
                    if (scaled_features[3] <= -0.3862231373786926f) {
                        if (scaled_features[0] <= -0.0761210173368454f) {
                            return 3;
                        } else {
                            return 2;
                        }
                    } else {
                        return 3;
                    }
                } else {
                    return 3;
                }
            }
        }
    }
}


int predict_tree_3(float* features) {
    float scaled_features[6];
    for(int i = 0; i < 6; i++) {
        scaled_features[i] = (features[i] - -0.8389733125233606f) / 14.65478191494216f;
    }
    if (scaled_features[5] <= 0.7299672961235046f) {
        if (scaled_features[1] <= -1.1943455338478088f) {
            if (scaled_features[1] <= -1.5184746384620667f) {
                if (scaled_features[1] <= -1.6309033036231995f) {
                    return 3;
                } else {
                    if (scaled_features[5] <= -0.41628479678183794f) {
                        return 3;
                    } else {
                        if (scaled_features[5] <= 0.284316542558372f) {
                            return 0;
                        } else {
                            return 3;
                        }
                    }
                }
            } else {
                if (scaled_features[5] <= -0.07033540308475494f) {
                    if (scaled_features[0] <= -0.10549286939203739f) {
                        if (scaled_features[0] <= -0.739752858877182f) {
                            return 3;
                        } else {
                            if (scaled_features[0] <= -0.2731345370411873f) {
                                return 2;
                            } else {
                                return 1;
                            }
                        }
                    } else {
                        return 3;
                    }
                } else {
                    if (scaled_features[0] <= -0.10930464789271355f) {
                        if (scaled_features[0] <= -0.7467445023357868f) {
                            return 3;
                        } else {
                            return 2;
                        }
                    } else {
                        if (scaled_features[4] <= -0.16934947669506073f) {
                            return 2;
                        } else {
                            return 1;
                        }
                    }
                }
            }
        } else {
            if (scaled_features[5] <= -0.7309956550598145f) {
                if (scaled_features[1] <= 0.3351817727088928f) {
                    if (scaled_features[3] <= -0.21352213621139526f) {
                        return 3;
                    } else {
                        if (scaled_features[3] <= -0.15964292734861374f) {
                            return 2;
                        } else {
                            if (scaled_features[5] <= -0.8979505002498627f) {
                                return 3;
                            } else {
                                if (scaled_features[5] <= -0.7754793763160706f) {
                                    return 2;
                                } else {
                                    return 3;
                                }
                            }
                        }
                    }
                } else {
                    return 3;
                }
            } else {
                if (scaled_features[2] <= -0.48647159337997437f) {
                    if (scaled_features[4] <= 0.7712429165840149f) {
                        if (scaled_features[5] <= 0.3791266530752182f) {
                            if (scaled_features[4] <= 0.328498974442482f) {
                                if (scaled_features[0] <= -1.7095332741737366f) {
                                    return 3;
                                } else {
                                    if (scaled_features[4] <= -0.30717839300632477f) {
                                        if (scaled_features[1] <= 1.3808761835098267f) {
                                            if (scaled_features[0] <= -0.4300428479909897f) {
                                                if (scaled_features[4] <= -1.1374675333499908f) {
                                                    return 3;
                                                } else {
                                                    return 2;
                                                }
                                            } else {
                                                if (scaled_features[2] <= -0.7035675048828125f) {
                                                    if (scaled_features[4] <= -0.3152429461479187f) {
                                                        return 2;
                                                    } else {
                                                        if (scaled_features[3] <= -0.0366869792342186f) {
                                                            return 2;
                                                        } else {
                                                            return 1;
                                                        }
                                                    }
                                                } else {
                                                    if (scaled_features[2] <= -0.6812929213047028f) {
                                                        return 3;
                                                    } else {
                                                        return 2;
                                                    }
                                                }
                                            }
                                        } else {
                                            return 3;
                                        }
                                    } else {
                                        if (scaled_features[4] <= -0.14477253705263138f) {
                                            if (scaled_features[2] <= -1.250892996788025f) {
                                                if (scaled_features[0] <= 0.16774235758930445f) {
                                                    if (scaled_features[4] <= -0.2673591077327728f) {
                                                        return 1;
                                                    } else {
                                                        return 2;
                                                    }
                                                } else {
                                                    if (scaled_features[5] <= 0.0752794872969389f) {
                                                        if (scaled_features[1] <= 0.9685712456703186f) {
                                                            return 1;
                                                        } else {
                                                            return 3;
                                                        }
                                                    } else {
                                                        return 2;
                                                    }
                                                }
                                            } else {
                                                if (scaled_features[4] <= -0.2562668174505234f) {
                                                    return 1;
                                                } else {
                                                    if (scaled_features[2] <= -0.5726359486579895f) {
                                                        if (scaled_features[1] <= -0.38385723531246185f) {
                                                            if (scaled_features[5] <= 0.006437674630433321f) {
                                                                return 2;
                                                            } else {
                                                                if (scaled_features[1] <= -0.6300759017467499f) {
                                                                    return 1;
                                                                } else {
                                                                    return 0;
                                                                }
                                                            }
                                                        } else {
                                                            if (scaled_features[3] <= 0.5584972649812698f) {
                                                                if (scaled_features[5] <= -0.40975917875766754f) {
                                                                    return 2;
                                                                } else {
                                                                    if (scaled_features[4] <= -0.15551041066646576f) {
                                                                        if (scaled_features[3] <= 0.2132268324494362f) {
                                                                            if (scaled_features[5] <= 0.23081309348344803f) {
                                                                                if (scaled_features[3] <= -0.19763266295194626f) {
                                                                                    return 1;
                                                                                } else {
                                                                                    return 2;
                                                                                }
                                                                            } else {
                                                                                return 1;
                                                                            }
                                                                        } else {
                                                                            return 1;
                                                                        }
                                                                    } else {
                                                                        return 1;
                                                                    }
                                                                }
                                                            } else {
                                                                return 2;
                                                            }
                                                        }
                                                    } else {
                                                        if (scaled_features[2] <= -0.5106721222400665f) {
                                                            if (scaled_features[0] <= -0.10826078429818153f) {
                                                                return 2;
                                                            } else {
                                                                return 1;
                                                            }
                                                        } else {
                                                            return 1;
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            if (scaled_features[2] <= -2.0217080116271973f) {
                                                if (scaled_features[4] <= -0.10277831181883812f) {
                                                    return 0;
                                                } else {
                                                    return 2;
                                                }
                                            } else {
                                                if (scaled_features[3] <= 0.4156634211540222f) {
                                                    if (scaled_features[4] <= 0.2468915358185768f) {
                                                        if (scaled_features[3] <= -0.11959759891033173f) {
                                                            if (scaled_features[3] <= -0.3393968343734741f) {
                                                                return 2;
                                                            } else {
                                                                if (scaled_features[2] <= -0.9941284656524658f) {
                                                                    if (scaled_features[3] <= -0.2104453593492508f) {
                                                                        if (scaled_features[5] <= -0.2891885042190552f) {
                                                                            if (scaled_features[2] <= -1.610902190208435f) {
                                                                                return 1;
                                                                            } else {
                                                                                return 2;
                                                                            }
                                                                        } else {
                                                                            if (scaled_features[2] <= -1.390807867050171f) {
                                                                                return 1;
                                                                            } else {
                                                                                if (scaled_features[0] <= -0.02638210356235504f) {
                                                                                    return 1;
                                                                                } else {
                                                                                    return 2;
                                                                                }
                                                                            }
                                                                        }
                                                                    } else {
                                                                        return 1;
                                                                    }
                                                                } else {
                                                                    if (scaled_features[2] <= -0.5663275718688965f) {
                                                                        if (scaled_features[5] <= -0.2832353189587593f) {
                                                                            return 2;
                                                                        } else {
                                                                            if (scaled_features[5] <= 0.058244772255420685f) {
                                                                                return 1;
                                                                            } else {
                                                                                return 2;
                                                                            }
                                                                        }
                                                                    } else {
                                                                        if (scaled_features[2] <= -0.5076136887073517f) {
                                                                            if (scaled_features[2] <= -0.5462779402732849f) {
                                                                                return 0;
                                                                            } else {
                                                                                return 1;
                                                                            }
                                                                        } else {
                                                                            return 2;
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            if (scaled_features[5] <= -0.2405184954404831f) {
                                                                if (scaled_features[2] <= -1.0457849502563477f) {
                                                                    if (scaled_features[3] <= 0.1369345262646675f) {
                                                                        return 2;
                                                                    } else {
                                                                        return 3;
                                                                    }
                                                                } else {
                                                                    if (scaled_features[5] <= -0.4063226878643036f) {
                                                                        return 2;
                                                                    } else {
                                                                        return 1;
                                                                    }
                                                                }
                                                            } else {
                                                                if (scaled_features[2] <= -1.7967734932899475f) {
                                                                    return 2;
                                                                } else {
                                                                    if (scaled_features[5] <= 0.17925658077001572f) {
                                                                        if (scaled_features[5] <= 0.01805389951914549f) {
                                                                            if (scaled_features[0] <= 0.2806750386953354f) {
                                                                                if (scaled_features[3] <= 0.2921646684408188f) {
                                                                                    return 0;
                                                                                } else {
                                                                                    return 0;
                                                                                }
                                                                            } else {
                                                                                if (scaled_features[1] <= -0.2979079335927963f) {
                                                                                    return 1;
                                                                                } else {
                                                                                    return 0;
                                                                                }
                                                                            }
                                                                        } else {
                                                                            if (scaled_features[5] <= 0.06604278087615967f) {
                                                                                if (scaled_features[1] <= -0.4723517447710037f) {
                                                                                    return 2;
                                                                                } else {
                                                                                    return 1;
                                                                                }
                                                                            } else {
                                                                                if (scaled_features[1] <= -0.16161243431270123f) {
                                                                                    return 0;
                                                                                } else {
                                                                                    return 0;
                                                                                }
                                                                            }
                                                                        }
                                                                    } else {
                                                                        if (scaled_features[1] <= 0.36714963614940643f) {
                                                                            if (scaled_features[0] <= -0.6734753549098969f) {
                                                                                return 2;
                                                                            } else {
                                                                                if (scaled_features[4] <= 0.14875543862581253f) {
                                                                                    return 1;
                                                                                } else {
                                                                                    return 2;
                                                                                }
                                                                            }
                                                                        } else {
                                                                            if (scaled_features[0] <= 0.20627926290035248f) {
                                                                                return 0;
                                                                            } else {
                                                                                return 2;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    } else {
                                                        if (scaled_features[4] <= 0.26032303273677826f) {
                                                            if (scaled_features[1] <= -0.0003569275140762329f) {
                                                                return 1;
                                                            } else {
                                                                return 2;
                                                            }
                                                        } else {
                                                            if (scaled_features[5] <= 0.1991512030363083f) {
                                                                if (scaled_features[3] <= 0.09616689011454582f) {
                                                                    if (scaled_features[2] <= -1.0389366149902344f) {
                                                                        return 1;
                                                                    } else {
                                                                        return 2;
                                                                    }
                                                                } else {
                                                                    return 1;
                                                                }
                                                            } else {
                                                                return 1;
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    if (scaled_features[3] <= 0.5107487589120865f) {
                                                        if (scaled_features[3] <= 0.4916398376226425f) {
                                                            if (scaled_features[2] <= -1.0223409533500671f) {
                                                                return 2;
                                                            } else {
                                                                if (scaled_features[3] <= 0.44378213584423065f) {
                                                                    return 2;
                                                                } else {
                                                                    return 1;
                                                                }
                                                            }
                                                        } else {
                                                            return 1;
                                                        }
                                                    } else {
                                                        return 2;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                if (scaled_features[1] <= 0.8434848189353943f) {
                                    if (scaled_features[0] <= 1.1555258631706238f) {
                                        if (scaled_features[0] <= 0.26433513313531876f) {
                                            return 2;
                                        } else {
                                            if (scaled_features[2] <= -0.6981219947338104f) {
                                                return 2;
                                            } else {
                                                if (scaled_features[2] <= -0.6218764185905457f) {
                                                    return 0;
                                                } else {
                                                    return 2;
                                                }
                                            }
                                        }
                                    } else {
                                        if (scaled_features[4] <= 0.39116857945919037f) {
                                            return 1;
                                        } else {
                                            return 2;
                                        }
                                    }
                                } else {
                                    if (scaled_features[4] <= 0.39057566225528717f) {
                                        return 1;
                                    } else {
                                        if (scaled_features[0] <= 0.3822149261832237f) {
                                            return 2;
                                        } else {
                                            return 3;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (scaled_features[3] <= 0.862247884273529f) {
                                return 2;
                            } else {
                                return 3;
                            }
                        }
                    } else {
                        return 3;
                    }
                } else {
                    if (scaled_features[3] <= -0.30139969289302826f) {
                        if (scaled_features[1] <= 1.3142777681350708f) {
                            if (scaled_features[3] <= -0.8146485686302185f) {
                                return 3;
                            } else {
                                if (scaled_features[4] <= 0.27531060576438904f) {
                                    if (scaled_features[0] <= 0.20497963577508926f) {
                                        if (scaled_features[3] <= -0.3669785112142563f) {
                                            return 2;
                                        } else {
                                            if (scaled_features[1] <= -0.16455775499343872f) {
                                                if (scaled_features[3] <= -0.3577928841114044f) {
                                                    return 1;
                                                } else {
                                                    if (scaled_features[5] <= -0.14795280992984772f) {
                                                        return 2;
                                                    } else {
                                                        if (scaled_features[1] <= -0.26511073112487793f) {
                                                            return 2;
                                                        } else {
                                                            return 1;
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (scaled_features[5] <= 0.2988363653421402f) {
                                                    if (scaled_features[3] <= -0.33958175778388977f) {
                                                        return 1;
                                                    } else {
                                                        return 2;
                                                    }
                                                } else {
                                                    return 2;
                                                }
                                            }
                                        }
                                    } else {
                                        if (scaled_features[2] <= 0.061511069536209106f) {
                                            if (scaled_features[4] <= 0.03608300909399986f) {
                                                return 2;
                                            } else {
                                                return 1;
                                            }
                                        } else {
                                            if (scaled_features[3] <= -0.38113515079021454f) {
                                                return 2;
                                            } else {
                                                return 1;
                                            }
                                        }
                                    }
                                } else {
                                    return 2;
                                }
                            }
                        } else {
                            if (scaled_features[1] <= 1.523693859577179f) {
                                if (scaled_features[0] <= -0.4035768508911133f) {
                                    return 3;
                                } else {
                                    return 2;
                                }
                            } else {
                                return 3;
                            }
                        }
                    } else {
                        if (scaled_features[3] <= 0.29216550290584564f) {
                            if (scaled_features[3] <= -0.10176471993327141f) {
                                if (scaled_features[5] <= 0.3840087056159973f) {
                                    if (scaled_features[2] <= 0.44619838893413544f) {
                                        if (scaled_features[1] <= -0.26571980118751526f) {
                                            if (scaled_features[3] <= -0.2782357186079025f) {
                                                return 2;
                                            } else {
                                                if (scaled_features[1] <= -0.5325279235839844f) {
                                                    if (scaled_features[4] <= 0.3985758423805237f) {
                                                        if (scaled_features[3] <= -0.15980905294418335f) {
                                                            return 1;
                                                        } else {
                                                            if (scaled_features[0] <= -0.7254054546356201f) {
                                                                return 1;
                                                            } else {
                                                                return 0;
                                                            }
                                                        }
                                                    } else {
                                                        return 2;
                                                    }
                                                } else {
                                                    return 1;
                                                }
                                            }
                                        } else {
                                            if (scaled_features[3] <= -0.16618604958057404f) {
                                                if (scaled_features[0] <= 0.8565753400325775f) {
                                                    if (scaled_features[1] <= 0.1712418794631958f) {
                                                        if (scaled_features[4] <= -0.3038366138935089f) {
                                                            return 2;
                                                        } else {
                                                            if (scaled_features[3] <= -0.17664318531751633f) {
                                                                if (scaled_features[0] <= -0.013846118003129959f) {
                                                                    return 1;
                                                                } else {
                                                                    if (scaled_features[2] <= 0.015078473836183548f) {
                                                                        return 1;
                                                                    } else {
                                                                        if (scaled_features[0] <= 0.062454525381326675f) {
                                                                            return 2;
                                                                        } else {
                                                                            return 1;
                                                                        }
                                                                    }
                                                                }
                                                            } else {
                                                                if (scaled_features[0] <= 0.21135257743299007f) {
                                                                    return 2;
                                                                } else {
                                                                    return 1;
                                                                }
                                                            }
                                                        }
                                                    } else {
                                                        if (scaled_features[2] <= -0.13138136640191078f) {
                                                            return 2;
                                                        } else {
                                                            if (scaled_features[0] <= 0.008393744938075542f) {
                                                                if (scaled_features[5] <= -0.18642481043934822f) {
                                                                    return 1;
                                                                } else {
                                                                    if (scaled_features[3] <= -0.18859612196683884f) {
                                                                        if (scaled_features[4] <= 1.5711585879325867f) {
                                                                            if (scaled_features[0] <= -0.4694812446832657f) {
                                                                                return 1;
                                                                            } else {
                                                                                return 2;
                                                                            }
                                                                        } else {
                                                                            return 3;
                                                                        }
                                                                    } else {
                                                                        return 1;
                                                                    }
                                                                }
                                                            } else {
                                                                return 1;
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    return 2;
                                                }
                                            } else {
                                                if (scaled_features[4] <= -0.35396502912044525f) {
                                                    return 2;
                                                } else {
                                                    if (scaled_features[0] <= -0.8117693364620209f) {
                                                        return 2;
                                                    } else {
                                                        if (scaled_features[3] <= -0.11326562240719795f) {
                                                            if (scaled_features[4] <= -0.14462271332740784f) {
                                                                return 1;
                                                            } else {
                                                                if (scaled_features[5] <= -0.062176868319511414f) {
                                                                    if (scaled_features[0] <= 0.41657112538814545f) {
                                                                        return 1;
                                                                    } else {
                                                                        return 0;
                                                                    }
                                                                } else {
                                                                    if (scaled_features[5] <= 0.19679468125104904f) {
                                                                        return 0;
                                                                    } else {
                                                                        return 1;
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            if (scaled_features[0] <= 0.8533104956150055f) {
                                                                return 1;
                                                            } else {
                                                                if (scaled_features[3] <= -0.10944104194641113f) {
                                                                    return 0;
                                                                } else {
                                                                    return 2;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        if (scaled_features[0] <= -0.03867257013916969f) {
                                            if (scaled_features[1] <= 0.8224209845066071f) {
                                                if (scaled_features[5] <= -0.4321920573711395f) {
                                                    return 2;
                                                } else {
                                                    if (scaled_features[5] <= 0.04818431846797466f) {
                                                        return 1;
                                                    } else {
                                                        if (scaled_features[3] <= -0.2099873200058937f) {
                                                            return 2;
                                                        } else {
                                                            if (scaled_features[1] <= -0.10446055978536606f) {
                                                                return 1;
                                                            } else {
                                                                if (scaled_features[0] <= -0.18521913141012192f) {
                                                                    return 1;
                                                                } else {
                                                                    return 0;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (scaled_features[5] <= -0.13337470591068268f) {
                                                    return 2;
                                                } else {
                                                    return 3;
                                                }
                                            }
                                        } else {
                                            if (scaled_features[0] <= 0.15010157972574234f) {
                                                if (scaled_features[3] <= -0.17279432713985443f) {
                                                    if (scaled_features[0] <= 0.04643747443333268f) {
                                                        if (scaled_features[4] <= -0.013817287981510162f) {
                                                            return 1;
                                                        } else {
                                                            return 0;
                                                        }
                                                    } else {
                                                        return 0;
                                                    }
                                                } else {
                                                    return 1;
                                                }
                                            } else {
                                                if (scaled_features[3] <= -0.12585937231779099f) {
                                                    if (scaled_features[2] <= 1.3410764932632446f) {
                                                        if (scaled_features[4] <= 0.34282156825065613f) {
                                                            if (scaled_features[3] <= -0.2783411741256714f) {
                                                                if (scaled_features[5] <= -0.25218401849269867f) {
                                                                    return 2;
                                                                } else {
                                                                    return 1;
                                                                }
                                                            } else {
                                                                if (scaled_features[5] <= 0.008602350659202784f) {
                                                                    if (scaled_features[4] <= -0.13040249794721603f) {
                                                                        return 0;
                                                                    } else {
                                                                        return 1;
                                                                    }
                                                                } else {
                                                                    return 1;
                                                                }
                                                            }
                                                        } else {
                                                            return 2;
                                                        }
                                                    } else {
                                                        return 0;
                                                    }
                                                } else {
                                                    if (scaled_features[4] <= -0.20544440671801567f) {
                                                        return 2;
                                                    } else {
                                                        if (scaled_features[4] <= 0.15441948547959328f) {
                                                            if (scaled_features[3] <= -0.11902962625026703f) {
                                                                return 0;
                                                            } else {
                                                                return 1;
                                                            }
                                                        } else {
                                                            return 0;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    return 2;
                                }
                            } else {
                                if (scaled_features[3] <= 0.11892646923661232f) {
                                    if (scaled_features[4] <= 0.2579484283924103f) {
                                        if (scaled_features[0] <= 0.4860261380672455f) {
                                            if (scaled_features[3] <= -0.04312176816165447f) {
                                                if (scaled_features[5] <= -0.13252229988574982f) {
                                                    if (scaled_features[1] <= 0.3940872699022293f) {
                                                        if (scaled_features[0] <= -0.317785382270813f) {
                                                            if (scaled_features[5] <= -0.36758603900671005f) {
                                                                return 2;
                                                            } else {
                                                                return 1;
                                                            }
                                                        } else {
                                                            return 1;
                                                        }
                                                    } else {
                                                        if (scaled_features[4] <= -0.05374477431178093f) {
                                                            return 0;
                                                        } else {
                                                            return 2;
                                                        }
                                                    }
                                                } else {
                                                    if (scaled_features[1] <= 0.34494809806346893f) {
                                                        if (scaled_features[3] <= -0.05724433250725269f) {
                                                            if (scaled_features[4] <= -0.22404927760362625f) {
                                                                return 2;
                                                            } else {
                                                                if (scaled_features[3] <= -0.07049146667122841f) {
                                                                    if (scaled_features[0] <= -0.4885120093822479f) {
                                                                        if (scaled_features[1] <= -0.06426655501127243f) {
                                                                            return 1;
                                                                        } else {
                                                                            return 0;
                                                                        }
                                                                    } else {
                                                                        if (scaled_features[1] <= -0.5994977355003357f) {
                                                                            if (scaled_features[5] <= 0.11656047776341438f) {
                                                                                return 0;
                                                                            } else {
                                                                                return 1;
                                                                            }
                                                                        } else {
                                                                            return 0;
                                                                        }
                                                                    }
                                                                } else {
                                                                    if (scaled_features[2] <= -0.21602025628089905f) {
                                                                        if (scaled_features[2] <= -0.2907894104719162f) {
                                                                            return 0;
                                                                        } else {
                                                                            return 1;
                                                                        }
                                                                    } else {
                                                                        return 0;
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            if (scaled_features[2] <= 0.40314696729183197f) {
                                                                return 0;
                                                            } else {
                                                                if (scaled_features[2] <= 0.4160531908273697f) {
                                                                    return 1;
                                                                } else {
                                                                    if (scaled_features[4] <= -0.08792233280837536f) {
                                                                        return 1;
                                                                    } else {
                                                                        if (scaled_features[0] <= -0.13773169741034508f) {
                                                                            return 0;
                                                                        } else {
                                                                            return 1;
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    } else {
                                                        if (scaled_features[5] <= 0.02869998849928379f) {
                                                            if (scaled_features[5] <= -0.0627384576946497f) {
                                                                if (scaled_features[2] <= 0.81375652551651f) {
                                                                    if (scaled_features[2] <= 0.29492180421948433f) {
                                                                        return 0;
                                                                    } else {
                                                                        return 2;
                                                                    }
                                                                } else {
                                                                    return 1;
                                                                }
                                                            } else {
                                                                return 0;
                                                            }
                                                        } else {
                                                            if (scaled_features[4] <= 0.05208281800150871f) {
                                                                return 1;
                                                            } else {
                                                                return 0;
                                                            }
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (scaled_features[1] <= 0.8609890937805176f) {
                                                    if (scaled_features[5] <= 0.17099276185035706f) {
                                                        if (scaled_features[0] <= -0.06839323788881302f) {
                                                            if (scaled_features[4] <= -0.2426217719912529f) {
                                                                if (scaled_features[4] <= -0.46113626658916473f) {
                                                                    return 2;
                                                                } else {
                                                                    return 1;
                                                                }
                                                            } else {
                                                                if (scaled_features[0] <= -0.49094943702220917f) {
                                                                    if (scaled_features[2] <= 0.5912171304225922f) {
                                                                        return 0;
                                                                    } else {
                                                                        if (scaled_features[3] <= -0.03659236058592796f) {
                                                                            return 1;
                                                                        } else {
                                                                            if (scaled_features[0] <= -1.3939002752304077f) {
                                                                                return 1;
                                                                            } else {
                                                                                if (scaled_features[5] <= 0.06316637620329857f) {
                                                                                    return 0;
                                                                                } else {
                                                                                    return 0;
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                } else {
                                                                    if (scaled_features[2] <= 0.10271121934056282f) {
                                                                        if (scaled_features[0] <= -0.18545571714639664f) {
                                                                            if (scaled_features[2] <= 0.03397434577345848f) {
                                                                                if (scaled_features[0] <= -0.34694716334342957f) {
                                                                                    return 0;
                                                                                } else {
                                                                                    return 0;
                                                                                }
                                                                            } else {
                                                                                return 1;
                                                                            }
                                                                        } else {
                                                                            if (scaled_features[3] <= 0.05409826524555683f) {
                                                                                if (scaled_features[5] <= -0.10669589415192604f) {
                                                                                    return 1;
                                                                                } else {
                                                                                    return 1;
                                                                                }
                                                                            } else {
                                                                                return 0;
                                                                            }
                                                                        }
                                                                    } else {
                                                                        if (scaled_features[0] <= -0.4755096286535263f) {
                                                                            return 1;
                                                                        } else {
                                                                            if (scaled_features[0] <= -0.34505002200603485f) {
                                                                                if (scaled_features[2] <= 0.8096208274364471f) {
                                                                                    return 0;
                                                                                } else {
                                                                                    return 1;
                                                                                }
                                                                            } else {
                                                                                if (scaled_features[2] <= 0.8483348786830902f) {
                                                                                    return 0;
                                                                                } else {
                                                                                    return 0;
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            if (scaled_features[2] <= -0.2513808608055115f) {
                                                                if (scaled_features[5] <= -0.2720240354537964f) {
                                                                    return 2;
                                                                } else {
                                                                    return 0;
                                                                }
                                                            } else {
                                                                if (scaled_features[5] <= -0.2093546986579895f) {
                                                                    if (scaled_features[1] <= -0.5657678544521332f) {
                                                                        return 2;
                                                                    } else {
                                                                        return 1;
                                                                    }
                                                                } else {
                                                                    if (scaled_features[1] <= -0.6068316698074341f) {
                                                                        if (scaled_features[3] <= -0.036140598356723785f) {
                                                                            return 0;
                                                                        } else {
                                                                            if (scaled_features[1] <= -0.7671862840652466f) {
                                                                                return 0;
                                                                            } else {
                                                                                return 1;
                                                                            }
                                                                        }
                                                                    } else {
                                                                        if (scaled_features[0] <= 0.42269445955753326f) {
                                                                            if (scaled_features[4] <= -0.2650938332080841f) {
                                                                                if (scaled_features[4] <= -0.40905243158340454f) {
                                                                                    return 2;
                                                                                } else {
                                                                                    return 1;
                                                                                }
                                                                            } else {
                                                                                if (scaled_features[3] <= 0.0601053349673748f) {
                                                                                    return 0;
                                                                                } else {
                                                                                    return 0;
                                                                                }
                                                                            }
                                                                        } else {
                                                                            if (scaled_features[4] <= -0.25606922060251236f) {
                                                                                return 2;
                                                                            } else {
                                                                                if (scaled_features[3] <= 0.0322592630982399f) {
                                                                                    return 0;
                                                                                } else {
                                                                                    return 0;
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    } else {
                                                        if (scaled_features[5] <= 0.275840163230896f) {
                                                            if (scaled_features[1] <= -0.11637173220515251f) {
                                                                if (scaled_features[4] <= -0.04541153460741043f) {
                                                                    return 1;
                                                                } else {
                                                                    return 2;
                                                                }
                                                            } else {
                                                                if (scaled_features[0] <= 0.1490785120986402f) {
                                                                    if (scaled_features[5] <= 0.19617527723312378f) {
                                                                        return 2;
                                                                    } else {
                                                                        if (scaled_features[4] <= -0.0790610391413793f) {
                                                                            if (scaled_features[3] <= 0.07211577519774437f) {
                                                                                return 0;
                                                                            } else {
                                                                                return 1;
                                                                            }
                                                                        } else {
                                                                            return 0;
                                                                        }
                                                                    }
                                                                } else {
                                                                    return 1;
                                                                }
                                                            }
                                                        } else {
                                                            if (scaled_features[4] <= -0.2943508177995682f) {
                                                                return 2;
                                                            } else {
                                                                return 1;
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    if (scaled_features[5] <= -0.04163595847785473f) {
                                                        if (scaled_features[3] <= 0.07995112240314484f) {
                                                            if (scaled_features[1] <= 1.0523809790611267f) {
                                                                if (scaled_features[5] <= -0.23043093085289001f) {
                                                                    return 1;
                                                                } else {
                                                                    return 0;
                                                                }
                                                            } else {
                                                                return 1;
                                                            }
                                                        } else {
                                                            return 1;
                                                        }
                                                    } else {
                                                        return 0;
                                                    }
                                                }
                                            }
                                        } else {
                                            if (scaled_features[1] <= 0.6244320571422577f) {
                                                if (scaled_features[5] <= 0.18750298768281937f) {
                                                    if (scaled_features[2] <= 1.1527683734893799f) {
                                                        if (scaled_features[2] <= -0.42965859174728394f) {
                                                            if (scaled_features[5] <= -0.3754488527774811f) {
                                                                return 2;
                                                            } else {
                                                                return 1;
                                                            }
                                                        } else {
                                                            if (scaled_features[2] <= 0.1938304454088211f) {
                                                                return 0;
                                                            } else {
                                                                if (scaled_features[1] <= -0.4620586782693863f) {
                                                                    return 1;
                                                                } else {
                                                                    if (scaled_features[4] <= -0.008388903923332691f) {
                                                                        return 0;
                                                                    } else {
                                                                        if (scaled_features[3] <= -0.06674874573945999f) {
                                                                            if (scaled_features[1] <= 0.027688421308994293f) {
                                                                                return 1;
                                                                            } else {
                                                                                return 0;
                                                                            }
                                                                        } else {
                                                                            if (scaled_features[5] <= -0.1409386619925499f) {
                                                                                if (scaled_features[5] <= -0.24165937304496765f) {
                                                                                    return 1;
                                                                                } else {
                                                                                    return 2;
                                                                                }
                                                                            } else {
                                                                                if (scaled_features[5] <= 0.1326974220573902f) {
                                                                                    return 0;
                                                                                } else {
                                                                                    return 0;
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    } else {
                                                        return 1;
                                                    }
                                                } else {
                                                    if (scaled_features[0] <= 0.5481598973274231f) {
                                                        if (scaled_features[3] <= -0.010685557499527931f) {
                                                            return 2;
                                                        } else {
                                                            return 1;
                                                        }
                                                    } else {
                                                        return 1;
                                                    }
                                                }
                                            } else {
                                                if (scaled_features[0] <= 0.5259252637624741f) {
                                                    return 1;
                                                } else {
                                                    if (scaled_features[1] <= 0.688881129026413f) {
                                                        return 1;
                                                    } else {
                                                        return 2;
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        if (scaled_features[0] <= 0.6818569302558899f) {
                                            if (scaled_features[5] <= -0.32027316093444824f) {
                                                if (scaled_features[2] <= 1.3323940336704254f) {
                                                    return 2;
                                                } else {
                                                    return 1;
                                                }
                                            } else {
                                                if (scaled_features[4] <= 0.3936142474412918f) {
                                                    if (scaled_features[1] <= 0.9056403934955597f) {
                                                        if (scaled_features[0] <= 0.13126512616872787f) {
                                                            return 1;
                                                        } else {
                                                            if (scaled_features[5] <= 0.12755334004759789f) {
                                                                if (scaled_features[4] <= 0.29169921576976776f) {
                                                                    if (scaled_features[3] <= -0.04881395120173693f) {
                                                                        return 2;
                                                                    } else {
                                                                        return 0;
                                                                    }
                                                                } else {
                                                                    return 1;
                                                                }
                                                            } else {
                                                                return 1;
                                                            }
                                                        }
                                                    } else {
                                                        return 0;
                                                    }
                                                } else {
                                                    if (scaled_features[2] <= 0.08037370629608631f) {
                                                        if (scaled_features[2] <= -0.2424141000956297f) {
                                                            return 2;
                                                        } else {
                                                            return 1;
                                                        }
                                                    } else {
                                                        return 2;
                                                    }
                                                }
                                            }
                                        } else {
                                            return 2;
                                        }
                                    }
                                } else {
                                    if (scaled_features[5] <= 0.1517036184668541f) {
                                        if (scaled_features[1] <= -0.5940040051937103f) {
                                            if (scaled_features[3] <= 0.21696429699659348f) {
                                                if (scaled_features[2] <= 0.6535537838935852f) {
                                                    if (scaled_features[4] <= 0.0533378217369318f) {
                                                        if (scaled_features[1] <= -0.668157547712326f) {
                                                            if (scaled_features[5] <= -0.11591491848230362f) {
                                                                return 1;
                                                            } else {
                                                                if (scaled_features[5] <= 0.02592705935239792f) {
                                                                    return 0;
                                                                } else {
                                                                    return 1;
                                                                }
                                                            }
                                                        } else {
                                                            return 2;
                                                        }
                                                    } else {
                                                        if (scaled_features[0] <= -0.39516230672597885f) {
                                                            return 1;
                                                        } else {
                                                            return 0;
                                                        }
                                                    }
                                                } else {
                                                    return 0;
                                                }
                                            } else {
                                                if (scaled_features[1] <= -0.9245120584964752f) {
                                                    return 0;
                                                } else {
                                                    if (scaled_features[1] <= -0.6841491162776947f) {
                                                        if (scaled_features[1] <= -0.7524839639663696f) {
                                                            return 1;
                                                        } else {
                                                            return 0;
                                                        }
                                                    } else {
                                                        return 1;
                                                    }
                                                }
                                            }
                                        } else {
                                            if (scaled_features[1] <= -0.4747062176465988f) {
                                                if (scaled_features[1] <= -0.5638270080089569f) {
                                                    if (scaled_features[3] <= 0.20380035787820816f) {
                                                        return 1;
                                                    } else {
                                                        if (scaled_features[2] <= 0.4990638419985771f) {
                                                            return 0;
                                                        } else {
                                                            return 1;
                                                        }
                                                    }
                                                } else {
                                                    return 0;
                                                }
                                            } else {
                                                if (scaled_features[4] <= -0.13833356648683548f) {
                                                    if (scaled_features[4] <= -0.3661568760871887f) {
                                                        return 2;
                                                    } else {
                                                        if (scaled_features[3] <= 0.15115313977003098f) {
                                                            if (scaled_features[1] <= 0.15901073813438416f) {
                                                                if (scaled_features[5] <= -0.14404809474945068f) {
                                                                    return 1;
                                                                } else {
                                                                    return 0;
                                                                }
                                                            } else {
                                                                return 0;
                                                            }
                                                        } else {
                                                            return 1;
                                                        }
                                                    }
                                                } else {
                                                    if (scaled_features[4] <= 0.18096014112234116f) {
                                                        if (scaled_features[0] <= -0.6884526312351227f) {
                                                            if (scaled_features[4] <= 0.1575050875544548f) {
                                                                if (scaled_features[5] <= 0.047085028141736984f) {
                                                                    return 1;
                                                                } else {
                                                                    if (scaled_features[4] <= -0.09538127109408379f) {
                                                                        return 0;
                                                                    } else {
                                                                        return 1;
                                                                    }
                                                                }
                                                            } else {
                                                                return 0;
                                                            }
                                                        } else {
                                                            if (scaled_features[2] <= 0.08079379424452782f) {
                                                                if (scaled_features[3] <= 0.1868535801768303f) {
                                                                    if (scaled_features[2] <= 0.026470279321074486f) {
                                                                        if (scaled_features[5] <= -0.003931865096092224f) {
                                                                            return 0;
                                                                        } else {
                                                                            if (scaled_features[3] <= 0.14779184758663177f) {
                                                                                if (scaled_features[1] <= 0.3580019846558571f) {
                                                                                    return 1;
                                                                                } else {
                                                                                    return 0;
                                                                                }
                                                                            } else {
                                                                                return 0;
                                                                            }
                                                                        }
                                                                    } else {
                                                                        if (scaled_features[2] <= 0.06453985348343849f) {
                                                                            return 1;
                                                                        } else {
                                                                            if (scaled_features[0] <= 0.3307172358036041f) {
                                                                                return 0;
                                                                            } else {
                                                                                return 1;
                                                                            }
                                                                        }
                                                                    }
                                                                } else {
                                                                    if (scaled_features[3] <= 0.18887577205896378f) {
                                                                        return 1;
                                                                    } else {
                                                                        if (scaled_features[5] <= -0.059013014659285545f) {
                                                                            if (scaled_features[5] <= -0.3302750736474991f) {
                                                                                return 2;
                                                                            } else {
                                                                                if (scaled_features[2] <= 0.005812197923660278f) {
                                                                                    return 1;
                                                                                } else {
                                                                                    return 0;
                                                                                }
                                                                            }
                                                                        } else {
                                                                            if (scaled_features[0] <= 0.16865453869104385f) {
                                                                                return 0;
                                                                            } else {
                                                                                return 1;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            } else {
                                                                if (scaled_features[2] <= 0.22663316130638123f) {
                                                                    return 0;
                                                                } else {
                                                                    if (scaled_features[1] <= 0.20554228872060776f) {
                                                                        if (scaled_features[3] <= 0.13474898040294647f) {
                                                                            return 1;
                                                                        } else {
                                                                            if (scaled_features[1] <= 0.1134258396923542f) {
                                                                                if (scaled_features[0] <= 0.07794855162501335f) {
                                                                                    return 0;
                                                                                } else {
                                                                                    return 0;
                                                                                }
                                                                            } else {
                                                                                return 1;
                                                                            }
                                                                        }
                                                                    } else {
                                                                        if (scaled_features[4] <= 0.08118591085076332f) {
                                                                            if (scaled_features[5] <= 0.026461542584002018f) {
                                                                                if (scaled_features[2] <= 0.758219838142395f) {
                                                                                    return 1;
                                                                                } else {
                                                                                    return 0;
                                                                                }
                                                                            } else {
                                                                                return 0;
                                                                            }
                                                                        } else {
                                                                            return 0;
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    } else {
                                                        if (scaled_features[4] <= 0.3913986533880234f) {
                                                            if (scaled_features[1] <= 0.4037216901779175f) {
                                                                if (scaled_features[3] <= 0.21178457885980606f) {
                                                                    if (scaled_features[4] <= 0.2325633466243744f) {
                                                                        if (scaled_features[4] <= 0.22890856117010117f) {
                                                                            if (scaled_features[5] <= -0.12249854952096939f) {
                                                                                return 0;
                                                                            } else {
                                                                                return 1;
                                                                            }
                                                                        } else {
                                                                            return 0;
                                                                        }
                                                                    } else {
                                                                        return 1;
                                                                    }
                                                                } else {
                                                                    return 1;
                                                                }
                                                            } else {
                                                                if (scaled_features[1] <= 0.47243139147758484f) {
                                                                    return 0;
                                                                } else {
                                                                    if (scaled_features[4] <= 0.20103983581066132f) {
                                                                        return 2;
                                                                    } else {
                                                                        return 1;
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            return 2;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        if (scaled_features[4] <= -0.27571071684360504f) {
                                            if (scaled_features[0] <= -0.22187379375100136f) {
                                                if (scaled_features[0] <= -1.0237983167171478f) {
                                                    return 2;
                                                } else {
                                                    return 1;
                                                }
                                            } else {
                                                return 2;
                                            }
                                        } else {
                                            if (scaled_features[5] <= 0.45566678047180176f) {
                                                if (scaled_features[2] <= 0.16923829168081284f) {
                                                    return 1;
                                                } else {
                                                    if (scaled_features[5] <= 0.278282031416893f) {
                                                        if (scaled_features[5] <= 0.24843916296958923f) {
                                                            if (scaled_features[0] <= -0.32538892328739166f) {
                                                                return 0;
                                                            } else {
                                                                if (scaled_features[4] <= 0.05357271805405617f) {
                                                                    return 1;
                                                                } else {
                                                                    if (scaled_features[5] <= 0.19657136499881744f) {
                                                                        return 2;
                                                                    } else {
                                                                        return 1;
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            return 2;
                                                        }
                                                    } else {
                                                        return 1;
                                                    }
                                                }
                                            } else {
                                                return 2;
                                            }
                                        }
                                    }
                                }
                            }
                        } else {
                            if (scaled_features[3] <= 0.8451502323150635f) {
                                if (scaled_features[2] <= 0.23787891119718552f) {
                                    if (scaled_features[0] <= 0.46533817052841187f) {
                                        if (scaled_features[3] <= 0.46081171929836273f) {
                                            if (scaled_features[5] <= -0.2669428437948227f) {
                                                if (scaled_features[1] <= -0.3301341347396374f) {
                                                    return 1;
                                                } else {
                                                    return 2;
                                                }
                                            } else {
                                                if (scaled_features[5] <= 0.23424401879310608f) {
                                                    if (scaled_features[1] <= -0.927544891834259f) {
                                                        return 2;
                                                    } else {
                                                        if (scaled_features[1] <= -0.08909465279430151f) {
                                                            if (scaled_features[0] <= -0.6024692058563232f) {
                                                                return 0;
                                                            } else {
                                                                return 1;
                                                            }
                                                        } else {
                                                            if (scaled_features[1] <= 0.01923799025826156f) {
                                                                return 2;
                                                            } else {
                                                                if (scaled_features[5] <= 0.19087743014097214f) {
                                                                    if (scaled_features[5] <= -0.051845189183950424f) {
                                                                        if (scaled_features[3] <= 0.3474638760089874f) {
                                                                            return 2;
                                                                        } else {
                                                                            if (scaled_features[2] <= 0.13452433794736862f) {
                                                                                if (scaled_features[3] <= 0.4036940783262253f) {
                                                                                    return 1;
                                                                                } else {
                                                                                    return 2;
                                                                                }
                                                                            } else {
                                                                                return 2;
                                                                            }
                                                                        }
                                                                    } else {
                                                                        return 1;
                                                                    }
                                                                } else {
                                                                    if (scaled_features[3] <= 0.34630852937698364f) {
                                                                        return 2;
                                                                    } else {
                                                                        return 0;
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    if (scaled_features[2] <= 0.1967500001192093f) {
                                                        return 2;
                                                    } else {
                                                        return 1;
                                                    }
                                                }
                                            }
                                        } else {
                                            if (scaled_features[3] <= 0.5545811951160431f) {
                                                if (scaled_features[0] <= -0.6723541915416718f) {
                                                    return 1;
                                                } else {
                                                    if (scaled_features[5] <= -0.06800972577184439f) {
                                                        if (scaled_features[4] <= 0.26516032963991165f) {
                                                            return 1;
                                                        } else {
                                                            return 2;
                                                        }
                                                    } else {
                                                        if (scaled_features[2] <= -0.45828430354595184f) {
                                                            return 1;
                                                        } else {
                                                            return 2;
                                                        }
                                                    }
                                                }
                                            } else {
                                                return 2;
                                            }
                                        }
                                    } else {
                                        if (scaled_features[3] <= 0.31220726668834686f) {
                                            return 3;
                                        } else {
                                            return 2;
                                        }
                                    }
                                } else {
                                    if (scaled_features[3] <= 0.5457779765129089f) {
                                        if (scaled_features[1] <= -0.29910674691200256f) {
                                            if (scaled_features[5] <= 0.1645503044128418f) {
                                                if (scaled_features[2] <= 0.4109310954809189f) {
                                                    return 1;
                                                } else {
                                                    if (scaled_features[0] <= 0.8809539675712585f) {
                                                        if (scaled_features[5] <= 0.0483848974108696f) {
                                                            return 2;
                                                        } else {
                                                            if (scaled_features[3] <= 0.36748529970645905f) {
                                                                if (scaled_features[3] <= 0.311824768781662f) {
                                                                    return 1;
                                                                } else {
                                                                    return 0;
                                                                }
                                                            } else {
                                                                return 2;
                                                            }
                                                        }
                                                    } else {
                                                        return 1;
                                                    }
                                                }
                                            } else {
                                                return 1;
                                            }
                                        } else {
                                            if (scaled_features[5] <= -0.38151490688323975f) {
                                                return 2;
                                            } else {
                                                if (scaled_features[4] <= -0.4128974825143814f) {
                                                    return 2;
                                                } else {
                                                    if (scaled_features[1] <= 0.5232841670513153f) {
                                                        if (scaled_features[0] <= -0.9208917617797852f) {
                                                            return 0;
                                                        } else {
                                                            if (scaled_features[5] <= 0.19462355971336365f) {
                                                                if (scaled_features[3] <= 0.3079129159450531f) {
                                                                    if (scaled_features[3] <= 0.30484241247177124f) {
                                                                        return 1;
                                                                    } else {
                                                                        return 0;
                                                                    }
                                                                } else {
                                                                    return 1;
                                                                }
                                                            } else {
                                                                if (scaled_features[1] <= 0.11951365321874619f) {
                                                                    return 2;
                                                                } else {
                                                                    return 1;
                                                                }
                                                            }
                                                        }
                                                    } else {
                                                        if (scaled_features[5] <= 0.28810402005910873f) {
                                                            return 1;
                                                        } else {
                                                            return 2;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        if (scaled_features[0] <= 1.803954154253006f) {
                                            if (scaled_features[4] <= 0.7256340682506561f) {
                                                return 2;
                                            } else {
                                                return 3;
                                            }
                                        } else {
                                            return 3;
                                        }
                                    }
                                }
                            } else {
                                return 3;
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (scaled_features[2] <= -0.5929551124572754f) {
            if (scaled_features[2] <= -0.6746006906032562f) {
                if (scaled_features[0] <= -0.8548517525196075f) {
                    if (scaled_features[0] <= -0.9115161299705505f) {
                        return 3;
                    } else {
                        return 2;
                    }
                } else {
                    return 3;
                }
            } else {
                if (scaled_features[3] <= 1.91332046687603f) {
                    return 2;
                } else {
                    return 3;
                }
            }
        } else {
            return 3;
        }
    }
}


int predict_tree_4(float* features) {
    float scaled_features[6];
    for(int i = 0; i < 6; i++) {
        scaled_features[i] = (features[i] - -0.3719833026163245f) / 14.77640797099387f;
    }
    if (scaled_features[3] <= -0.6690098941326141f) {
        if (scaled_features[1] <= 1.499172329902649f) {
            return 3;
        } else {
            if (scaled_features[1] <= 1.5140684247016907f) {
                return 2;
            } else {
                return 3;
            }
        }
    } else {
        if (scaled_features[3] <= 0.8052283525466919f) {
            if (scaled_features[2] <= -0.6123175323009491f) {
                if (scaled_features[5] <= 0.19269681721925735f) {
                    if (scaled_features[5] <= -0.2721511870622635f) {
                        if (scaled_features[2] <= -1.5509282350540161f) {
                            if (scaled_features[4] <= 0.8900662660598755f) {
                                if (scaled_features[2] <= -1.7033650279045105f) {
                                    if (scaled_features[5] <= -1.4764379560947418f) {
                                        return 3;
                                    } else {
                                        return 2;
                                    }
                                } else {
                                    if (scaled_features[5] <= -0.42843617498874664f) {
                                        return 2;
                                    } else {
                                        if (scaled_features[0] <= -0.20493004471063614f) {
                                            return 1;
                                        } else {
                                            return 2;
                                        }
                                    }
                                }
                            } else {
                                return 3;
                            }
                        } else {
                            if (scaled_features[5] <= -1.0160253047943115f) {
                                return 3;
                            } else {
                                if (scaled_features[1] <= 0.07265925034880638f) {
                                    return 2;
                                } else {
                                    if (scaled_features[5] <= -0.2880987077951431f) {
                                        if (scaled_features[3] <= -0.026247650384902954f) {
                                            if (scaled_features[0] <= 0.1685759797692299f) {
                                                return 2;
                                            } else {
                                                if (scaled_features[3] <= -0.21827219426631927f) {
                                                    return 2;
                                                } else {
                                                    return 1;
                                                }
                                            }
                                        } else {
                                            return 2;
                                        }
                                    } else {
                                        if (scaled_features[5] <= -0.28030695021152496f) {
                                            return 1;
                                        } else {
                                            return 2;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (scaled_features[0] <= 0.28287725150585175f) {
                            if (scaled_features[4] <= -0.31965869665145874f) {
                                return 2;
                            } else {
                                if (scaled_features[4] <= 0.22185413539409637f) {
                                    if (scaled_features[5] <= 0.03204799257218838f) {
                                        if (scaled_features[5] <= -0.17956019937992096f) {
                                            if (scaled_features[5] <= -0.19510601460933685f) {
                                                if (scaled_features[2] <= -0.6901390552520752f) {
                                                    return 1;
                                                } else {
                                                    return 2;
                                                }
                                            } else {
                                                return 2;
                                            }
                                        } else {
                                            if (scaled_features[0] <= -0.30617281794548035f) {
                                                if (scaled_features[4] <= -0.060905883088707924f) {
                                                    if (scaled_features[2] <= -1.0082133114337921f) {
                                                        return 2;
                                                    } else {
                                                        if (scaled_features[5] <= -0.10525437071919441f) {
                                                            if (scaled_features[1] <= 0.6460523754358292f) {
                                                                return 0;
                                                            } else {
                                                                return 1;
                                                            }
                                                        } else {
                                                            return 1;
                                                        }
                                                    }
                                                } else {
                                                    if (scaled_features[1] <= -0.030331632122397423f) {
                                                        if (scaled_features[3] <= -0.08956332877278328f) {
                                                            return 1;
                                                        } else {
                                                            return 0;
                                                        }
                                                    } else {
                                                        if (scaled_features[4] <= -0.0406780019402504f) {
                                                            return 1;
                                                        } else {
                                                            if (scaled_features[3] <= -0.021096997894346714f) {
                                                                return 0;
                                                            } else {
                                                                if (scaled_features[3] <= 0.21380800008773804f) {
                                                                    return 1;
                                                                } else {
                                                                    return 2;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (scaled_features[4] <= -0.252224400639534f) {
                                                    return 1;
                                                } else {
                                                    if (scaled_features[5] <= -0.11992949992418289f) {
                                                        if (scaled_features[2] <= -1.095196783542633f) {
                                                            return 0;
                                                        } else {
                                                            if (scaled_features[1] <= -0.454239621758461f) {
                                                                return 0;
                                                            } else {
                                                                return 1;
                                                            }
                                                        }
                                                    } else {
                                                        return 0;
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        if (scaled_features[4] <= 0.07636405155062675f) {
                                            if (scaled_features[1] <= -0.2936701774597168f) {
                                                if (scaled_features[2] <= -1.5049505829811096f) {
                                                    return 1;
                                                } else {
                                                    return 0;
                                                }
                                            } else {
                                                if (scaled_features[4] <= 0.022865769191412255f) {
                                                    if (scaled_features[2] <= -1.0833128094673157f) {
                                                        if (scaled_features[0] <= -0.14764627441763878f) {
                                                            return 2;
                                                        } else {
                                                            return 1;
                                                        }
                                                    } else {
                                                        if (scaled_features[5] <= 0.15764188021421432f) {
                                                            if (scaled_features[3] <= 0.017112272791564465f) {
                                                                return 1;
                                                            } else {
                                                                if (scaled_features[0] <= -0.19926972314715385f) {
                                                                    return 1;
                                                                } else {
                                                                    return 2;
                                                                }
                                                            }
                                                        } else {
                                                            return 2;
                                                        }
                                                    }
                                                } else {
                                                    return 0;
                                                }
                                            }
                                        } else {
                                            if (scaled_features[3] <= -0.01913554221391678f) {
                                                return 1;
                                            } else {
                                                if (scaled_features[2] <= -0.7446523010730743f) {
                                                    return 1;
                                                } else {
                                                    return 0;
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    if (scaled_features[1] <= -0.7319101691246033f) {
                                        return 2;
                                    } else {
                                        if (scaled_features[3] <= -0.2524809241294861f) {
                                            return 2;
                                        } else {
                                            if (scaled_features[4] <= 0.34172238409519196f) {
                                                if (scaled_features[0] <= 0.24434325098991394f) {
                                                    return 1;
                                                } else {
                                                    return 2;
                                                }
                                            } else {
                                                if (scaled_features[0] <= -0.3137531727552414f) {
                                                    if (scaled_features[0] <= -0.5249727964401245f) {
                                                        if (scaled_features[4] <= 0.6095487326383591f) {
                                                            return 2;
                                                        } else {
                                                            return 3;
                                                        }
                                                    } else {
                                                        return 1;
                                                    }
                                                } else {
                                                    return 2;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        } else {
                            if (scaled_features[4] <= -0.3366030156612396f) {
                                return 2;
                            } else {
                                if (scaled_features[2] <= -0.7028254270553589f) {
                                    if (scaled_features[4] <= 0.40545639395713806f) {
                                        if (scaled_features[5] <= -0.11083858460187912f) {
                                            if (scaled_features[3] <= 0.08243758976459503f) {
                                                if (scaled_features[3] <= 0.019408706575632095f) {
                                                    if (scaled_features[3] <= -0.06928842142224312f) {
                                                        return 1;
                                                    } else {
                                                        if (scaled_features[5] <= -0.16644136980175972f) {
                                                            if (scaled_features[2] <= -1.2126142978668213f) {
                                                                return 1;
                                                            } else {
                                                                return 0;
                                                            }
                                                        } else {
                                                            return 1;
                                                        }
                                                    }
                                                } else {
                                                    return 0;
                                                }
                                            } else {
                                                return 1;
                                            }
                                        } else {
                                            if (scaled_features[5] <= 0.024846491403877735f) {
                                                if (scaled_features[3] <= -0.092855678871274f) {
                                                    if (scaled_features[5] <= -0.01615094067528844f) {
                                                        return 1;
                                                    } else {
                                                        if (scaled_features[2] <= -1.2000361382961273f) {
                                                            return 1;
                                                        } else {
                                                            return 2;
                                                        }
                                                    }
                                                } else {
                                                    if (scaled_features[4] <= -0.005066619720309973f) {
                                                        if (scaled_features[1] <= -0.28462548553943634f) {
                                                            if (scaled_features[1] <= -0.3251163214445114f) {
                                                                return 0;
                                                            } else {
                                                                return 1;
                                                            }
                                                        } else {
                                                            return 0;
                                                        }
                                                    } else {
                                                        if (scaled_features[0] <= 0.3746841251850128f) {
                                                            return 1;
                                                        } else {
                                                            if (scaled_features[5] <= -0.014543138910084963f) {
                                                                if (scaled_features[4] <= 0.08858685940504074f) {
                                                                    return 0;
                                                                } else {
                                                                    return 1;
                                                                }
                                                            } else {
                                                                return 2;
                                                            }
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (scaled_features[2] <= -1.222836196422577f) {
                                                    if (scaled_features[4] <= -0.10941621847450733f) {
                                                        return 2;
                                                    } else {
                                                        if (scaled_features[3] <= 0.3174427002668381f) {
                                                            return 0;
                                                        } else {
                                                            return 1;
                                                        }
                                                    }
                                                } else {
                                                    if (scaled_features[4] <= 0.004263699986040592f) {
                                                        if (scaled_features[2] <= -0.8193386793136597f) {
                                                            return 1;
                                                        } else {
                                                            if (scaled_features[0] <= 0.6587919890880585f) {
                                                                return 1;
                                                            } else {
                                                                return 0;
                                                            }
                                                        }
                                                    } else {
                                                        if (scaled_features[3] <= 0.08982767257839441f) {
                                                            if (scaled_features[4] <= 0.2628147602081299f) {
                                                                return 1;
                                                            } else {
                                                                return 2;
                                                            }
                                                        } else {
                                                            if (scaled_features[4] <= 0.21271716058254242f) {
                                                                if (scaled_features[5] <= 0.1389549933373928f) {
                                                                    return 0;
                                                                } else {
                                                                    return 2;
                                                                }
                                                            } else {
                                                                return 1;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        if (scaled_features[2] <= -1.7038477659225464f) {
                                            return 3;
                                        } else {
                                            return 2;
                                        }
                                    }
                                } else {
                                    if (scaled_features[3] <= -0.19610421126708388f) {
                                        return 2;
                                    } else {
                                        return 0;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (scaled_features[5] <= 0.8262571692466736f) {
                        if (scaled_features[5] <= 0.31612737476825714f) {
                            if (scaled_features[5] <= 0.286279633641243f) {
                                if (scaled_features[0] <= -0.5922215580940247f) {
                                    if (scaled_features[2] <= -1.2365033626556396f) {
                                        return 2;
                                    } else {
                                        return 1;
                                    }
                                } else {
                                    if (scaled_features[5] <= 0.2474997118115425f) {
                                        if (scaled_features[5] <= 0.24086518585681915f) {
                                            if (scaled_features[1] <= -1.004080593585968f) {
                                                return 1;
                                            } else {
                                                if (scaled_features[2] <= -0.7977829575538635f) {
                                                    if (scaled_features[1] <= 0.15041028335690498f) {
                                                        return 2;
                                                    } else {
                                                        if (scaled_features[1] <= 0.30608896166086197f) {
                                                            return 1;
                                                        } else {
                                                            return 2;
                                                        }
                                                    }
                                                } else {
                                                    if (scaled_features[4] <= 0.1298192129470408f) {
                                                        return 1;
                                                    } else {
                                                        return 2;
                                                    }
                                                }
                                            }
                                        } else {
                                            return 1;
                                        }
                                    } else {
                                        return 2;
                                    }
                                }
                            } else {
                                if (scaled_features[2] <= -1.4088789820671082f) {
                                    return 2;
                                } else {
                                    if (scaled_features[2] <= -0.616321474313736f) {
                                        if (scaled_features[3] <= 0.04640853777527809f) {
                                            if (scaled_features[3] <= -0.06339946761727333f) {
                                                return 1;
                                            } else {
                                                return 2;
                                            }
                                        } else {
                                            return 1;
                                        }
                                    } else {
                                        return 2;
                                    }
                                }
                            }
                        } else {
                            if (scaled_features[4] <= 1.3172726333141327f) {
                                if (scaled_features[1] <= 0.1788116618990898f) {
                                    if (scaled_features[2] <= -0.7849037945270538f) {
                                        if (scaled_features[3] <= -0.09445744007825851f) {
                                            if (scaled_features[5] <= 0.3719165474176407f) {
                                                if (scaled_features[1] <= -0.30595408380031586f) {
                                                    if (scaled_features[2] <= -1.3714796900749207f) {
                                                        return 2;
                                                    } else {
                                                        return 1;
                                                    }
                                                } else {
                                                    return 2;
                                                }
                                            } else {
                                                return 2;
                                            }
                                        } else {
                                            return 2;
                                        }
                                    } else {
                                        if (scaled_features[5] <= 0.4067080169916153f) {
                                            if (scaled_features[5] <= 0.3630601167678833f) {
                                                return 2;
                                            } else {
                                                return 1;
                                            }
                                        } else {
                                            return 2;
                                        }
                                    }
                                } else {
                                    return 2;
                                }
                            } else {
                                return 3;
                            }
                        }
                    } else {
                        return 3;
                    }
                }
            } else {
                if (scaled_features[1] <= 1.5799044966697693f) {
                    if (scaled_features[3] <= -0.16618604958057404f) {
                        if (scaled_features[3] <= -0.38114579021930695f) {
                            if (scaled_features[5] <= 0.707212895154953f) {
                                if (scaled_features[0] <= -1.3227150440216064f) {
                                    return 3;
                                } else {
                                    if (scaled_features[1] <= 1.1307478547096252f) {
                                        if (scaled_features[3] <= -0.5198523700237274f) {
                                            return 2;
                                        } else {
                                            if (scaled_features[3] <= -0.5147118270397186f) {
                                                return 3;
                                            } else {
                                                if (scaled_features[0] <= -0.8945253193378448f) {
                                                    return 3;
                                                } else {
                                                    return 2;
                                                }
                                            }
                                        }
                                    } else {
                                        if (scaled_features[4] <= 0.6340470910072327f) {
                                            return 2;
                                        } else {
                                            return 3;
                                        }
                                    }
                                }
                            } else {
                                return 3;
                            }
                        } else {
                            if (scaled_features[5] <= 0.3415582627058029f) {
                                if (scaled_features[5] <= -0.42665839195251465f) {
                                    if (scaled_features[4] <= -1.2587546706199646f) {
                                        return 3;
                                    } else {
                                        if (scaled_features[5] <= -1.0480376482009888f) {
                                            return 3;
                                        } else {
                                            return 2;
                                        }
                                    }
                                } else {
                                    if (scaled_features[5] <= -0.26735542714595795f) {
                                        return 1;
                                    } else {
                                        if (scaled_features[5] <= -0.26071129739284515f) {
                                            if (scaled_features[0] <= 0.07058764155954123f) {
                                                return 1;
                                            } else {
                                                return 2;
                                            }
                                        } else {
                                            if (scaled_features[0] <= 0.09372176975011826f) {
                                                if (scaled_features[1] <= -0.5767686367034912f) {
                                                    if (scaled_features[4] <= 0.0041485074907541275f) {
                                                        return 2;
                                                    } else {
                                                        if (scaled_features[2] <= 0.17782846838235855f) {
                                                            return 2;
                                                        } else {
                                                            return 1;
                                                        }
                                                    }
                                                } else {
                                                    if (scaled_features[3] <= -0.36655618250370026f) {
                                                        return 2;
                                                    } else {
                                                        if (scaled_features[1] <= -0.20695917308330536f) {
                                                            if (scaled_features[4] <= -0.2361476942896843f) {
                                                                if (scaled_features[0] <= -0.6862732470035553f) {
                                                                    return 2;
                                                                } else {
                                                                    if (scaled_features[3] <= -0.26461873948574066f) {
                                                                        return 2;
                                                                    } else {
                                                                        return 1;
                                                                    }
                                                                }
                                                            } else {
                                                                return 1;
                                                            }
                                                        } else {
                                                            if (scaled_features[1] <= -0.07069224119186401f) {
                                                                if (scaled_features[0] <= -1.0321431756019592f) {
                                                                    return 1;
                                                                } else {
                                                                    if (scaled_features[1] <= -0.11798284575343132f) {
                                                                        return 2;
                                                                    } else {
                                                                        if (scaled_features[2] <= 0.925796777009964f) {
                                                                            return 2;
                                                                        } else {
                                                                            return 0;
                                                                        }
                                                                    }
                                                                }
                                                            } else {
                                                                if (scaled_features[3] <= -0.18413668870925903f) {
                                                                    if (scaled_features[3] <= -0.2330389767885208f) {
                                                                        if (scaled_features[4] <= 0.08020314946770668f) {
                                                                            if (scaled_features[2] <= 0.7236710488796234f) {
                                                                                if (scaled_features[3] <= -0.2676134407520294f) {
                                                                                    return 1;
                                                                                } else {
                                                                                    return 2;
                                                                                }
                                                                            } else {
                                                                                return 1;
                                                                            }
                                                                        } else {
                                                                            return 1;
                                                                        }
                                                                    } else {
                                                                        if (scaled_features[0] <= -0.2843978926539421f) {
                                                                            if (scaled_features[5] <= 0.15799975395202637f) {
                                                                                if (scaled_features[2] <= 0.4699222594499588f) {
                                                                                    return 3;
                                                                                } else {
                                                                                    return 2;
                                                                                }
                                                                            } else {
                                                                                return 2;
                                                                            }
                                                                        } else {
                                                                            if (scaled_features[5] <= -0.13498988561332226f) {
                                                                                if (scaled_features[1] <= 0.4541950225830078f) {
                                                                                    return 2;
                                                                                } else {
                                                                                    return 0;
                                                                                }
                                                                            } else {
                                                                                return 1;
                                                                            }
                                                                        }
                                                                    }
                                                                } else {
                                                                    return 1;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            } else {
                                                return 1;
                                            }
                                        }
                                    }
                                }
                            } else {
                                if (scaled_features[2] <= 0.16544531285762787f) {
                                    return 2;
                                } else {
                                    if (scaled_features[4] <= -0.1469668437493965f) {
                                        if (scaled_features[3] <= -0.32945939898490906f) {
                                            return 2;
                                        } else {
                                            return 3;
                                        }
                                    } else {
                                        if (scaled_features[0] <= -0.0961841568350792f) {
                                            if (scaled_features[5] <= 1.8363381326198578f) {
                                                return 2;
                                            } else {
                                                return 3;
                                            }
                                        } else {
                                            return 1;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (scaled_features[4] <= 0.27256321907043457f) {
                            if (scaled_features[3] <= 0.23792176693677902f) {
                                if (scaled_features[3] <= -0.10482997819781303f) {
                                    if (scaled_features[2] <= 0.3567414730787277f) {
                                        if (scaled_features[5] <= 0.1680942177772522f) {
                                            if (scaled_features[5] <= -0.19269710034132004f) {
                                                if (scaled_features[4] <= -1.311050459742546f) {
                                                    return 3;
                                                } else {
                                                    if (scaled_features[0] <= 0.9129164814949036f) {
                                                        return 1;
                                                    } else {
                                                        return 2;
                                                    }
                                                }
                                            } else {
                                                if (scaled_features[4] <= -0.15245109051465988f) {
                                                    if (scaled_features[1] <= 0.0849350206553936f) {
                                                        return 0;
                                                    } else {
                                                        return 1;
                                                    }
                                                } else {
                                                    if (scaled_features[0] <= -0.5945155322551727f) {
                                                        if (scaled_features[4] <= -0.04833083227276802f) {
                                                            return 0;
                                                        } else {
                                                            return 1;
                                                        }
                                                    } else {
                                                        if (scaled_features[1] <= 0.18044079840183258f) {
                                                            return 0;
                                                        } else {
                                                            if (scaled_features[2] <= -0.15310823917388916f) {
                                                                if (scaled_features[1] <= 0.3795795291662216f) {
                                                                    return 0;
                                                                } else {
                                                                    if (scaled_features[1] <= 0.40961384773254395f) {
                                                                        return 1;
                                                                    } else {
                                                                        return 0;
                                                                    }
                                                                }
                                                            } else {
                                                                if (scaled_features[3] <= -0.1347973234951496f) {
                                                                    return 0;
                                                                } else {
                                                                    return 1;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            if (scaled_features[4] <= -0.21260005980730057f) {
                                                if (scaled_features[1] <= -0.7482187449932098f) {
                                                    return 1;
                                                } else {
                                                    return 2;
                                                }
                                            } else {
                                                return 1;
                                            }
                                        }
                                    } else {
                                        if (scaled_features[4] <= -0.4689881056547165f) {
                                            return 3;
                                        } else {
                                            if (scaled_features[0] <= 0.4087897390127182f) {
                                                if (scaled_features[2] <= 1.044522762298584f) {
                                                    if (scaled_features[1] <= 0.9957244098186493f) {
                                                        return 1;
                                                    } else {
                                                        return 0;
                                                    }
                                                } else {
                                                    if (scaled_features[0] <= -0.27412909269332886f) {
                                                        return 0;
                                                    } else {
                                                        if (scaled_features[0] <= -0.002066059736534953f) {
                                                            return 1;
                                                        } else {
                                                            if (scaled_features[5] <= 0.10668820515275002f) {
                                                                return 1;
                                                            } else {
                                                                return 0;
                                                            }
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (scaled_features[2] <= 0.4265457093715668f) {
                                                    return 1;
                                                } else {
                                                    return 0;
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    if (scaled_features[2] <= 0.7040751278400421f) {
                                        if (scaled_features[5] <= 0.17295953631401062f) {
                                            if (scaled_features[1] <= 0.6830809414386749f) {
                                                if (scaled_features[2] <= 0.04173160530626774f) {
                                                    if (scaled_features[1] <= 0.4225480854511261f) {
                                                        if (scaled_features[2] <= 0.02547492738813162f) {
                                                            if (scaled_features[5] <= -0.21724668145179749f) {
                                                                if (scaled_features[4] <= -0.40221165120601654f) {
                                                                    if (scaled_features[5] <= -1.0918119847774506f) {
                                                                        return 3;
                                                                    } else {
                                                                        return 2;
                                                                    }
                                                                } else {
                                                                    if (scaled_features[5] <= -0.5103214532136917f) {
                                                                        return 2;
                                                                    } else {
                                                                        if (scaled_features[2] <= -0.4887266010046005f) {
                                                                            if (scaled_features[5] <= -0.2646188884973526f) {
                                                                                return 1;
                                                                            } else {
                                                                                return 0;
                                                                            }
                                                                        } else {
                                                                            if (scaled_features[0] <= 0.29545173048973083f) {
                                                                                return 1;
                                                                            } else {
                                                                                if (scaled_features[5] <= -0.32605554163455963f) {
                                                                                    return 2;
                                                                                } else {
                                                                                    return 1;
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            } else {
                                                                if (scaled_features[1] <= -1.3544264435768127f) {
                                                                    return 1;
                                                                } else {
                                                                    if (scaled_features[4] <= 0.2352922037243843f) {
                                                                        if (scaled_features[2] <= -0.163077250123024f) {
                                                                            if (scaled_features[4] <= -0.09108801931142807f) {
                                                                                if (scaled_features[5] <= 0.023795892484486103f) {
                                                                                    return 0;
                                                                                } else {
                                                                                    return 1;
                                                                                }
                                                                            } else {
                                                                                if (scaled_features[1] <= -0.6797321736812592f) {
                                                                                    return 1;
                                                                                } else {
                                                                                    return 0;
                                                                                }
                                                                            }
                                                                        } else {
                                                                            if (scaled_features[0] <= -0.8132875859737396f) {
                                                                                if (scaled_features[5] <= -0.008386578876525164f) {
                                                                                    return 2;
                                                                                } else {
                                                                                    return 0;
                                                                                }
                                                                            } else {
                                                                                if (scaled_features[2] <= -0.13278331607580185f) {
                                                                                    return 0;
                                                                                } else {
                                                                                    return 0;
                                                                                }
                                                                            }
                                                                        }
                                                                    } else {
                                                                        return 1;
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            if (scaled_features[2] <= 0.03397434577345848f) {
                                                                if (scaled_features[5] <= 0.04124855063855648f) {
                                                                    return 0;
                                                                } else {
                                                                    return 1;
                                                                }
                                                            } else {
                                                                return 1;
                                                            }
                                                        }
                                                    } else {
                                                        if (scaled_features[5] <= 0.038655782118439674f) {
                                                            if (scaled_features[2] <= -0.4725082665681839f) {
                                                                return 1;
                                                            } else {
                                                                if (scaled_features[1] <= 0.5694338977336884f) {
                                                                    if (scaled_features[0] <= 0.6756072640419006f) {
                                                                        if (scaled_features[3] <= 0.2075662612915039f) {
                                                                            if (scaled_features[2] <= -0.10047104582190514f) {
                                                                                if (scaled_features[1] <= 0.4637216329574585f) {
                                                                                    return 0;
                                                                                } else {
                                                                                    return 2;
                                                                                }
                                                                            } else {
                                                                                if (scaled_features[5] <= -0.15363281965255737f) {
                                                                                    return 2;
                                                                                } else {
                                                                                    return 1;
                                                                                }
                                                                            }
                                                                        } else {
                                                                            return 0;
                                                                        }
                                                                    } else {
                                                                        return 0;
                                                                    }
                                                                } else {
                                                                    return 0;
                                                                }
                                                            }
                                                        } else {
                                                            return 0;
                                                        }
                                                    }
                                                } else {
                                                    if (scaled_features[1] <= -0.6105706095695496f) {
                                                        if (scaled_features[5] <= -0.19466980546712875f) {
                                                            if (scaled_features[5] <= -0.4728713482618332f) {
                                                                return 2;
                                                            } else {
                                                                return 1;
                                                            }
                                                        } else {
                                                            if (scaled_features[3] <= 0.18073488771915436f) {
                                                                if (scaled_features[4] <= -0.06304529309272766f) {
                                                                    if (scaled_features[3] <= 0.15921694040298462f) {
                                                                        if (scaled_features[1] <= -0.6703799962997437f) {
                                                                            return 1;
                                                                        } else {
                                                                            return 0;
                                                                        }
                                                                    } else {
                                                                        return 0;
                                                                    }
                                                                } else {
                                                                    if (scaled_features[4] <= 0.04355487413704395f) {
                                                                        if (scaled_features[1] <= -0.6676796674728394f) {
                                                                            if (scaled_features[2] <= 0.2211465984582901f) {
                                                                                return 0;
                                                                            } else {
                                                                                if (scaled_features[0] <= -0.08355867490172386f) {
                                                                                    return 0;
                                                                                } else {
                                                                                    return 1;
                                                                                }
                                                                            }
                                                                        } else {
                                                                            return 1;
                                                                        }
                                                                    } else {
                                                                        return 0;
                                                                    }
                                                                }
                                                            } else {
                                                                return 1;
                                                            }
                                                        }
                                                    } else {
                                                        if (scaled_features[4] <= -0.21770811080932617f) {
                                                            return 1;
                                                        } else {
                                                            if (scaled_features[5] <= -0.26091137528419495f) {
                                                                if (scaled_features[0] <= -0.5873711481690407f) {
                                                                    return 0;
                                                                } else {
                                                                    if (scaled_features[0] <= 1.2537493854761124f) {
                                                                        if (scaled_features[1] <= 0.36218803375959396f) {
                                                                            return 1;
                                                                        } else {
                                                                            return 2;
                                                                        }
                                                                    } else {
                                                                        return 3;
                                                                    }
                                                                }
                                                            } else {
                                                                if (scaled_features[0] <= 0.5099949240684509f) {
                                                                    if (scaled_features[5] <= -0.1336274966597557f) {
                                                                        if (scaled_features[0] <= 0.11770055629312992f) {
                                                                            if (scaled_features[5] <= -0.17409095168113708f) {
                                                                                if (scaled_features[4] <= 0.1344221532344818f) {
                                                                                    return 0;
                                                                                } else {
                                                                                    return 0;
                                                                                }
                                                                            } else {
                                                                                if (scaled_features[2] <= 0.3224181905388832f) {
                                                                                    return 0;
                                                                                } else {
                                                                                    return 1;
                                                                                }
                                                                            }
                                                                        } else {
                                                                            return 0;
                                                                        }
                                                                    } else {
                                                                        if (scaled_features[0] <= -0.6905187666416168f) {
                                                                            if (scaled_features[5] <= 0.1075042262673378f) {
                                                                                if (scaled_features[4] <= 0.19408228993415833f) {
                                                                                    return 0;
                                                                                } else {
                                                                                    return 1;
                                                                                }
                                                                            } else {
                                                                                if (scaled_features[2] <= 0.22405803203582764f) {
                                                                                    return 1;
                                                                                } else {
                                                                                    return 0;
                                                                                }
                                                                            }
                                                                        } else {
                                                                            if (scaled_features[3] <= 0.21570782363414764f) {
                                                                                if (scaled_features[2] <= 0.3441880792379379f) {
                                                                                    return 0;
                                                                                } else {
                                                                                    return 0;
                                                                                }
                                                                            } else {
                                                                                if (scaled_features[2] <= 0.29639461264014244f) {
                                                                                    return 0;
                                                                                } else {
                                                                                    return 1;
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                } else {
                                                                    if (scaled_features[1] <= -0.13700192421674728f) {
                                                                        if (scaled_features[0] <= 0.6568553149700165f) {
                                                                            if (scaled_features[2] <= 0.39766038954257965f) {
                                                                                return 1;
                                                                            } else {
                                                                                if (scaled_features[2] <= 0.49122990667819977f) {
                                                                                    return 0;
                                                                                } else {
                                                                                    return 2;
                                                                                }
                                                                            }
                                                                        } else {
                                                                            if (scaled_features[1] <= -0.14940406382083893f) {
                                                                                return 0;
                                                                            } else {
                                                                                return 2;
                                                                            }
                                                                        }
                                                                    } else {
                                                                        if (scaled_features[0] <= 0.5299895703792572f) {
                                                                            return 1;
                                                                        } else {
                                                                            if (scaled_features[3] <= 0.13429855182766914f) {
                                                                                return 0;
                                                                            } else {
                                                                                return 1;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (scaled_features[0] <= 0.07512371800839901f) {
                                                    if (scaled_features[3] <= 0.11440059170126915f) {
                                                        if (scaled_features[4] <= -0.38892462849617004f) {
                                                            if (scaled_features[5] <= 0.07563991099596024f) {
                                                                return 2;
                                                            } else {
                                                                return 3;
                                                            }
                                                        } else {
                                                            if (scaled_features[5] <= -0.3752155154943466f) {
                                                                return 2;
                                                            } else {
                                                                if (scaled_features[3] <= -0.02129035908728838f) {
                                                                    if (scaled_features[0] <= 0.017220369540154934f) {
                                                                        return 0;
                                                                    } else {
                                                                        return 1;
                                                                    }
                                                                } else {
                                                                    if (scaled_features[5] <= -0.09013309329748154f) {
                                                                        return 1;
                                                                    } else {
                                                                        return 0;
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    } else {
                                                        if (scaled_features[1] <= 0.7979849576950073f) {
                                                            return 1;
                                                        } else {
                                                            return 0;
                                                        }
                                                    }
                                                } else {
                                                    if (scaled_features[5] <= -0.1803268864750862f) {
                                                        return 2;
                                                    } else {
                                                        if (scaled_features[0] <= 0.22770100831985474f) {
                                                            if (scaled_features[4] <= -0.10323960706591606f) {
                                                                if (scaled_features[2] <= 0.2480197735130787f) {
                                                                    return 1;
                                                                } else {
                                                                    return 2;
                                                                }
                                                            } else {
                                                                return 0;
                                                            }
                                                        } else {
                                                            return 0;
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            if (scaled_features[5] <= 0.38792096078395844f) {
                                                if (scaled_features[2] <= -0.1205672062933445f) {
                                                    if (scaled_features[5] <= 0.1932101547718048f) {
                                                        if (scaled_features[3] <= 0.156722791492939f) {
                                                            return 2;
                                                        } else {
                                                            return 1;
                                                        }
                                                    } else {
                                                        if (scaled_features[4] <= -0.3040752559900284f) {
                                                            if (scaled_features[0] <= 0.28295939415693283f) {
                                                                if (scaled_features[0] <= -0.7628478482365608f) {
                                                                    return 2;
                                                                } else {
                                                                    return 1;
                                                                }
                                                            } else {
                                                                return 2;
                                                            }
                                                        } else {
                                                            if (scaled_features[5] <= 0.258975014090538f) {
                                                                return 1;
                                                            } else {
                                                                if (scaled_features[4] <= 0.08115358650684357f) {
                                                                    if (scaled_features[4] <= -0.07712061703205109f) {
                                                                        return 1;
                                                                    } else {
                                                                        return 2;
                                                                    }
                                                                } else {
                                                                    return 1;
                                                                }
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    if (scaled_features[4] <= -0.0026754627469927073f) {
                                                        if (scaled_features[3] <= -0.06631780788302422f) {
                                                            if (scaled_features[2] <= 0.15441763401031494f) {
                                                                return 2;
                                                            } else {
                                                                return 1;
                                                            }
                                                        } else {
                                                            return 1;
                                                        }
                                                    } else {
                                                        if (scaled_features[0] <= 0.09140806226059794f) {
                                                            if (scaled_features[0] <= -0.23250284418463707f) {
                                                                if (scaled_features[4] <= 0.03384896204806864f) {
                                                                    return 0;
                                                                } else {
                                                                    return 1;
                                                                }
                                                            } else {
                                                                return 0;
                                                            }
                                                        } else {
                                                            return 1;
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (scaled_features[4] <= -0.7772932648658752f) {
                                                    return 3;
                                                } else {
                                                    return 2;
                                                }
                                            }
                                        }
                                    } else {
                                        if (scaled_features[4] <= -0.216932974755764f) {
                                            if (scaled_features[1] <= -1.0007035732269287f) {
                                                return 3;
                                            } else {
                                                if (scaled_features[3] <= 0.21994615346193314f) {
                                                    if (scaled_features[3] <= -0.04427610617130995f) {
                                                        return 2;
                                                    } else {
                                                        if (scaled_features[2] <= 0.7390696406364441f) {
                                                            return 0;
                                                        } else {
                                                            return 1;
                                                        }
                                                    }
                                                } else {
                                                    return 2;
                                                }
                                            }
                                        } else {
                                            if (scaled_features[4] <= 0.1739710122346878f) {
                                                if (scaled_features[4] <= 0.1565542295575142f) {
                                                    if (scaled_features[0] <= 0.5372638702392578f) {
                                                        if (scaled_features[1] <= -0.6798824071884155f) {
                                                            return 0;
                                                        } else {
                                                            if (scaled_features[3] <= 0.1264100968837738f) {
                                                                if (scaled_features[1] <= -0.44339336454868317f) {
                                                                    if (scaled_features[4] <= 0.14561060070991516f) {
                                                                        if (scaled_features[0] <= -0.1990855224430561f) {
                                                                            if (scaled_features[2] <= 1.1694661378860474f) {
                                                                                return 2;
                                                                            } else {
                                                                                return 0;
                                                                            }
                                                                        } else {
                                                                            return 1;
                                                                        }
                                                                    } else {
                                                                        return 0;
                                                                    }
                                                                } else {
                                                                    if (scaled_features[2] <= 1.3082433342933655f) {
                                                                        if (scaled_features[1] <= 0.29712165892124176f) {
                                                                            if (scaled_features[5] <= -0.16670266538858414f) {
                                                                                if (scaled_features[2] <= 0.7966051399707794f) {
                                                                                    return 0;
                                                                                } else {
                                                                                    return 1;
                                                                                }
                                                                            } else {
                                                                                if (scaled_features[4] <= 0.14198677241802216f) {
                                                                                    return 0;
                                                                                } else {
                                                                                    return 1;
                                                                                }
                                                                            }
                                                                        } else {
                                                                            if (scaled_features[3] <= 0.031018431298434734f) {
                                                                                if (scaled_features[3] <= 0.014681363943964243f) {
                                                                                    return 0;
                                                                                } else {
                                                                                    return 1;
                                                                                }
                                                                            } else {
                                                                                if (scaled_features[1] <= 0.5942879021167755f) {
                                                                                    return 0;
                                                                                } else {
                                                                                    return 1;
                                                                                }
                                                                            }
                                                                        }
                                                                    } else {
                                                                        if (scaled_features[4] <= -0.03871459141373634f) {
                                                                            if (scaled_features[2] <= 1.7608983516693115f) {
                                                                                return 0;
                                                                            } else {
                                                                                return 1;
                                                                            }
                                                                        } else {
                                                                            return 0;
                                                                        }
                                                                    }
                                                                }
                                                            } else {
                                                                if (scaled_features[2] <= 1.5810935497283936f) {
                                                                    if (scaled_features[5] <= 0.09340978041291237f) {
                                                                        if (scaled_features[2] <= 1.0270920991897583f) {
                                                                            if (scaled_features[5] <= -0.1592686027288437f) {
                                                                                return 1;
                                                                            } else {
                                                                                if (scaled_features[4] <= 0.030118010006844997f) {
                                                                                    return 0;
                                                                                } else {
                                                                                    return 1;
                                                                                }
                                                                            }
                                                                        } else {
                                                                            if (scaled_features[4] <= 0.006935172714293003f) {
                                                                                if (scaled_features[3] <= 0.17998387664556503f) {
                                                                                    return 1;
                                                                                } else {
                                                                                    return 0;
                                                                                }
                                                                            } else {
                                                                                return 1;
                                                                            }
                                                                        }
                                                                    } else {
                                                                        return 1;
                                                                    }
                                                                } else {
                                                                    return 0;
                                                                }
                                                            }
                                                        }
                                                    } else {
                                                        if (scaled_features[3] <= 0.1533953994512558f) {
                                                            if (scaled_features[0] <= 0.7133368253707886f) {
                                                                if (scaled_features[1] <= -0.2675561420619488f) {
                                                                    return 1;
                                                                } else {
                                                                    if (scaled_features[3] <= -0.027204857382457703f) {
                                                                        return 0;
                                                                    } else {
                                                                        return 1;
                                                                    }
                                                                }
                                                            } else {
                                                                if (scaled_features[3] <= 0.11536727473139763f) {
                                                                    if (scaled_features[2] <= 1.2955045104026794f) {
                                                                        return 0;
                                                                    } else {
                                                                        return 1;
                                                                    }
                                                                } else {
                                                                    if (scaled_features[3] <= 0.14478687942028046f) {
                                                                        return 2;
                                                                    } else {
                                                                        return 1;
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            return 0;
                                                        }
                                                    }
                                                } else {
                                                    return 0;
                                                }
                                            } else {
                                                if (scaled_features[4] <= 0.2160198837518692f) {
                                                    return 1;
                                                } else {
                                                    if (scaled_features[3] <= -0.03551664017140865f) {
                                                        return 0;
                                                    } else {
                                                        if (scaled_features[2] <= 0.8770847916603088f) {
                                                            return 1;
                                                        } else {
                                                            if (scaled_features[0] <= 0.11161282658576965f) {
                                                                return 0;
                                                            } else {
                                                                return 1;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                if (scaled_features[4] <= -0.2623436748981476f) {
                                    if (scaled_features[4] <= -0.9225724935531616f) {
                                        return 3;
                                    } else {
                                        if (scaled_features[3] <= 0.2746756821870804f) {
                                            if (scaled_features[1] <= 0.6282791048288345f) {
                                                return 1;
                                            } else {
                                                return 2;
                                            }
                                        } else {
                                            if (scaled_features[2] <= 0.9758118391036987f) {
                                                if (scaled_features[5] <= 0.10222609713673592f) {
                                                    return 2;
                                                } else {
                                                    if (scaled_features[4] <= -0.3871019184589386f) {
                                                        return 2;
                                                    } else {
                                                        return 1;
                                                    }
                                                }
                                            } else {
                                                if (scaled_features[3] <= 0.3327065706253052f) {
                                                    return 1;
                                                } else {
                                                    return 3;
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    if (scaled_features[5] <= 0.40143150091171265f) {
                                        if (scaled_features[1] <= -2.1291050910949707f) {
                                            return 3;
                                        } else {
                                            if (scaled_features[3] <= 0.4999590069055557f) {
                                                if (scaled_features[1] <= -0.43079741299152374f) {
                                                    if (scaled_features[0] <= 0.008873330923961475f) {
                                                        if (scaled_features[5] <= 0.04976138286292553f) {
                                                            return 0;
                                                        } else {
                                                            return 1;
                                                        }
                                                    } else {
                                                        return 1;
                                                    }
                                                } else {
                                                    if (scaled_features[3] <= 0.24922610819339752f) {
                                                        if (scaled_features[3] <= 0.23881466686725616f) {
                                                            return 1;
                                                        } else {
                                                            if (scaled_features[2] <= -0.08288191631436348f) {
                                                                return 1;
                                                            } else {
                                                                if (scaled_features[5] <= 0.10157663375139236f) {
                                                                    return 0;
                                                                } else {
                                                                    return 2;
                                                                }
                                                            }
                                                        }
                                                    } else {
                                                        if (scaled_features[3] <= 0.3342525064945221f) {
                                                            if (scaled_features[5] <= -0.1835455521941185f) {
                                                                if (scaled_features[0] <= -0.11189260706305504f) {
                                                                    return 1;
                                                                } else {
                                                                    if (scaled_features[0] <= 0.3573687672615051f) {
                                                                        return 2;
                                                                    } else {
                                                                        return 1;
                                                                    }
                                                                }
                                                            } else {
                                                                if (scaled_features[5] <= -0.06491801142692566f) {
                                                                    return 1;
                                                                } else {
                                                                    if (scaled_features[2] <= 0.8986808657646179f) {
                                                                        if (scaled_features[2] <= -0.31854085624217987f) {
                                                                            return 0;
                                                                        } else {
                                                                            if (scaled_features[5] <= -0.04494392313063145f) {
                                                                                return 2;
                                                                            } else {
                                                                                if (scaled_features[2] <= 0.1158960722386837f) {
                                                                                    return 1;
                                                                                } else {
                                                                                    return 1;
                                                                                }
                                                                            }
                                                                        }
                                                                    } else {
                                                                        if (scaled_features[4] <= 0.046133194875437766f) {
                                                                            return 0;
                                                                        } else {
                                                                            if (scaled_features[5] <= -0.025456801056861877f) {
                                                                                return 0;
                                                                            } else {
                                                                                return 1;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            if (scaled_features[0] <= 0.1655714139342308f) {
                                                                if (scaled_features[5] <= -0.269288569688797f) {
                                                                    if (scaled_features[4] <= 0.008258210611529648f) {
                                                                        return 1;
                                                                    } else {
                                                                        return 2;
                                                                    }
                                                                } else {
                                                                    if (scaled_features[0] <= -0.6098599433898926f) {
                                                                        if (scaled_features[0] <= -0.6668317317962646f) {
                                                                            return 1;
                                                                        } else {
                                                                            return 2;
                                                                        }
                                                                    } else {
                                                                        return 1;
                                                                    }
                                                                }
                                                            } else {
                                                                if (scaled_features[2] <= 0.47400784492492676f) {
                                                                    return 1;
                                                                } else {
                                                                    if (scaled_features[3] <= 0.36315983533859253f) {
                                                                        return 1;
                                                                    } else {
                                                                        return 2;
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            } else {
                                                return 2;
                                            }
                                        }
                                    } else {
                                        if (scaled_features[3] <= 0.3602556437253952f) {
                                            return 3;
                                        } else {
                                            return 2;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (scaled_features[5] <= 0.19222392141819f) {
                                if (scaled_features[4] <= 0.412182554602623f) {
                                    if (scaled_features[0] <= 0.8052566051483154f) {
                                        if (scaled_features[5] <= -0.3959515243768692f) {
                                            if (scaled_features[0] <= 0.6274169683456421f) {
                                                return 2;
                                            } else {
                                                return 3;
                                            }
                                        } else {
                                            if (scaled_features[4] <= 0.3678065091371536f) {
                                                if (scaled_features[3] <= 0.37978269159793854f) {
                                                    if (scaled_features[5] <= -0.27115318179130554f) {
                                                        if (scaled_features[0] <= -0.7743523120880127f) {
                                                            return 2;
                                                        } else {
                                                            return 1;
                                                        }
                                                    } else {
                                                        return 1;
                                                    }
                                                } else {
                                                    if (scaled_features[2] <= 0.34148024022579193f) {
                                                        return 1;
                                                    } else {
                                                        return 2;
                                                    }
                                                }
                                            } else {
                                                if (scaled_features[0] <= 0.16462229937314987f) {
                                                    return 2;
                                                } else {
                                                    return 1;
                                                }
                                            }
                                        }
                                    } else {
                                        if (scaled_features[1] <= 0.7060595154762268f) {
                                            if (scaled_features[3] <= 0.4044850021600723f) {
                                                return 2;
                                            } else {
                                                return 1;
                                            }
                                        } else {
                                            return 1;
                                        }
                                    }
                                } else {
                                    if (scaled_features[5] <= -1.0598179996013641f) {
                                        return 3;
                                    } else {
                                        if (scaled_features[4] <= 1.369458794593811f) {
                                            if (scaled_features[5] <= 0.12773242965340614f) {
                                                return 2;
                                            } else {
                                                if (scaled_features[4] <= 0.5265249907970428f) {
                                                    return 1;
                                                } else {
                                                    return 2;
                                                }
                                            }
                                        } else {
                                            return 3;
                                        }
                                    }
                                }
                            } else {
                                if (scaled_features[4] <= 0.720133900642395f) {
                                    if (scaled_features[5] <= 0.8751102387905121f) {
                                        if (scaled_features[4] <= 0.42869140207767487f) {
                                            if (scaled_features[0] <= -0.25931190699338913f) {
                                                return 2;
                                            } else {
                                                return 1;
                                            }
                                        } else {
                                            return 2;
                                        }
                                    } else {
                                        return 3;
                                    }
                                } else {
                                    return 3;
                                }
                            }
                        }
                    }
                } else {
                    if (scaled_features[2] <= 0.09092903509736061f) {
                        if (scaled_features[4] <= 1.7595071122050285f) {
                            return 2;
                        } else {
                            return 3;
                        }
                    } else {
                        if (scaled_features[0] <= -0.40958088636398315f) {
                            if (scaled_features[1] <= 1.8339200019836426f) {
                                if (scaled_features[1] <= 1.7726159691810608f) {
                                    return 3;
                                } else {
                                    return 1;
                                }
                            } else {
                                return 3;
                            }
                        } else {
                            return 3;
                        }
                    }
                }
            }
        } else {
            if (scaled_features[5] <= 0.30616140365600586f) {
                return 3;
            } else {
                if (scaled_features[5] <= 0.3842681497335434f) {
                    return 2;
                } else {
                    return 3;
                }
            }
        }
    }
}


int get_final_prediction(float* features) {
    int votes[4] = {0, 0, 0, 0};  

    // Get predictions from each tree
    votes[predict_tree_0(features)]++;
    votes[predict_tree_1(features)]++;
    votes[predict_tree_2(features)]++;
    votes[predict_tree_3(features)]++;
    votes[predict_tree_4(features)]++;

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

#endif // DECISION_TREES_H
