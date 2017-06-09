#include <Arduino.h>
#include <SoftwareSerial.h>

int tID;
int rID;
char transBuffer[128];
char recBuffer[128];

SoftwareSerial mySerial(10, 11); // RX, TX

void setup()
{
  Serial.begin(9600);
  mySerial.begin(9600);
}

void loop()
{
  if(Serial.available())
  {
      tID = 0;
      while(Serial.available())
      {
        transBuffer[tID++] = Serial.read();
      }
      transBuffer[tID] = '\0';
      mySerial.println(transBuffer);
      Serial.println(transBuffer);
  }

  if(mySerial.available())
  {
    rID = 0;
    while(mySerial.available())
    {
      recBuffer[rID++] = mySerial.read();
    }
    Serial.println(recBuffer);
  }

  mySerial.println("odpowiadam");

  delay(300);
}
