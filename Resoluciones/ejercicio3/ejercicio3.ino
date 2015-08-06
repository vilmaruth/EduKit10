
/* Ejercicio 3 */
int ledPin1 = 7; 
int ledPin2 = 8;
int ledPin3 = 9;

void setup() { 
  pinMode(ledPin1, OUTPUT); 
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
}
void loop(){ 
  digitalWrite(ledPin1, HIGH); // Apaga y enciende los leds cada 200 ms
  delay(200);
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, HIGH);
  delay(200);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, HIGH);
  delay(200);
  digitalWrite(ledPin3, LOW);
}
