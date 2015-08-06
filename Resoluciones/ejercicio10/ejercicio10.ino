/* Ejercicio 10
Construccion de un indicador de Luz con un vumetro led.
*/

int ledPin1 = 7; // Selección de PIN para cada LED
int ledPin2 = 8;
int ledPin3 = 9;
int inPin= 7; //  entrada analógica 

void turn_off() { //Apaga los 3 LEDS
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
}

void setup() {
  pinMode(ledPin1, OUTPUT); // declara LEDs como salidas
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
}

void loop(){
  int val;
  val= analogRead(inPin); // lee el valor de la señal analógica
  turn_off();apaga los tres LED
  // Si el valor de la señal medida es > 256 enciende LED del PIN8
  if (val>= 256) digitalWrite(ledPin1, HIGH);
  // Si el valor de la señal medida es > 512 enciende LED del PIN7
  if (val>= 512) digitalWrite(ledPin2, HIGH);
  // Si el valor de la señal medida es > 758 enciende LED del PIN6
  if (val>= 768) digitalWrite(ledPin3, HIGH);
}
