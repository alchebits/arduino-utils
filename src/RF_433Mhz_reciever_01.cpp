// #include <Arduino.h>
// #include <VirtualWire.h>
// #include <Wire.h>
//
// #define RX_PIN 11
//
// void setup()
// {
//     Serial.begin(9600);
//     pinMode(RX_PIN, INPUT);
// 
//     vw_setup(2000);
//     vw_set_rx_pin(RX_PIN);
//     vw_rx_start();
//
//      vw_set_tx_pin(TX_PIN);
// }
//
// void loop()
// {
//     uint8_t buf[VW_MAX_MESSAGE_LEN];
//     uint8_t buflen = VW_MAX_MESSAGE_LEN;
//
//     if (vw_get_message(buf, &buflen))
//     {
// 	     int i;
//        String wiad;
//   	   for (i = 0; i < buflen; i++)
//        {
//          wiad +=char(buf[i]);
//        }
//        buf[i] = '\0';
//        Serial.println(wiad);
//     }
//
// }
