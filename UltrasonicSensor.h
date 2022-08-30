int trig = 12;
int echo = 13;

int measureDistance(){
  int distance;
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
  
  long duration=pulseIn(echo, HIGH);
  
  distance = (duration / 2) /29.1;
  return distance;
}

void seekOpponent(int attackRange, int ringSize){
  int distance=measureDistance();
  if(distance<attackRange){
    setSpeed(255);
    forward();
  }
  else if (distance<ringSize){
    setSpeed(175);
    forward();
  }
}
