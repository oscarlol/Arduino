/*********************************************************************
 * *                                                                **
 * *                            Titol:                              **
 * *                        nom del programa                        **
 * *                                                                **
 * *  Nom:Oscar Pradas                             Data:xx/xx/2021  **
 * ******************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
int a = 3;
int b = 2;
float d;

//********** Setup ****************************************************************
void setup()               // run once, when the sketch starts
{
  Serial.begin(9600);      // set up Serial library at 9600 bps

    Serial.println("Here is division: ");
  
    Serial.print("a = ");
    Serial.println(a);
    Serial.print("b = ");
    Serial.println(b);
    d = b;
    d = a / d;
   
    Serial.print("a / b = ");
    Serial.println(d);
}

//********** Loop *****************************************************************
void loop()    // we need this to be here even though its empty
{
}

//********** Funcions *************************************************************
