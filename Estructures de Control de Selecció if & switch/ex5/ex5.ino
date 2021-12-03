/*********************************************************************
 * *                                                                **
 * *                            Titol:                              **
 * *                        nom del programa                        **
 * *                                                                **
 * *  Nom:Oscar Pradas                             Data:xx/xx/2021  **
 * ******************************************************************/
//************************** INCLUDE *********************************



// ************************ VARIABLES ********************************
float KgCo2_m2 = 43.2;


//**************************** SETUP *********************************

void setup(){

Serial.begin(9600);
}

//*************************** LOOP ***********************************

void loop() {

if (KgCo2_m2 < 3.5)
{
  Serial.print("A");
  delay(1000);
  }
  else if (KgCo2_m2 < 6.5 && KgCo2_m2 >= 3.5)
  {
    Serial.print("B");
    delay(1000);
    }
    else if (KgCo2_m2 < 11.1 && KgCo2_m2 >= 6.5)
  {
    Serial.print("C");
    delay(1000);
    }
    else if (KgCo2_m2 < 17.7 && KgCo2_m2 >= 11.1)
  {
    Serial.print("D");
    delay(1000);
    }
    else if (KgCo2_m2 < 38.2 && KgCo2_m2 >= 17.7)
  {
    Serial.print("E");
    delay(1000);
    }
    else if (KgCo2_m2 < 43.2 && KgCo2_m2 >= 38.2)
  {
    Serial.print("F");
    delay(1000);
    }
    else
  {
    Serial.print("G");
    delay(1000);
    }
}
//**************************FUNCIONS**********************************
