#define verde 8
#define azul 9
#define rojo 10
#define pot A0

void setup()
{
  Serial.begin(9600);
  pinMode(azul, OUTPUT);
  pinMode(verde, OUTPUT);
  pinMode(rojo, OUTPUT);
}

void loop()
{
  int numero = random(0,3);
  int valor = analogRead(pot); 
  cambiar_color(valor, numero);
}

void cambiar_color(int valor, int numero){
  switch(numero){
  	case 0: //rojo
    	analogWrite(rojo, valor);
    	break;
    case 1: //verde
        analogWrite(verde, valor);
    	break;
    case 2: //azul
        analogWrite(azul, valor);
    	break;
  }  
}