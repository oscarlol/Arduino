/*********************************************************************
 * *                                                                **
 * *                            Titol:                              **
 * *                        nom del programa                        **
 * *                                                                **
 * *  Nom:Oscar Pradas                             Data:xx/xx/2021  **
 * ******************************************************************/
//************************** INCLUDE *********************************



// C++ code
//
//********** Variables ************************************************************
int tempAigua = 102;

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
  if (tempAigua < 90 )
    {
      Serial.println("L'aigua encara no bull");
      delay (1000);
    }
    else if (tempAigua >=90 && tempAigua < 100)
      { 
      Serial.println("L'aigua ya casi bull");
      delay (1000);
      }
      
    else 
     {
      Serial.println("L'aigua ja esta bullint!");
      delay (1000);
      }
     

}
