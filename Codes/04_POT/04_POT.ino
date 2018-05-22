/***   Global variables   ***/

/***   Function declaration   ***/

void setup()
{
  pinMode(13,OUTPUT);
  pinMode(5,INPUT);
}


void loop()
{
    digitalWrite(13,HIGH);
    delay(analogRead(5));
    digitalWrite(13,LOW);
    delay(analogRead(5));
}

/***   Function definition   ***/
