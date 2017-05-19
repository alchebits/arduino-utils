// #include <Arduino.h>
// #define TRIG 2
// #define ECHO 3
//
// void setup() {
//   pinMode(TRIG,OUTPUT);
//   pinMode(ECHO,INPUT);
//   Serial.begin(9600);
// }
//
// float pomiar(){
// unsigned long czas;
//   digitalWrite(TRIG,HIGH);
//   delayMicroseconds(10);
//   digitalWrite(TRIG,LOW);
//   czas = pulseIn(ECHO,HIGH);
//   return czas / 58.00;
// }
//
// void loop() {
//   Serial.print("Odleglosc: ");
//   Serial.print(pomiar());
//   Serial.println("cm");
//   delay(500);
// }
