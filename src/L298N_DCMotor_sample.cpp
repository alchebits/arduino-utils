// #include <Arduino.h>
//
// void setup()
// {
//   //---------------------------------------------- Set PWM frequency for D5 & D6 -------------------------------
//   // TCCR0B = TCCR0B & B11111000 | B00000010;    // set timer 0 divisor to     8 for PWM frequency of  7812.50 Hz
//
//   //---------------------------------------------- Set PWM frequency for D9 & D10 ------------------------------
//
//   //TCCR1B = TCCR1B & B11111000 | B00000001;    // set timer 1 divisor to     1 for PWM frequency of 31372.55 Hz
//   //TCCR1B = TCCR1B & B11111000 | B00000010;    // set timer 1 divisor to     8 for PWM frequency of  3921.16 Hz
//   //TCCR1B = TCCR1B & B11111000 | B00000011;    // set timer 1 divisor to    64 for PWM frequency of   490.20 Hz (The DEFAULT)
//   //TCCR1B = TCCR1B & B11111000 | B00000100;    // set timer 1 divisor to   256 for PWM frequency of   122.55 Hz
//   //TCCR1B = TCCR1B & B11111000 | B00000101;    // set timer 1 divisor to  1024 for PWM frequency of    30.64 Hz
//
//   pinMode(7, OUTPUT);
//   pinMode(8, OUTPUT);
//   pinMode(9, OUTPUT);
// }
//
// void loop()
// {
//   digitalWrite(7, LOW);
//   digitalWrite(8, HIGH);
//
//   analogWrite(9, 150);
//   delay(2000);
//
//   digitalWrite(8, LOW);
//   digitalWrite(7, HIGH);
//   analogWrite(9, 255);
//   delay(2000);
// }
