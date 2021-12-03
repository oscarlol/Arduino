/*********************************************************************
 * *                                                                **
 * *                            Titol:                              **
 * *                        nom del programa                        **
 * *                                                                **
 * *  Nom:Oscar Pradas                             Data:xx/xx/2021  **
 * ******************************************************************/
//************************** INCLUDE *********************************





//********** Variables ************************************************************

int tempAigua = 101;



//********** Setup ****************************************************************

void setup()              // run once, when the sketch starts
{
  Serial.begin(9600);     // set up Serial library at 9600 bps

} 

//*************************** LOOP ***********************************

void loop() {
  Serial.print("L'aigua esta a ");
  Serial.print(tempAigua);
  Serial.print("C ");
  if (tempAigua > 100)
    {
      Serial.println("Aigua supera els 100C, esta bullint!");
      delay (1000);
    }
      else (tempAigua <= 100)
      { 
      Serial.println("L'aigua encara no bull");
      delay (1000);
      }

}
