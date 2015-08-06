/* Estrella fugaz
*--------------
* Este programa es una variante del ejemplo del coche fantástico. Muestra mediante
* un loop una estrella fugaz que es dibujada en una línea de LED-s
* directamente conectados a la placa. Puedes controlar la velocidad a la que
* la estrella se mueve gracias a una variable llamada "waitNextLed". También
* puedes controlar la longitud de la cola de la estrella a través de la variable "tail
* length"
*/ 
int pinArray [] = {2,3,4,7,8,9};
int controlLed = 13; // control
int waitNextLed = 100; // Tiempo antes de encender el siguiente LED
int tailLength = 4;// Número de LED-s que permanecen encendidos antes de empezar a apagarlos para formar la cola
int lineSize = 6; // Número de LED-s conectados 

void setup(){
  pinMode (controlLed, OUTPUT);
  for (int i=0; i< lineSize; i++){
    pinMode(pinArray[i], OUTPUT);
  }
}

void loop()
{
  int tailCounter = tailLength;
  digitalWrite(controlLed, HIGH); // Se enciende el LED de control para indicar el inicio del loop
  for (int i=0; i<lineSize; i++){
    digitalWrite(pinArray[i],HIGH);
    delay(waitNextLed);
    if (tailCounter == 0){
      digitalWrite(pinArray[i-tailLength],LOW); // Se apagan los LED-s en función de la longitud de la cola.
    } else if (tailCounter > 0){tailCounter--;}
  }
  
  for (int i=(lineSize-tailLength); i<lineSize; i++){
    digitalWrite(pinArray[i],LOW); // Se apagan los LED
    delay(waitNextLed);
  }
}




