// #include <Arduino.h>
//
// int sensorPin = A0;    // select the input pin for the potentiometer
// int ledPin = 13;      // select the pin for the LED
// int sensorValue = 0;  // variable to store the value coming from the sensor
//
// void setup() {
//   Serial.begin(9600);
//   pinMode(ledPin, OUTPUT);
// }
//
// void loop() {
//   // read the value from the sensor:
//   sensorValue = analogRead(sensorPin);
//   float voltage = (5.0f*sensorValue) / 1023.0f;
//   Serial.print(sensorValue);
//   Serial.print(" = ");
//   Serial.print(voltage);
//   Serial.println("V");
//
//   // turn the ledPin on
//   digitalWrite(ledPin, HIGH);
//   // stop the program for <sensorValue> milliseconds:
//   delay(sensorValue);
//   // turn the ledPin off:
//   digitalWrite(ledPin, LOW);
//   // stop the program for for <sensorValue> milliseconds:
//   delay(sensorValue);
// }
