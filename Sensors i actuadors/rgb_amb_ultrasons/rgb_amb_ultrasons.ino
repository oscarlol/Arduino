/*********************************************************************
 * *                                                                **
 * *                            Titol:                              **
 * *                        nom del programa                        **
 * *                                                                **
 * *  Nom:Oscar Pradas                             Data:xx/xx/2021  **
 * ******************************************************************/
//************************** INCLUDE *********************************

// ************************ VARIABLES ********************************
long n = 0;
long t = 0;                         //Tiempo que tarda el pulso
long d = 0;                         //Distancia detectada
const int Trigger = 3;          //Pin digital 2 para el Trigger del sensor
const int Echo = 4;             //Pin digital 3 para el echo del sensor
int rled = 5;                    // Pin 5 para led rojo
int bled = 6;                   // Pin 7 para led azul
int gled = 8;                   // Pin 6  para led verde
int  r = 0;
int  g = 0;
int  b = 0;
//**************************** SETUP *********************************

void setup(){
  Serial.begin(9600);           //iniciailzamos la comunicación
  pinMode(Trigger, OUTPUT);     //pin como salida
  pinMode(Echo, INPUT);         //pin como entrada
  digitalWrite(Trigger, LOW);   //Inicializamos el pin con 0
  pinMode(rled, OUTPUT);        //pin como salida
  pinMode(bled, OUTPUT);        //pin como salida
  pinMode(gled, OUTPUT);        //pin como salida
  analogWrite(rled, 0);
  analogWrite(bled, 0);
  analogWrite(gled, 0);


  
}

//*************************** LOOP ***********************************

void loop() {
  digitalWrite(Trigger, HIGH);  //llanzamos el pulso ultrasonico
  delayMicroseconds(10);        //
  digitalWrite(Trigger, LOW);   //Recivimos el pulso
  t = pulseIn(Echo, HIGH);      //obtenemos el ancho del pulso
  d = t/59;                     //escalamos el tiempo a una distancia en cm

  n = n + 15;
  if(n >= 0 && n <= 255){
    r = n;
    g = 0;
    b = 0;
    
  }
  
  else if (n >=256 && n <= 510){
   r = 255;
   g = n;
   b = 0;
  }
  else if (n >=511 && n <= 765){
   r = 0;
   g = 255;
   b = n
  }
  
  analogWrite(rled, r);
  analogWrite(gled, g);
  analogWrite(bled, b);
  Serial.println(String(r) + "," + String(g) + "," + String(b));

  Serial.print("Distancia: ");
  Serial.print(d);              //Enviamos serialmente el valor de la distancia
  Serial.print("cm");
  Serial.println();
  Serial.println(String(r) + "," + String(g) + "," + String(b));
  delay(500);
}
//**************************FUNCIONS**********************************
