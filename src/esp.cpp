#include <Arduino.h>
#include "esp.h"
// dc:4f:22:58:68:bc
uint8_t remoteMac[] = {0xDC, 0x4F, 0x22, 0x58, 0x68, 0xBC};
#define WIFI_CHANNEL 3
struct __attribute__((packed)) dataStruct
{

  /// Sensors DATA 
  
  String name;
  int temp;
  int humidity;
  long lastSeen;
  String macAddr;
  int battery;

} sensorData;


// FUNCTION TO UPDATE ESP-NOW STRUCT 
void updateData(int temp, int humidity)
{
 
  // CAR STERING DATA
  sensorData.name = "Termostat Kominek";
  sensorData.temp = 31;
  sensorData.humidity =60;
  sensorData.lastSeen = 1200;
  sensorData.macAddr = "2F:4D:2C:7A:2D";
  sensorData.battery = 65;
  
  uint8_t bs[sizeof(sensorData)];
  memcpy(bs, &sensorData, sizeof(sensorData));
  /// SEND DATA 
  esp_now_send(remoteMac, bs, sizeof(sensorData)); // NULL means send to all peer
  //Serial.println("SENDING DATA");
}