#include <DHT.h>
#include <DHT_U.h>

#include "functions.h"
#include "main.h"


void termostatRules() {


  if (setTemp <= temp) {

    Serial.println("termostatRules FAN ON");
      
    setDelay();
    digitalWrite(FANPIN, LOW);
    fan = "checked";


  } else if(fanDelayI==0) {


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
  // temp=22;
  humi = dht.readHumidity();
}
