/***   Global variables   ***/

/***   Function declaration   ***/

void setup()
{
  pinMode(12,OUTPUT);
  pinMode(5,INPUT);
}


void loop()
{
    digitalWrite(12,HIGH);
    delay(analogRead(5));
    digitalWrite(12,LOW);
    delay(analogRead(5));
}

/***   Function definition   ***/
