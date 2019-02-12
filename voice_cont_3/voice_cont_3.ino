#include <SoftwareSerial.h>
String value;
int TxD = 11;
int RxD = 10;
#define RELAY1  7     
#define RELAY2  8    
int servoposition;
SoftwareSerial bluetooth(TxD, RxD);

void setup() {
   pinMode(RELAY1, OUTPUT);   
  pinMode(RELAY2, OUTPUT); 
  Serial.begin(9600);       // start serial communication at 9600bps
  bluetooth.begin(9600);
}

void loop() {
  Serial.println(value);
 if (bluetooth.available())
   {
    value = bluetooth.readString();

    if (value == "all turn on"){
    digitalWrite(RELAY1, 0);
    digitalWrite(RELAY2, 0);  
      }
    if (value == "Sab on kar do"){
    digitalWrite(RELAY1, 0);
    digitalWrite(RELAY2, 0);  
      }
      if (value == "Sab on karo"){
    digitalWrite(RELAY1, 0);
    digitalWrite(RELAY2, 0);  
      }
////////////////////////////////////
    
    if (value == "all turn off"){
      digitalWrite(RELAY1, 1); 
      digitalWrite(RELAY2, 1);       
      }
    if (value == "Sab off kar do"){
      digitalWrite(RELAY1, 1); 
      digitalWrite(RELAY2, 1);       
      }
    if (value == "Sab of karo"){
      digitalWrite(RELAY1, 1); 
      digitalWrite(RELAY2, 1);       
      }
/////////////////////////////////////////
    
    if (value == "turn on Tubelight"){
    digitalWrite(RELAY1, 0); 
      }
    if (value == "light on kar do"){
    digitalWrite(RELAY1, 0); 
      }
    if (value == "light on karo"){
    digitalWrite(RELAY1, 0); 
      }
      
/////////////////////////////////////////
    if (value == "turn on fan"){
      digitalWrite(RELAY2, 0);       
      }
    if (value == "fan on kar do"){
      digitalWrite(RELAY2, 0);       
      }
    if (value == "fan on karo"){
      digitalWrite(RELAY2, 0);       
      }
/////////////////////////////////////////  
    if (value == "turn off tubelight"){
    digitalWrite(RELAY1, 1); 
      }
     if (value == "light off kar do"){
    digitalWrite(RELAY1, 1); 
      }
      if (value == "light off karo"){
    digitalWrite(RELAY1, 1); 
      }
/////////////////////////////////////////
    if (value == "turn off fan"){
      digitalWrite(RELAY2, 1);       
      }
    if (value == "fan off kar do"){
      digitalWrite(RELAY2, 1);       
      }
    if (value == "fan off karo"){
      digitalWrite(RELAY2, 1);       
      }
/////////////////////////////////////////
 }

}
