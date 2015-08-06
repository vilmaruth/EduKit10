/*
* Intermitente
*
* Se trata de realizar un ejercicio básico que consiste en encender y apagar un led
*que conectamos en el PIN 9 de Arduino que lo configuramos como salida.
*El tiempo de encendido y apagado es de 1 segundo.
*/
int ledPin = 9; // Definición de la salida en el PIN 9
void setup() //Configuración
{
pinMode(ledPin, OUTPUT); // designa la salida digital al PIN 9
}
void loop() // bucle de funcionamiento
{
digitalWrite(ledPin, HIGH); // activa el LED
delay(1000); // espera 1 seg. (tiempo encendido)
digitalWrite(ledPin, LOW); // desactiva el LED
delay(1000); // espera 1 seg. (tiempo apagado)
}
