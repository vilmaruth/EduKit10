/*
* Ejercicio 2
* Se trata de encender y apagar 3 LEDs colocados en las salidas 7, 8 y 9 
* con una permanencia de 200 ms. Las variables asignadas a cada led son ledPin1,
* ledPin2 y ledPin3
*/
int ledPin1 = 7; 
int ledPin2 = 8;
int ledPin3 = 9;

void setup() { 
  pinMode(ledPin1, OUTPUT); 
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
}
void loop(){ 
  digitalWrite(ledPin1, HIGH); // Apaga y enciende los leds cada 200 ms
  delay(200);
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, HIGH);
  delay(200);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, HIGH);
  delay(200);
  digitalWrite(ledPin3, LOW);
}
