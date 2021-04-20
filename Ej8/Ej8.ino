#define LDR A5
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

void loop() 
{ 
  int luz = analogRead(LDR);
  Serial.print("Luminosidad ");
  Serial.println(luz);
  for (int i=0; i<=6; i++){
  	cambiar_color(i, luz);
    delay(500);
  }
}

void cambiar_color(int numero, int luz){
  switch(numero){
  	case 0: //rojo
    	analogWrite(rojo, luz);
        analogWrite(verde, 0);
        analogWrite(azul, 0);
    	break;
    case 1: //verde
    	analogWrite(rojo, 0);
        analogWrite(verde, luz);
        analogWrite(azul, 0);
    	break;
    case 2: //azul
    	analogWrite(rojo, 0);
        analogWrite(verde, 0);
        analogWrite(azul, luz);
    	break;
    case 3: //amarillo
    	analogWrite(rojo, luz);
        analogWrite(verde, luz);
        analogWrite(azul, 0);
    	break;
    case 4: //violeta
    	analogWrite(rojo, luz);
        analogWrite(verde, 0);
        analogWrite(azul, luz);
    	break;
    case 5: //celeste
    	analogWrite(rojo, 0);
        analogWrite(verde, luz);
        analogWrite(azul, luz);
    	break;
    case 6: //blanco
    	analogWrite(rojo, luz);
        analogWrite(verde, luz);
        analogWrite(azul, luz);
    	break;
    
  }
  
}