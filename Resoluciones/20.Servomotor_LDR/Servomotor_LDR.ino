/*Servo-motor graduado con LDR
Dado al valor captado por sensor LDR mapear el valor a valores para un servo-motor
*/
#include <Servo.h> 
 
Servo myservo;  // Crea un objeto de la Clase Servo
 
int ldr=7;  // pin analogico usado para conectar el LDR
int val;    // variable para leer el valor analogico 
 
void setup() 
{ 
  myservo.attach(10);  //vincula el objeto servo al pin 9 
} 
 
void loop() 
{ 
  val = analogRead(ldr);// leer el valor del LDR(value between 0 and 1023) 
  val = map(val, 0, 1023, 0, 179);// escala el valor del LDR a un valor entre 0° y 180°
  myservo.write(val);             // pocisiona el servo de acuerdo al valor escalado.
  delay(15);                           
} 
