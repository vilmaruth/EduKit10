/*  Ruleta de la fortuna.Se trata de cinco leds que se van encendiendo y apagando formando una secuencia,
el jugador debe dar al pulsador cuando el led intermedio se enciende, si acierta funciona un zumbador y 
la velocidad de la secuencia aumenta.
Los leds deben estar conectados de los pines 2,3,4,7,8,9, el zumbador al pin 13, el pulsador al pin 11.
El tiempo inicial entre encendido y encendido de leds debe ser 200 ms, si se acierta se decrementa el 
tiempo en 20 ms, si el tiempo entre encendidos llegase a 10 ms, se devuelve el tiempo a 200 ms. */
int leds[]={2,3,4,7,8,9};
int n=0;
int tiempo=200;
int zumbador=13;
int pulsador=11;
void setup (){
  for(n=0;n<6;n++) {
    pinMode(leds[n],OUTPUT);
  }
  pinMode(zumbador,OUTPUT);
  pinMode(pulsador,INPUT);
}
void compruebaacierto(){
  if(digitalRead(pulsador)==HIGH && n==2) {
    digitalWrite(zumbador,HIGH);
    delay (1000);
    digitalWrite(zumbador,LOW);
    tiempo=tiempo-20;
    if(tiempo<10){
      tiempo=200;
    }
  }
}
void loop () {
  for(n=0;n<6;n++) {
    digitalWrite(leds[n],HIGH);
    delay(tiempo);
    compruebaacierto();
    digitalWrite(leds[n],LOW);
    delay(tiempo);
  }
}
