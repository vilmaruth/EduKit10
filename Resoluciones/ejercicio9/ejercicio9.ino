/* Ejercicio 9
* Se trata de simular el movimiento de la llama de una vela. 
* Hacemos uso de la instrucción para generar un numero aleatorio que lo 
* asignamos a una salida analógica PWM y otro numero que lo asociamos 
* a la variable de temporización (tiempo que esperamos para cambiar el valor de la salida).
*/

int ledPin = 9; // selecciona el puerto PWM
int val = 0; // define y pone a cero la variable "brillo"
int delayVal = 0; // define el intervalo de cambio de valor de salida

void setup() {
  randomSeed(0); // inicializa el generador de números aleatorios
  pinMode(ledPin, OUTPUT); // declara el pin de SALIDA pin 9
}
void loop() {
  val = random(100,255); // genera un número aleatorio entre 100 y 255 que asigna a la variable val
  analogWrite(ledPin, val); // envía ese valor a la salida pin 9
  delayVal = random(50,150); // genera un numero aleatorio entre 50 y 150 y lo asigna a la variable de temporización
  delay(delayVal); // espera un tiempo delayval medido en milisegundos
}
