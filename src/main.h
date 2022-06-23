#include <Arduino.h>




extern DHT dht;

extern int temp, humi;
extern String fan;

#define DHTTYPE DHT11
#define DHTPIN 2
#define FANPIN 0

extern int setTemp;
extern int tempMin;
extern int tempMax;


