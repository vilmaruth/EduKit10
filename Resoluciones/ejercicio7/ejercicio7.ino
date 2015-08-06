/* Programa Contador 
*
* Detecta si el botón conectado a la entrada D10 ha sido presionado y enciende el LED
* Envía al PC el valor de la variable de cuenta "Contador" vía puerto serie.
*
*/
int LED = 9;
int Boton = 10;
int valor = 0;
int contador = 0;
int estadoanteriorboton = 0;
void setup(){
  Serial.begin(9600); // Configura velocidad de transmisión a 9600 baudios.
  pinMode(LED, OUTPUT); 
  pinMode(Boton, INPUT);
}

void loop(){
  estadoanteriorboton = valor;
  valor = digitalRead(Boton); // lee el valor de la entrada digital pin 7
  digitalWrite(LED, valor); 
  if(valor != estadoanteriorboton ){
    contador++;
    Serial.println(contador);
   }
}
