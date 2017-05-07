// #include <Arduino.h>
// #include "SPI.h"
// #include "I2Cdev.h"
// #include "MPU6050.h"
// #include <LiquidCrystal_I2C.h>
//
// LiquidCrystal_I2C lcd(0x3F, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);  // Ustawienie adresu ukladu na 0x3F
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
//
//   lcd.begin(16,2);   // Inicjalizacja LCD 2x16
//   lcd.backlight(); // zalaczenie podwietlenia
// }
//
// void loop()
// {
//
//   accelgyro.getMotion6(&ax, &ay, &az, &gx, &gy, &gz);
//
//   if(ax < 0)
//   {
//     digitalWrite(7, LOW);
//     digitalWrite(8, HIGH);
//   }
//   else
//   {
//     digitalWrite(8, LOW);
//     digitalWrite(7, HIGH);
//   }
//
//   analogWrite(9, abs(ax/(16384.0f/10.0f))*255.0f);
//
//   lcd.setCursor(0,0);
//   lcd.print((ax/16384.0f)*100.0f);   lcd.print("%");
//
//   delay(200);
// }
