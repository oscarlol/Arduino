/*********************************************************************
 * *                                                                **
 * *                            Titol:                              **
 * *                        nom del programa                        **
 * *                                                                **
 * *  Nom:Oscar Pradas                             Data:xx/xx/2021  **
 * ******************************************************************/
//************************** INCLUDE *********************************



// ************************ VARIABLES ********************************


//********** Variables ************************************************************

int comptar = 20;
int i = 0;
void setup()               // run once, when the sketch starts
{
  Serial.begin(9600);     // set up Serial library at 9600 bps
  Serial.print("Ara comptare de 0 a ");
  Serial.println(comptar);  
  while(i <= comptar)
  {
    Serial.print(i);
    Serial.print("-");
    i++;
  } 
}

//*************************** LOOP ***********************************

void loop() {


}
//**************************FUNCIONS**********************************
