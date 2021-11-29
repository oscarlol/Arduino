/*********************************************************************
 * *                                                                **
 * *                            Titol:                              **
 * *                        nom del programa                        **
 * *                                                                **
 * *  Nom:Oscar Pradas                             Data:xx/xx/2021  **
 * ******************************************************************/
//************************** INCLUDE *********************************




//********** Variables ************************************************************
int tempAigua = 100;

//********** Setup ****************************************************************
void setup()              // run once, when the sketch starts
{
  Serial.begin(9600);     // set up Serial library at 9600 bps

  if (tempAigua > 100)
  {
    Serial.println("Aigua supera els 100C, esta bullint!");
  }
  if (tempAigua <= 100)
  { 
  Serial.println("L'aigua encara no bull");
  }
  Serial.print("L'aigua esta a ");
  Serial.print(tempAigua);
  Serial.print("º");
}

//*************************** LOOP ***********************************

void loop() {


}
//**************************FUNCIONS**********************************
