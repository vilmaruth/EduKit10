// Ejercicio 19.
/* Cambio del barrido de un servo motor pasando por todos los angulos de funcionamiento,
* tener en cuanta que los angulos de funcionamiento, cambia segun el modelo del servo.
*/

#include <Servo.h>
Servo myservo; 
int pos = 0; 
void setup() {
    myservo.attach(10); 
}
void loop() {
    for(pos = 0; pos < 180; pos += 1){ 
      myservo.write(pos); 
      delay(15); 
    }
    for(pos = 180; pos>=1; pos-=1){
      myservo.write(pos); 
      delay(15); 
    }
}
