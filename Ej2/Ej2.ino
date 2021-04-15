#define amarillo 8
#define verde 9
#define rojo 10

void setup()
{
  Serial.begin(9600);
  pinMode(amarillo, OUTPUT);
  pinMode(verde, OUTPUT);
  pinMode(rojo, OUTPUT);
}

void loop()
{
  int valor = random(0,11);
  cambiar_color(valor);
}

void cambiar_color(int numero){
  switch(numero){
  	case 0: //verde
        digitalWrite(verde, HIGH);
    	delay(2000);
    	digitalWrite(verde, LOW);
    	break;
    case 1: //rojo
    	digitalWrite(rojo, HIGH);
    	delay(2000);
    	digitalWrite(rojo, LOW);
    	break;
    case 2:  //verde
        digitalWrite(verde, HIGH);
    	delay(2000);
    	digitalWrite(verde, LOW);
    	break;
    case 3: //rojo
    	digitalWrite(rojo, HIGH);
    	delay(2000);
    	digitalWrite(rojo, LOW);
    	break;
    case 4: //amarillo
        digitalWrite(amarillo, HIGH);
    	delay(2000);
    	digitalWrite(amarillo, LOW);
    	break;
    case 5: //amarillo
        digitalWrite(amarillo, HIGH);
    	delay(2000);
    	digitalWrite(amarillo, LOW);
    	break;
    case 7: //rojo
    	digitalWrite(rojo, HIGH);
    	delay(2000);
    	digitalWrite(rojo, LOW);
    	break;
    case 8: //verde
        digitalWrite(verde, HIGH);
    	delay(2000);
    	digitalWrite(verde, LOW);
    	break;
    case 9: //amarillo
        digitalWrite(amarillo, HIGH);
    	delay(2000);
    	digitalWrite(amarillo, LOW);
    	break;
    case 10: //apagados
    	digitalWrite(verde, LOW);
    	digitalWrite(rojo, LOW);
    	digitalWrite(amarillo, LOW);
    	break;
    	
  }
  
}