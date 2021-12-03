/*********************************************************************
 * *                                                                **
 * *                            Titol:                              **
 * *                        nom del programa                        **
 * *                                                                **
 * *  Nom:Oscar Pradas                             Data:xx/xx/2021  **
 * ******************************************************************/
//************************** INCLUDE *********************************



//********** Variables ************************************************************
int sensorReading = 4;

//********** Setup ****************************************************************
void setup()
{
  Serial.begin(9600);
  Serial.print("The day is "); 
   //Escriu The day is  
  switch (sensorReading) {
  case 0:    
    Serial.println("dark");
    break;
   //Si sensorReading es 0 escruira dark
  case 1:    
    Serial.println("dim");
    break;
   //Si sensorReading es 1 escruira dim
  case 2:    
    Serial.println("medium");
    break;
   //Si sensorReading es 2 escruira medium
  case 3:
    Serial.println("bright");
    break;
   //Si sensorReading es 3 escruira bright
  default:
    Serial.println("... I don't know!!!");
   //Si sensorReading no es cap de les anteriors escruira i don’t know!!!
  } 
}

//********** Loop *****************************************************************
void loop()  
{
}

//********** Funcions *************************************************************
