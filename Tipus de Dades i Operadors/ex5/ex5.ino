/*********************************************************************
 * *                                                                **
 * *                            Titol:                              **
 * *                        nom del programa                        **
 * *                                                                **
 * *  Nom:Oscar Pradas                             Data:xx/xx/2021  **
 * ******************************************************************/
//************************** INCLUDE *********************************



// ************************ VARIABLES ********************************
int a = 3;
int b = 4;
int H  = 0;
//**************************** SETUP *********************************

void setup(){
Serial.begin (9600);
Serial.print ("a = ");
Serial.println (a);
Serial.print ("b = ");
Serial.println (b);
Serial.print ("H = ");
H = sqrt(pow(a,2)+pow(b,2));
Serial.println (H);
}

//*************************** LOOP ***********************************

void loop() {


}
//**************************FUNCIONS**********************************
