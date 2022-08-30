#include "LightSensor.h"
#include "UltrasonicSensor.h"
void runAutonomous() {
  checkLightSensor();
  seekOpponent(20,100);
  forward();
  
}

void setDirection(char d){
  switch(d)
  {
    case 'f':
      forward();
      break;
    case 'b':
      backward();
      break;
    case 'l':
      turnLeft();
      break;
    case 'r':
      turnRight();
      break;
    case 'c':
      coast();
      break;
    case 's':
      brake();
      break;
    case 'a':
      runAutonomous();
      break;
    default:
      //runAutonomous();
      break;
  }
}
