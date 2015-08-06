/*
  Lectura de voltaje via Analogico.
  Leer via pin analogico un voltaje inducido en la misma e imprimir via serial monitor.
  Recordar que los Pines analogicos no pueden superar los 5V de lectura. 
*/

void setup() {
  Serial.begin(9600);
}

void loop() {
  // el pin A6 esta conectado con un divisor de tension a la bateria de alimentacion.
  int sensorValue = analogRead(A6); 
  float voltage = sensorValue * (5.0 / 1023.0);
  Serial.println(voltage);
}
