#include <Arduino.h>

void setup() {
  pinMode(D2, INPUT); // Button 01 input
  pinMode(D3, OUTPUT); // 

}

void loop() {
  delay(1000);
  digitalWrite(D3,HIGH);
  delay(1000);
  digitalWrite(D3,LOW);
}