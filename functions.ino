void termostatRules(){
  
        if(setTemp<temp){

        Serial.println("termostatRules FAN ON");
          digitalWrite(FANPIN, HIGH);
          fan="checked";
          }else{

                    Serial.println("termostatRules FAN OFF");
                      digitalWrite(FANPIN, LOW);
            fan="unchecked";
            }
        
  
  
  }; 



void setFan(){


   
  
  
  
  }; 

  void readDHT(){

Serial.println("readDHT");
    
  //  temp = dht.readTemperature();
   temp=22;
    humi = dht.readHumidity();
    }
