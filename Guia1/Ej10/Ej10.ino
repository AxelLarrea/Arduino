#define trigPin  12
#define echoPin  11
#define rojo 10
#define azul 9
#define verde 8

long duration, cm, inches;
 
void setup() {
  Serial.begin (9600);
  //Define inputs and outputs
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(rojo, OUTPUT);
  pinMode(azul, OUTPUT);
  pinMode(verde, OUTPUT);
}
 
void loop(){
  digitalWrite(trigPin, LOW);
  delayMicroseconds(5);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
 
  duration = pulseIn(echoPin, HIGH);
 
  // Calculating the distance
  cm = duration*0.034/2;
  Serial.print("Distance: ");
  Serial.print(cm);
  Serial.println(" cm");
  
  if (cm > 250){
    analogWrite(rojo, 0);
    analogWrite(verde, 0);
    analogWrite(azul, 0);
  }
  else {
  	if (cm < 250 && cm >= 100) {
      analogWrite(rojo, 255);
      analogWrite(verde, 255);
    }
    else {
      if (cm < 100 && cm >= 50) {
      	analogWrite(rojo, 125);
        analogWrite(verde, 50);
      }
      else{
      	analogWrite(rojo, 255);
      }
    }
  }  
  delay(250);
}