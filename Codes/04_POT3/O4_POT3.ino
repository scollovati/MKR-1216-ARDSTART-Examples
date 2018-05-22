/***   Global variables   ***/
int pot=0;
int luce=0;

/***   Function declaration   ***/

void setup()
{
  pinMode(5,INPUT);
  pinMode(11,OUTPUT);
}


void loop()
{
    pot=analogRead(5);
    luce=map(pot,0,1023,0,255);
    analogWrite(11,luce);
}

/***   Function definition   ***/
