/*Secuencia Led con pulsador
Se trata de encender y apagar 6 leds secuencialmente al accionar un pulsador. El pulsador debe estar
conectado al pin 10, y los leds a los pines 2,3,4,7,8,9. 
Se deben encender y posteriormente apagar los led, con un tiempo de duración de encendido y apagado
de 200 milisegundos.
Nota: la secuencia principal del programa debe estar reproducida en una función a la que llamará el 
programa principal.*/
int cadenaleds[]={2,3,4,7,8,9};
int pulsador=10;
int tiempo=200;
int n=0;
void setup() {
  for(n=0;n<4;n++) {
    pinMode (cadenaleds[n],OUTPUT);
  }
  pinMode (pulsador,INPUT);
}
void flash() {
  for (n=0;n<4;n++) {
    digitalWrite (cadenaleds[n],HIGH);
    delay (tiempo);
    digitalWrite (cadenaleds[n],LOW);
    delay (tiempo);
  }
}
void loop() {
  if (digitalRead(pulsador)==HIGH) {
    flash ();
  }
}
