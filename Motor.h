//left motor
int speedLeft = 5;
int posLeft = 8;
int negLeft = 9;
bool lPos = LOW;
bool lNeg = LOW;
//right motor
int speedRight = 6;
int posRight = 10;
int negRight = 11;
bool rPos = LOW;
bool rNeg = LOW;

int speed=0;
void drive(int duration){
    digitalWrite(posLeft, lPos);
    digitalWrite(negLeft, lNeg);
    digitalWrite(posRight, rPos);
    digitalWrite(negRight, rNeg);
    delay(duration);
}
void forward(){
    lPos = HIGH;
    lNeg = LOW;
    rPos = HIGH;
    rNeg = LOW;
    drive(1); 
    Serial.println("forward");
}
void backward(){
    lPos=LOW;
    lNeg=HIGH;
    rPos =LOW;
    rPos=HIGH;
    drive(1);
}
void turnRight(){
    lPos=HIGH;
    lNeg=LOW;
    rPos=LOW;
    rNeg=HIGH;
    drive(1);
    Serial.println("turnRight");
}
void turnLeft(){
    lPos=LOW;
    lNeg=HIGH;
    rPos=HIGH;
    rNeg=LOW;
    drive(1);
    Serial.println("turnLeft");
}
void coast(){
  lPos=LOW;
  lNeg=LOW;
  rPos=LOW;
  rNeg=LOW;
  drive(1);
  Serial.println("motors off");
}
void brake(){
  lPos=HIGH;
  lNeg=HIGH;
  rPos=HIGH;
  rNeg=HIGH;
  drive(1);
  Serial.println("brake");
}
void setSpeed(int s){ // just gonna add an argument
  speed=s; // wut is s????
  analogWrite(speedLeft,s);
  analogWrite(speedRight,s);
  Serial.print("speed = ");
  Serial.println(s);
}
