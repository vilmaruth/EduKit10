/* Ejercicio 11
Se trata de que enviemos hacia la salida D9 un valor analógico ascendente
y descendente cíclicamente comprendido entre 0 y 255 en incrementos de 5.
Para la realización de este ejercicio se debe empleará una estructura 
de programación tipo for que realice el incremento o decremento de una 
variable entre 0-255 y 255-0 con  un valor te retardo entre cambio de valor de 30 mseg.
*/

int value = 0; // Valor a sacar por la salida analógica PIN 9
int ledpin = 9; // Salida analógicas PIN 9

void setup(){}

void loop(){
  for(value = 0 ; value <= 255; value+=5){
    analogWrite(ledpin, value); // Enviar valor a la salida (entre 0 y 255)
    delay(30); // Esperar 30 ms para ver el efecto de variación
  }
  for(value = 255; value >=0; value-=5){
    analogWrite(ledpin, value);
    delay(30);
  }
} 
