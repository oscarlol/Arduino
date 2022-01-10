/**********************************************************************************
**                                 Fade LEDs                                     **
**********************************************************************************/
//********** Includes *************************************************************
//********** Variables ************************************************************
const byte led1 = 3;          // donar nom al pin 5 de l’Arduino
const byte led2 = 4;          // donar nom al pin 6 de l’Arduino
const byte led3 = 5;          // donar nom al pin 9 de l’Arduino
const byte led4 = 6;         // donar nom al pin 10 de l’Arduino
const byte led5 = 7;         // donar nom al pin 11 de l’Arduino
const byte led6 = 8;         // donar nom al pin 11 de l’Arduino
unsigned long velocitat = 50;         // velocitat de l'acció en ms

//********** Setup ****************************************************************
void setup()
{
  pinMode(led6, OUTPUT);     // definir el pin 3 com una sortida
  pinMode(led1, OUTPUT);     // definir el pin 5 com una sortida
  pinMode(led2, OUTPUT);     // definir el pin 6 com una sortida
  pinMode(led3, OUTPUT);     // definir el pin 9 com una sortida
  pinMode(led4, OUTPUT);     // definir el pin 10 com una sortida
  pinMode(led5, OUTPUT);     // definir el pin 11 com una sortida
}

//********** Loop *****************************************************************
void loop()
{
  analogWrite(led1, LOW);    // posar PWM del pin 11 a 125
  analogWrite(led2, LOW);    // posar PWM del pin 11 a 125
  analogWrite(led3, LOW);    // posar PWM del pin 11 a 125
  analogWrite(led4, LOW);    // posar PWM del pin 11 a 125
  analogWrite(led5, LOW);     // posar PWM del pin 11 a 0
  analogWrite(led6, 0);    // posar PWM del pin 11 a 125
  delay(velocitat);          // es queden leds velocitat ms en aquest estat
  
  analogWrite(led1, LOW);    // posar PWM del pin 11 a 125
  analogWrite(led2, LOW);    // posar PWM del pin 11 a 125
  analogWrite(led3, LOW);    // posar PWM del pin 11 a 125
  analogWrite(led4, LOW);    // posar PWM del pin 11 a 125
  analogWrite(led5, 0);     // posar PWM del pin 11 a 0
  analogWrite(led6, 60);    // posar PWM del pin 11 a 125
  delay(velocitat);          // es queden leds velocitat ms en aquest estat

  analogWrite(led1, LOW);    // posar PWM del pin 11 a 125
  analogWrite(led2, LOW);    // posar PWM del pin 11 a 125
  analogWrite(led3, LOW);    // posar PWM del pin 11 a 125
  analogWrite(led4, 0);     // posar PWM del pin 10 a 60
  analogWrite(led5, 60);     // posar PWM del pin 11 a 60
  analogWrite(led6, 120);    // posar PWM del pin 11 a 125
  delay(velocitat);          // es queden leds velocitat ms en aquest estat
  
  analogWrite(led1, LOW);    // posar PWM del pin 11 a 125
  analogWrite(led2, LOW);    // posar PWM del pin 11 a 125
  analogWrite(led3, 0);    // posar PWM del pin 9 a 125
  analogWrite(led4, 60);    // posar PWM del pin 10 a 125
  analogWrite(led5, 120);    // posar PWM del pin 11 a 125
  analogWrite(led6, LOW);    // posar PWM del pin 11 a 125
  delay(velocitat);           // es queden leds velocitat ms en aquest estat
  
  analogWrite(led1, LOW);    // posar PWM del pin 11 a 125
  analogWrite(led2, 0);    // posar PWM del pin 9 a 125
  analogWrite(led3, 60);    // posar PWM del pin 10 a 125
  analogWrite(led4, 120);    // posar PWM del pin 11 a 125
  analogWrite(led5, LOW);    // posar PWM del pin 11 a 125
  analogWrite(led6, LOW);    // posar PWM del pin 11 a 125
  delay(velocitat);           // es queden leds velocitat ms en aquest estat
  
  analogWrite(led1, 0);    // posar PWM del pin 9 a 125
  analogWrite(led2, 60);    // posar PWM del pin 10 a 125
  analogWrite(led3, 120);    // posar PWM del pin 11 a 125
  analogWrite(led3, LOW);    // posar PWM del pin 9 a 125
  analogWrite(led4, LOW);    // posar PWM del pin 10 a 125
  analogWrite(led5, LOW);    // posar PWM del pin 11 a 125
  analogWrite(led6, LOW);    // posar PWM del pin 11 a 125   
  delay(velocitat);           // es queden leds velocitat ms en aquest estat

  analogWrite(led1, 60);    // posar PWM del pin 10 a 125
  analogWrite(led2, 120);    // posar PWM del pin 11 a 125
  analogWrite(led3, LOW);    // posar PWM del pin 9 a 125
  analogWrite(led4, LOW);    // posar PWM del pin 10 a 125
  analogWrite(led5, LOW);    // posar PWM del pin 11 a 125
  analogWrite(led6, LOW);    // posar PWM del pin 11 a 125 
  delay(velocitat);           // es queden leds velocitat ms en aquest estat
  
  analogWrite(led1, 120);
  analogWrite(led2, LOW);
  analogWrite(led3, LOW);
  analogWrite(led4, LOW);
  analogWrite(led5, LOW);
  analogWrite(led6, LOW);
  delay(velocitat);           // es queden leds velocitat ms en aquest estat

  analogWrite(led1, LOW);    // posar PWM del pin 9 a 125
  analogWrite(led2, LOW);    // posar PWM del pin 10 a 125
  analogWrite(led3, LOW);    // posar PWM del pin 9 a 125
  analogWrite(led4, LOW);    // posar PWM del pin 10 a 125
  analogWrite(led5, LOW);    // posar PWM del pin 11 a 125
  analogWrite(led6, LOW);    // posar PWM del pin 11 a 125
  delay(velocitat);           // es queden leds velocitat ms en aquest estat

  analogWrite(led1, LOW);    // posar PWM del pin 9 a 125
  analogWrite(led2, LOW);    // posar PWM del pin 10 a 125
  analogWrite(led3, LOW);    // posar PWM del pin 9 a 125
  analogWrite(led4, LOW);    // posar PWM del pin 10 a 125
  analogWrite(led5, LOW);    // posar PWM del pin 11 a 125
  analogWrite(led6, LOW);    // posar PWM del pin 11 a 125
  delay(velocitat);           // es queden leds velocitat ms en aquest estat

  analogWrite(led1, 120);    // posar PWM del pin 9 a 125
  analogWrite(led2, LOW);    // posar PWM del pin 10 a 125
  analogWrite(led3, LOW);    // posar PWM del pin 9 a 125
  analogWrite(led4, LOW);    // posar PWM del pin 10 a 125
  analogWrite(led5, LOW);    // posar PWM del pin 11 a 125
  analogWrite(led6, LOW);    // posar PWM del pin 11 a 125
  delay(velocitat);           // es queden leds velocitat ms en aquest estat
  
  analogWrite(led1, 60);    // posar PWM del pin 10 a 125
  analogWrite(led2, 120);    // posar PWM del pin 11 a 125
  analogWrite(led3, LOW);    // posar PWM del pin 9 a 125
  analogWrite(led4, LOW);    // posar PWM del pin 10 a 125
  analogWrite(led5, LOW);    // posar PWM del pin 11 a 125
  analogWrite(led6, LOW);    // posar PWM del pin 11 a 125
  delay(velocitat);           // es queden leds velocitat ms en aquest estat

  analogWrite(led1, 0);    // posar PWM del pin 9 a 125
  analogWrite(led2, 60);    // posar PWM del pin 10 a 125
  analogWrite(led3, 120);    // posar PWM del pin 11 a 125
  analogWrite(led3, LOW);    // posar PWM del pin 9 a 125
  analogWrite(led4, LOW);    // posar PWM del pin 10 a 125
  analogWrite(led5, LOW);    // posar PWM del pin 11 a 125
  analogWrite(led6, LOW);    // posar PWM del pin 11 a 125   
  delay(velocitat);           // es queden leds velocitat ms en aquest estat

  analogWrite(led1, LOW);    // posar PWM del pin 11 a 125
  analogWrite(led2, 0);    // posar PWM del pin 9 a 125
  analogWrite(led3, 60);    // posar PWM del pin 10 a 125
  analogWrite(led4, 120);    // posar PWM del pin 11 a 125
  analogWrite(led5, LOW);    // posar PWM del pin 11 a 125
  analogWrite(led6, LOW);    // posar PWM del pin 11 a 125
  delay(velocitat);           // es queden leds velocitat ms en aquest estat

  analogWrite(led1, LOW);    // posar PWM del pin 11 a 125
  analogWrite(led2, LOW);    // posar PWM del pin 11 a 125
  analogWrite(led3, 0);    // posar PWM del pin 9 a 125
  analogWrite(led4, 60);    // posar PWM del pin 10 a 125
  analogWrite(led5, 120);    // posar PWM del pin 11 a 125
  analogWrite(led6, LOW);    // posar PWM del pin 11 a 125
  delay(velocitat);           // es queden leds velocitat ms en aquest estat

  analogWrite(led1, LOW);    // posar PWM del pin 11 a 125
  analogWrite(led2, LOW);    // posar PWM del pin 11 a 125
  analogWrite(led3, LOW);    // posar PWM del pin 11 a 125
  analogWrite(led4, 0);     // posar PWM del pin 10 a 60
  analogWrite(led5, 60);     // posar PWM del pin 11 a 60
  analogWrite(led6, 120);    // posar PWM del pin 11 a 125
  delay(velocitat);          // es queden leds velocitat ms en aquest estat
  
  analogWrite(led1, LOW);    // posar PWM del pin 11 a 125
  analogWrite(led2, LOW);    // posar PWM del pin 11 a 125
  analogWrite(led3, LOW);    // posar PWM del pin 11 a 125
  analogWrite(led4, LOW);    // posar PWM del pin 11 a 125
  analogWrite(led5, 0);     // posar PWM del pin 11 a 0
  analogWrite(led6, 60);    // posar PWM del pin 11 a 125
  delay(velocitat);          // es queden leds velocitat ms en aquest estat

  analogWrite(led1, LOW);    // posar PWM del pin 11 a 125
  analogWrite(led2, LOW);    // posar PWM del pin 11 a 125
  analogWrite(led3, LOW);    // posar PWM del pin 11 a 125
  analogWrite(led4, LOW);    // posar PWM del pin 11 a 125
  analogWrite(led5, LOW);     // posar PWM del pin 11 a 0
  analogWrite(led6, 0);    // posar PWM del pin 11 a 125
  delay(velocitat);          // es queden leds velocitat ms en aquest estat
}

//********** Funcions *************************************************************
