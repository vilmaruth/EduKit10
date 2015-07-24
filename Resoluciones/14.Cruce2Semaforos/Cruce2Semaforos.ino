/* Cruce de semáforos.
Se trata de un cruce de semáforos controlado por arduino, para ello utilizaremos en el primer
semáforo los pines 2(led rojo), 4 (led amarillo), 7 (led verde), en el segundo semáforo
utilizaremos los pines 3 (led rojo), 8 (led amarillo) y 9 (led verde). 
La secuencia de funcionamiento debe ser : rojo 1 – verde 2 durante 3 segundos, 
rojo 1 – amarillo 2 durante 500 ms, verde 1 – rojo 2 durante 3 segundos, 
amarillo 1 - , rojo 2 durante 500 ms.*/
int leds[]={2,4,8,3,7,9};
int tiempo1=3000;
int tiempo2=500;
int n;
void setup() {
  for (n=0;n<6;n++) {
    pinMode (leds[n],OUTPUT);
  }
}
void loop () {
  digitalWrite (leds[0],HIGH);
  digitalWrite (leds[5],HIGH);
  delay (tiempo1);
  digitalWrite (leds[5],LOW);
  digitalWrite (leds[4],HIGH);
  delay (tiempo2);
  digitalWrite(leds[0],LOW);
  digitalWrite (leds[2],HIGH);
  digitalWrite (leds[4],LOW);
  digitalWrite (leds[3],HIGH);
  delay (tiempo1);
  digitalWrite (leds[2],LOW);
  digitalWrite(leds[1],HIGH);
  delay (tiempo2);
}
