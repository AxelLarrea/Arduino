#define rojo 10
#define azul 7
#define PIR 2

int value;

void setup(){
  Serial.begin(9600);
  pinMode(rojo, OUTPUT);
  pinMode(azul, OUTPUT);
  pinMode(PIR, INPUT);
}

void loop(){
  value = digitalRead(PIR);
  if (value == HIGH){
  	digitalWrite(rojo, HIGH);
    digitalWrite(azul, LOW);
  }
  else {
  	digitalWrite(azul, HIGH);
    digitalWrite(rojo, LOW);
  }
  delay(1000);
}