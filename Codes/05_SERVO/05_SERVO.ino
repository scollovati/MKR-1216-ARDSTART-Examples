#include <Servo.h>

Servo servomotore[13];

/***   Global variables   ***/

/***   Function declaration   ***/

void setup()
{
  pinMode(5,INPUT);
  servomotore[3].attach(3);
}


void loop()
{
    servomotore[3].write(map(analogRead(5),0,1023,0,180));
    delay(10);
}

/***   Function definition   ***/
