#include <SoftwareSerial.h>
#define B_TX 2 
#define B_RX 3

SoftwareSerial BT(B_TX, B_RX); 

void setup() {
  Serial.begin(9600);
  Serial.println("ENTER AT Commands:");
  BT.begin(9600);
  //Serial.println("Serial, Bluetooth on");
}

void loop() {
  if(BT.available()){
    Serial.write(BT.read());
    }
  if(Serial.available()){
    BT.write(Serial.read());
    }

}
