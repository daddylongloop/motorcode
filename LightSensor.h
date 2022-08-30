byte leftLight     =A0;
byte rightLight    =A1;
int leftThreshold  =100;
int rightThreshold =100;

bool checkSensor(int sensorPin, int threshold){
  int sensorValue=analogRead(sensorPin);
  if(sensorValue>threshold) return true;
  return false;
}

void checkLightSensor(){ 
  if( checkSensor(leftLight, leftThreshold) )
  {
    turnRight();
  }
  if( checkSensor(rightLight, rightThreshold) )
  {
    turnLeft();
  }
}
