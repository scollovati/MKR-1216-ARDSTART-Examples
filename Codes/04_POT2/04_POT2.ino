/***   Global variables   ***/
int pot=0;

/***   Function declaration   ***/

void setup()
{
  pinMode(13,OUTPUT);
  pinMode(5,INPUT);
}


void loop()
{
    pot=analogRead(5);
    digitalWrite(13,HIGH);
    delay(pot);
    digitalWrite(13,LOW);
    delay(pot);
}

/***   Function definition   ***/
