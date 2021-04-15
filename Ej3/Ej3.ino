#define verde 8
#define azul 9
#define rojo 10

void setup()
{
  Serial.begin(9600);
  pinMode(azul, OUTPUT);
  pinMode(verde, OUTPUT);
  pinMode(rojo, OUTPUT);
}

void loop(){
  for (int i=0; i<=6; i++){
  	cambiar_color(i);
    delay(500);
  }
}


void cambiar_color(int numero){
  switch(numero){
  	case 0: //rojo
    	digitalWrite(rojo, HIGH);
        digitalWrite(verde, LOW);
        digitalWrite(azul, LOW);
    	break;
    case 1: //verde
    	digitalWrite(rojo, LOW);
        digitalWrite(verde, HIGH);
        digitalWrite(azul, LOW);
    	break;
    case 2: //azul
    	digitalWrite(rojo, LOW);
        digitalWrite(verde, LOW);
        digitalWrite(azul, HIGH);
    	break;
    case 3: //amarillo
    	digitalWrite(rojo, HIGH);
        digitalWrite(verde, HIGH);
        digitalWrite(azul, LOW);
    	break;
    case 4: //violeta
    	digitalWrite(rojo, HIGH);
        digitalWrite(verde, LOW);
        digitalWrite(azul, HIGH);
    	break;
    case 5: //celeste
    	digitalWrite(rojo, LOW);
        digitalWrite(verde, HIGH);
        digitalWrite(azul, HIGH);
    	break;
    case 6: //blanco
    	digitalWrite(rojo, HIGH);
        digitalWrite(verde, HIGH);
        digitalWrite(azul, HIGH);
    	break;
    
  }
  
}