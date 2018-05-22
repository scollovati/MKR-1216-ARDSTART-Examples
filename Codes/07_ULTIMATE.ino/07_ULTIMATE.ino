#include <Servo.h>

Servo servos[13];

/***   Global variables   ***/
int On=0;

/***   Function declaration   ***/

void setup()
{
  servos[3].attach(3);


  pinMode(2,OUTPUT);

    servos[3].write(90);
  delay(100);
  digitalWrite(2,LOW);

  pinMode(7,INPUT);

}


void loop()
{
    if (digitalRead(7) == HIGH) {
      On=1 - On;
     }
    if (On == 1) {
      digitalWrite(2,HIGH);
     }else {
      digitalWrite(2,LOW);
     }
    if (On == 1) {
      delay(1000);
      servos[3].write(0);
      delay(500);
      if (digitalRead(7) == HIGH) {
        On=1 - On;
       }
      servos[3].write(90);
      delay(500);
     }

}

/***   Function definition   ***/
