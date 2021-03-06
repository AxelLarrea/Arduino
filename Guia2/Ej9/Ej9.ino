#define rojo 10
#define azul 9
#define verde 8
#define pulsador 2

int numero;
int buttonState;

void setup(){
  Serial.begin(9600);
  pinMode(pulsador, INPUT);
  pinMode(rojo, OUTPUT);
  pinMode(azul, OUTPUT);
  pinMode(verde, OUTPUT);
}

void loop(){
  buttonState = digitalRead(pulsador);
  if (buttonState == HIGH){
    numero = random(0,3); 
    cambiar_color(numero);
    delay(500);
  }
  else {
  	digitalWrite(rojo, LOW);
    digitalWrite(verde, LOW);
    digitalWrite(azul, LOW);
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
  }  
}