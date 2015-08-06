// Generador de Notas Musicales
int piezo=13;
//cadena con los tiempos que corresponden a las distintas notas
int notas[] = {1915, 1700, 1519, 1432, 1275, 1136, 1014, 956}; 
int n=0;
int m= 0;
int tnota=100; //nº de repeticiones del pulso. Nos da la duración de la nota
int pausa=100;

void setup() {
  pinMode(piezo,OUTPUT);
}

void loop(){
  for(n=0;n<8;n++){ 
    for(m=0;m<=tnota;m++){
      digitalWrite(piezo,HIGH);
      delayMicroseconds(notas[n]); 
      digitalWrite(piezo,LOW);
      delayMicroseconds(notas[n]); 
    }
    delay(pausa); 
  }
}
