/***   Global variables   ***/

/***   Function declaration   ***/

void setup()
{
  pinMode(13,OUTPUT);
  pinMode(A5,INPUT);
}


void loop()
{
    digitalWrite(13,HIGH);
    delay(analogRead(A5));
    digitalWrite(13,LOW);
    delay(analogRead(A5));
}

/***   Function definition   ***/
