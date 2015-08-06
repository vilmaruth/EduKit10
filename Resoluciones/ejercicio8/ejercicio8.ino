/* Entrada Analógica
* Se trata de configurar un canal de entrada analógico pin 7 
y enviar el valor leído al PC para visualizarlo.
*/
int LDRPin = 7; // selecciona el pin Analogico
int val = 0; // variable para almacenar el valor leído por la entrada analógica
void setup() {
  Serial.begin(9600);
}
void loop() {
  val = analogRead(LDRPin); 
  Serial.print("Valor captado: ");
  Serial.println(val); 
  delay(1000);
}
