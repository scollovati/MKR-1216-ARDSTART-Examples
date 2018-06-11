#include <Servo.h>

Servo servomotore;

/***   Global variables   ***/
int On=0;

/***   Function declaration   ***/

void setup()
{
  servomotore.attach(3);
  pinMode(2,OUTPUT);
  servomotore.write(90);
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
      servomotore.write(0);
      delay(500);
      if (digitalRead(7) == HIGH) {
        On=1 - On;
       }
      servomotore.write(90);
      delay(500);
     }
}
