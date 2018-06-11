#include <Servo.h>

Servo servomotore;

void setup()
{
  pinMode(A5,INPUT);
  servomotore.attach(3);
  Serial.begin(9600);     // apre la porta seriale
}


void loop()
{
    servomotore.write(map(analogRead(A5),0,1023,0,180));
    delay(10);

    Serial.print("Valore potenziometro"); // scrivo il valore della lettura del potenziometro
    Serial.println(analogRead(A5));
}
