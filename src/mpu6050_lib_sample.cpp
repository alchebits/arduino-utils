// #include "Arduino.h"
// #include "SPI.h"
// #include "I2Cdev.h"
// #include "MPU6050.h"
// MPU6050 accelgyro;
//
// int16_t ax, ay, az;
// int16_t gx, gy, gz;
// int8_t threshold, count;
// float temp;
// bool zero_detect;
// bool TurnOnZI = false;
//
// bool XnegMD, XposMD, YnegMD, YposMD, ZnegMD, ZposMD;
//
// #define LED_PIN 13
// bool blinkState = false;
//
// void setup() {
//
//     Wire.begin();
//     Serial.begin(9600);
//     accelgyro.initialize();
//     accelgyro.setAccelerometerPowerOnDelay(3);
//     accelgyro.setIntZeroMotionEnabled(TurnOnZI);
//     accelgyro.setDHPFMode(1);
//     accelgyro.setMotionDetectionThreshold(2);
//     accelgyro.setZeroMotionDetectionThreshold(2);
//     accelgyro.setMotionDetectionDuration(40);
//     accelgyro.setZeroMotionDetectionDuration(1);
//
//
//     pinMode(LED_PIN, OUTPUT);
// }
//
// void loop() {
//     accelgyro.getMotion6(&ax, &ay, &az, &gx, &gy, &gz);
//
//     XnegMD = accelgyro.getXNegMotionDetected();
//     XposMD = accelgyro.getXPosMotionDetected();
//     YnegMD = accelgyro.getYNegMotionDetected();
//     YposMD = accelgyro.getYPosMotionDetected();
//     ZnegMD = accelgyro.getZNegMotionDetected();
//     ZposMD = accelgyro.getZPosMotionDetected();
//
//     zero_detect = accelgyro.getIntMotionStatus();
//     threshold = accelgyro.getZeroMotionDetectionThreshold();
//     temp=(accelgyro.getTemperature()/340.)+36.53;
//
//     Serial.print(temp);Serial.print(",");
//     Serial.print(ax/16384.); Serial.print(",");
//     Serial.print(ay/16384.); Serial.print(",");
//     Serial.print(az/16384.); Serial.print(",");
//     Serial.print(gx/131.072); Serial.print(",");
//     Serial.print(gy/131.072); Serial.print(",");
//     Serial.print(gz/131.072); Serial.print(",");
//     Serial.print(zero_detect); Serial.print(",");
//     Serial.print(XnegMD); Serial.print(",");
//     Serial.println(XposMD);
//
//
//
//     delay(200);
//
//     blinkState = !blinkState;
//     digitalWrite(LED_PIN, blinkState);
// }
