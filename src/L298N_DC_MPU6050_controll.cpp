// #include <Arduino.h>
// #include "SPI.h"
// #include "I2Cdev.h"
// #include "MPU6050.h"
//
// MPU6050 accelgyro;
// int16_t ax, ay, az;
// int16_t gx, gy, gz;
//
// void setup()
// {
//   pinMode(7, OUTPUT);
//   pinMode(8, OUTPUT);
//   pinMode(9, OUTPUT);
//
//   Wire.begin();
//   Serial.begin(9600);
//   accelgyro.initialize();
// }
//
// void loop()
// {
//
//   accelgyro.getMotion6(&ax, &ay, &az, &gx, &gy, &gz);
//
//   if(ay < 0)
//   {
//     digitalWrite(3, LOW);
//     digitalWrite(4, HIGH);
//     digitalWrite(5, LOW);
//     digitalWrite(6, HIGH);
//   }
//   else
//   {
//     digitalWrite(4, LOW);
//     digitalWrite(3, HIGH);
//     digitalWrite(6, LOW);
//     digitalWrite(5, HIGH);
//   }
//
//   //analogWrite(9, abs(ax/(16384.0f/10.0f))*255.0f);
//
//   delay(50);
// }
