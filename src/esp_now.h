#include <Arduino.h>
#include <espnow.h>
#ifndef ESP_NOW_H
#define ESP_NOW_H


// remote mac 
extern uint8_t remoteMac[];




// FUNCTION TO UPDATE ESP-NOW STRUCT 
void updateData(int temp, int humidity);

#endif // ESP_NOW_H