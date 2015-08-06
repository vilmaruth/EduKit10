/* Usar la Funcion Switch para captar instrucciones via Serial-Monitor */
void setup() {
    Serial.begin(9600); 
    for (int thisPin = 2; thisPin < 5; thisPin++) {
        pinMode(thisPin, OUTPUT);
      } 
}
void loop() {
  if (Serial.available() > 0) {
    int inByte = Serial.read();
    switch (inByte) {
    case 'a':    
      digitalWrite(2, HIGH);
      break;
    case 'b':    
      digitalWrite(3, HIGH);
      break;
    case 'c':    
      digitalWrite(4, HIGH);
      break;
    default:
      // turn all the LEDs off:
      for (int thisPin = 2; thisPin < 5; thisPin++) {
        digitalWrite(thisPin, LOW);
      }
    } 
  }
}

