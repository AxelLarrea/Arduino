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
  if (luz <= 1017 && luz > 850) {
   	analogWrite(rojo, luz);
    delay(733);
    analogWrite(rojo, 0);
  }
  else if (luz <= 850 && luz > 700) {
  	analogWrite(azul, luz);
    delay(733);
    analogWrite(azul, 0);
    delay(733);
    analogWrite(rojo, luz);
    delay(733);
    analogWrite(rojo, 0);
  }
  else if (luz <= 700 && luz > 450) {
  	analogWrite(verde, luz);
    delay(733);
    analogWrite(verde, 0);
    delay(733);
    analogWrite(azul, luz);
    delay(733);
    analogWrite(azul, 0);
    delay(733);
    analogWrite(rojo, luz);
    delay(733);
    analogWrite(rojo, 0);
  }
  delay(733);
}