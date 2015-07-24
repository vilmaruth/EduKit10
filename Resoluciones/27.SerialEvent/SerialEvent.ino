/* Eventos en Puerto Serial
 Escribir una frase que es enviada desde el puerto serial
 */

String inputString = "";         // frase
boolean stringComplete = false;  // estado de frase completa

void setup() {
  // initialize serial:
  Serial.begin(9600);
  inputString.reserve(200);
}

void loop() {
  // imprime la frase cuando el estado es completa, 
  if (stringComplete) {
    Serial.println(inputString); 
    inputString = "";
    stringComplete = false;
  }
}
/*
  El serialEvent ocurre cada vez que nueva informacion viene por RX.
 Esta rutina se ejecuta entre cada ejecucion del loop().
 */
void serialEvent() {
  while (Serial.available()) {
    // obtiene un nuevo caracter
    char inChar = (char)Serial.read(); 
    // agrega el caracter a la frase
    inputString += inChar;
    //  si el caracte es el retorno de carro,'\n', cambiamos el estado a frase completa
    if (inChar == '\n') {
      stringComplete = true;
    } 
  }
}


