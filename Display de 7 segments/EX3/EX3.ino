/*********************************************************************
 * *                                                                **
 * *                            Titol:                              **
 * *                        nom del programa                        **
 * *                                                                **
 * *  Nom:Oscar Pradas                             Data:xx/xx/2021  **
 * ******************************************************************/
//************************** INCLUDE *********************************



/*********************************************************************
 * *                                                                **
 * *                            Titol:                              **
 * *                        nom del programa                        **
 * *                                                                **
 * *  Nom:Oscar Pradas                             Data:xx/xx/2021  **
 * ******************************************************************/
//************************** INCLUDE *********************************



// ************************ VARIABLES ********************************

const byte segA = 12;          // donar nom al pin 5 de l’Arduino
const byte segB = 11;          
const byte segC = 10;          
const byte segD = 5;          
const byte segE = 6;          
const byte segF = 8;         
const byte segG = 7;
const byte button = 3;
byte buttonState = 0;  
int A = 0;
void setup(){

pinMode(segA, OUTPUT);
pinMode(segB, OUTPUT);
pinMode(segC, OUTPUT);
pinMode(segD, OUTPUT);
pinMode(segE, OUTPUT);
pinMode(segF, OUTPUT);
pinMode(segG, OUTPUT);
pinMode(button,INPUT);
}

//*************************** LOOP ***********************************

void loop() {
buttonState = digitalRead (button);
if (buttonState== 0){
  delay(100);
  digitalWrite(segA,HIGH);
  digitalWrite(segB,HIGH);
  digitalWrite(segC,HIGH);
  digitalWrite(segD,HIGH);
  digitalWrite(segE,HIGH);
  digitalWrite(segF,HIGH);
  digitalWrite(segG,LOW);
  delay(1000);
buttonState = digitalRead (button);
  if (buttonState == 0){
    delay(1000);
  }
  else{A = A + 1;}
  
  digitalWrite(segA,LOW);
  digitalWrite(segB,HIGH);
  digitalWrite(segC,HIGH);
  digitalWrite(segD,LOW);
  digitalWrite(segE,LOW);
  digitalWrite(segF,LOW);
  digitalWrite(segG,LOW);
  delay(1000);
  if (buttonState == 0){
    delay(1000);
    buttonState = digitalRead (button);
    }
  else{A = A + 1;}
      
  digitalWrite(segA,HIGH);
  digitalWrite(segB,HIGH);
  digitalWrite(segC,LOW);
  digitalWrite(segD,HIGH);
  digitalWrite(segE,HIGH);
  digitalWrite(segF,LOW);
  digitalWrite(segG,HIGH);
  delay(1000);
  buttonState = digitalRead (button);
  if (buttonState == 0){
    delay(1000);
    }
    else{A = A + 1;}
      
  digitalWrite(segA,HIGH);
  digitalWrite(segB,HIGH);
  digitalWrite(segC,HIGH);
  digitalWrite(segD,HIGH);
  digitalWrite(segE,LOW);
  digitalWrite(segF,LOW);
  digitalWrite(segG,HIGH);
  delay(1000);
  buttonState = digitalRead (button);
  if (buttonState == 0){
    delay(1000);
    }
  else{A = A + 1;}
      
  digitalWrite(segA,LOW);
  digitalWrite(segB,HIGH);
  digitalWrite(segC,HIGH);
  digitalWrite(segD,LOW);
  digitalWrite(segE,LOW);
  digitalWrite(segF,HIGH);
  digitalWrite(segG,HIGH);
  delay(1000);
  buttonState = digitalRead (button);
  if (buttonState == 0){
    delay(1000);
    }
    else{A = A + 1;}
       
  digitalWrite(segA,HIGH);
  digitalWrite(segB,LOW);
  digitalWrite(segC,HIGH);
  digitalWrite(segD,HIGH);
  digitalWrite(segE,LOW);
  digitalWrite(segF,HIGH);
  digitalWrite(segG,HIGH);
  delay(1000);
  buttonState = digitalRead (button);
  if (buttonState == 0){
    digitalWrite(segA,HIGH);
    digitalWrite(segB,LOW);
    digitalWrite(segC,HIGH);
    digitalWrite(segD,HIGH);
    digitalWrite(segE,LOW);
    digitalWrite(segF,HIGH);
    digitalWrite(segG,HIGH);
    delay(1000);
    }
    else{A = A + 1;}
    
  digitalWrite(segA,HIGH);
  digitalWrite(segB,LOW);
  digitalWrite(segC,HIGH);
  digitalWrite(segD,HIGH);
  digitalWrite(segE,HIGH);
  digitalWrite(segF,HIGH);
  digitalWrite(segG,HIGH);
  delay(1000);
  buttonState = digitalRead (button);
  if (buttonState == 0){
    digitalWrite(segA,HIGH);
    digitalWrite(segB,LOW);
    digitalWrite(segC,HIGH);
    digitalWrite(segD,HIGH);
    digitalWrite(segE,HIGH);
    digitalWrite(segF,HIGH);
    digitalWrite(segG,HIGH);
    delay(1000);
    }
    else{A = A + 1;}      
  digitalWrite(segA,HIGH);
  digitalWrite(segB,HIGH);
  digitalWrite(segC,HIGH);
  digitalWrite(segD,LOW);
  digitalWrite(segE,LOW);
  digitalWrite(segF,LOW);
  digitalWrite(segG,LOW);
  delay(1000);
  buttonState = digitalRead (button);
  if (buttonState == 0){
  digitalWrite(segA,HIGH);
  digitalWrite(segB,HIGH);
  digitalWrite(segC,HIGH);
  digitalWrite(segD,LOW);
  digitalWrite(segE,LOW);
  digitalWrite(segF,LOW);
  digitalWrite(segG,LOW);
  delay(1000);    
  }
  else{A = A + 1;}  
  
  digitalWrite(segA,HIGH);
  digitalWrite(segB,HIGH);
  digitalWrite(segC,HIGH);
  digitalWrite(segD,HIGH);
  digitalWrite(segE,HIGH);
  digitalWrite(segF,HIGH);
  digitalWrite(segG,HIGH);
  delay(1000);
  buttonState = digitalRead (button);
  
  if (buttonState == 0){
  digitalWrite(segA,HIGH);
  digitalWrite(segB,HIGH);
  digitalWrite(segC,HIGH);
  digitalWrite(segD,HIGH);
  digitalWrite(segE,HIGH);
  digitalWrite(segF,HIGH);
  digitalWrite(segG,HIGH);
  delay(1000);    
  }
  else{A = A + 1;}
  
  digitalWrite(segA,HIGH);
  digitalWrite(segB,HIGH);
  digitalWrite(segC,HIGH);
  digitalWrite(segD,HIGH);
  digitalWrite(segE,LOW);
  digitalWrite(segF,HIGH);
  digitalWrite(segG,HIGH);
  delay(1000);
  buttonState = digitalRead (button);
  if (buttonState == 0){
  digitalWrite(segA,HIGH);
  digitalWrite(segB,HIGH);
  digitalWrite(segC,HIGH);
  digitalWrite(segD,HIGH);
  digitalWrite(segE,LOW);
  digitalWrite(segF,HIGH);
  digitalWrite(segG,HIGH);
  delay(1000);    
  }
  else{A = A + 1;}

  A = 0;
}  
}
//**************************FUNCIONS**********************************
//**************************FUNCIONS**********************************
