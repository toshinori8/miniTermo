void termostatRules() {

  if (setTemp <= temp) {

    Serial.println("termostatRules FAN ON");

    digitalWrite(FANPIN, LOW);
    fan = "checked";
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
  // temp=22;
  humi = dht.readHumidity();
}
