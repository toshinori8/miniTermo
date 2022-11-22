#include <DHT.h>
#include <DHT_U.h>

#include "functions.h"
#include "main.h"
#include "esp.h"


void termostatRules() {

  if (setTemp <= temp) {
    Serial.println("termostatRules FAN ON");
    digitalWrite(FANPIN, LOW);
    fan = "checked";
    delay(30000);
    

  } else {
    Serial.println("termostatRules FAN OFF");
    digitalWrite(FANPIN, HIGH);
    fan = "unchecked";
  }
};

void setFan() {
};

void readDHT() {
  Serial.println("readDHT");
  temp = dht.readTemperature();
  humi = dht.readHumidity();
}

void updateESP(){
  updateData(temp,humi);
}
