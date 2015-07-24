/*Control de motor de Corriente Contínua (DC) con Arduino.
Se trata de controlar el encendido, sentido de giro y potencia de un motor de corriente 
contínua. El motor debe girar en un sentido al tope de potencia durante cinco segundos,
se detendrá durante dos segundos y volverá a girar en sentido contrario a tope de 
potencia durante cinco segundos deteníendose más tarde.
Como segundo paso de la práctica debe realizar la maniobra anterior y más tarde repetirla 
a mitad de potencia. El motor debe estar conectado a los pines 5 y 6 para su control
de giro y usaremos el pin 3 para realizar el control de potencia de arduino usándolo
como salida analógica (PWM).
Nota: para esta práctica vamos a utilizar el chip L293D.*/
void setup(){
  pinMode(5, OUTPUT); // declaramos el pin 7 como salida
  pinMode(6, OUTPUT); // declaramos el pin 8 como salida
}
void secuencia() {// función que realiza la secuencia de movimiento del motor
  digitalWrite (5, HIGH);
  digitalWrite (6,LOW);
  delay (5000);
  digitalWrite (5, LOW);
  digitalWrite (6,LOW);
  delay (2000);
  digitalWrite (5, LOW);
  digitalWrite (6,HIGH);
  delay (5000);
  digitalWrite (5, LOW);
  digitalWrite (6,LOW);
  delay (2000);
}
void loop(){
  analogWrite (3, 255);
  secuencia();
  analogWrite (3,128);
  secuencia();
}

