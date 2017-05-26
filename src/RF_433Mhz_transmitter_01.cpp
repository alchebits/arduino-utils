// #include <Arduino.h>
// #include <VirtualWire.h>
//
// #define TX_PIN 9
//
// void setup()
// {
//        vw_setup(2000);
//        vw_set_tx_pin(TX_PIN);
// }
//
// void loop()
// {
//     const char *msg = "ZASUBSKTRYBUJ ElektroMarasa";
//
//     digitalWrite(13, true);
//     vw_send((uint8_t *)msg, strlen(msg));
//     vw_wait_tx();
//     digitalWrite(13, false);
//     delay(100);
// }
