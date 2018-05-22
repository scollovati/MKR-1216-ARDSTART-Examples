/***   Global variables   ***/

/***   Function declaration   ***/

void setup()
{
  pinMode(2,INPUT);
  pinMode(13,OUTPUT);
}


void loop()
{
    if (digitalRead(2) == HIGH) {
      digitalWrite(13,HIGH);
     }else {
      digitalWrite(13,LOW);
     }
}

/***   Function definition   ***/
