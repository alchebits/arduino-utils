// // /*
// // *  LCM1602 & Arduino Uno
// // *  VCC - > 5 V
// // *  GND - GND
// // *  SCL -> A5
// // *  SDA -> A4
// // */
//
// #include "Arduino.h"
// #include "SPI.h"
// #include "I2Cdev.h"
// #include "MPU6050.h"
// #include <LiquidCrystal_I2C.h>
//
// MPU6050 accelgyro;
// LiquidCrystal_I2C lcd(0x3F, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);  // Ustawienie adresu ukladu na 0x3F
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
//
//     lcd.begin(16,2);   // Inicjalizacja LCD 2x16
//     lcd.backlight(); // zalaczenie podwietlenia
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
//
//     lcd.setCursor(0,0);
//     lcd.print(ax/16384.0f);   lcd.print(", ");
//     lcd.print(ay/16384.0f);   lcd.print(", ");
//     lcd.print(az/16384.0f);   lcd.print(", ");
//
//     lcd.setCursor(0,1);
//
//     lcd.print(gx/131.072);   lcd.print(", ");
//     lcd.print(gy/131.072);   lcd.print(", ");
//     lcd.print(gz/131.072);   lcd.print(", ");
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
//     delay(500);
//
//     blinkState = !blinkState;
//     digitalWrite(LED_PIN, blinkState);
// }
