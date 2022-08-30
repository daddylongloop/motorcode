#include "Motor.h"
#include "ControlSystem.h"


void setup() {
  for(int i=5; i<=12; i++){
    if(i != 7) {
      pinMode(i, OUTPUT);
    }
  }
  pinMode(13, INPUT);
  Serial.begin(9600);
  setSpeed(200);
}
void loop() {
    if(Serial.available() > 0)
    {
      char direction=Serial.read();
      setDirection(direction);
    }
}
