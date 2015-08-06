/* Pulsador
* Detecta si el botón ha sido presionado o no
* y enciende el LED en consecuencia.
*/
int ledPin = 9; // PIN del LED
int inPin = 10; // PIN del pulsador
int value = 0; // Valor del pulsador
void setup() {
pinMode(ledPin, OUTPUT); // Inicializa el pin 9 como salida digital
pinMode(inPin, INPUT); // Inicializa el pin 10 como entrada digital
}
void loop() {
value = digitalRead(inPin); // Lee el valor de la entrada digital
digitalWrite(ledPin, value);
}
