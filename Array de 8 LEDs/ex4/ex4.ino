/*********************************************************************
 * *                                                                **
 * *                            Titol:                              **
 * *                        nom del programa                        **
 * *                                                                **
 * *  Nom:Oscar Pradas                             Data:xx/xx/2021  **
 * ******************************************************************/
//************************** INCLUDE *********************************



// ************************ VARIABLES ********************************

const byte led0 = 5;          // donar nom al pin 5 de l’Arduino
const byte buttonPin1 = 2;     // donar nom al pin 2 de l’Arduino
const byte buttonPin2 = 3;
byte buttonState = 0;         // per guardar l’estat en que és troba el button
byte buttonState2 = 0;

//**************************** SETUP *********************************

void setup(){
  pinMode(led0, OUTPUT);     // definir el pin 5 com una sortida
  pinMode(buttonPin1, INPUT); // definir el pin 2 com una entrada 
  pinMode(buttonPin2, INPUT); // definir el pin 2 com una entrada  
}

//*************************** LOOP ***********************************

void loop() {
        buttonState = digitalRead(buttonPin1);  //llegir l’estat del button i gardar-lo
        buttonState2 = digitalRead(buttonPin2);
  if (buttonState == 0)  //polsador premut, muntat amb Pull-up
  {digitalWrite (led0, HIGH);

  }
  if (buttonState2 == 0)
  {digitalWrite (led0, LOW);
    }
}
//**************************FUNCIONS**********************************
