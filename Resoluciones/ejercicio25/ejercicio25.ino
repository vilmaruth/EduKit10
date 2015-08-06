/*  Utilizando la funcion Switch y Map,  generar una medida en 
* palabras de la luz captada por el LDR
*/
const int sensorMin = 0;   
const int sensorMax = 1023; 
void setup() {
  Serial.begin(9600);  
}
void loop() {
  int sensorReading = analogRead(A7);
  int range = map(sensorReading, sensorMin, sensorMax, 0, 3);
  switch (range) {
  case 0:    
    Serial.println("dark");
    break;
  case 1:   
    Serial.println("dim");
    break;
  case 2:    
    Serial.println("medium");
    break;
  case 3:    
    Serial.println("bright");
    break;
  } 
  delay(1);        
}





