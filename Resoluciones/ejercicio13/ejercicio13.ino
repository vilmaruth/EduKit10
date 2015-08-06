/* Impulsos programados
* Cambia de estado ON Off un lED conectado en el una salida digital
* pin 9. El se encenderá y apagará tantas veces como se indique mediante
* un digito ASCII leído desde el puerto serie.
*/
int ledPin = 9; 
int val = 0; 

void setup() {
  pinMode(ledPin,OUTPUT); // declara el PIN del LED como salida
  Serial.begin(19200); // conecta con el puerto serie a la velocidad de 19200
  Serial.println("Bienvenido al Generador de Impulsos Programados");
}
void loop () {
  val = Serial.read(); 
  if (val > '0' && val <= '9' ) {
    val = val - '0';
    for(int i=0; i<val; i++) {
      Serial.println("Encendido!");
      digitalWrite(ledPin,HIGH); // enciende el LED
      delay(150); // espera
      digitalWrite(ledPin, LOW); // apaga el LED
      delay(150); // espera
    }
  }
}
