#define tilt 2
#define rojo 10

int cont = 1;

void setup(){
  Serial.begin (9600);
  pinMode(tilt, INPUT_PULLUP);
  pinMode(rojo, OUTPUT);
}

void loop(){
	if (digitalRead(tilt) == LOW) {
      Serial.println("Total de vibraciones: " + String(cont));
	  digitalWrite(rojo, HIGH);
      if (cont == 10){
        cont = 0;
      }
      cont += 1;
      delay(500);
      digitalWrite(rojo, LOW);
      delay(500);
    }
	else{
	  digitalWrite(rojo, LOW);
	}
}