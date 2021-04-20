#define trigPin  12
#define echoPin  11
#define rojo 10

long duration, cm, inches;
 
void setup() {
  Serial.begin (9600);
  //Define inputs and outputs
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(rojo, OUTPUT);
}
 
void loop(){
  int valor = 0;
  digitalWrite(trigPin, LOW);
  delayMicroseconds(5);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
 
  duration = pulseIn(echoPin, HIGH);
 
  // Calculating the distance
  cm= duration*0.034/2;
  Serial.print("Distance: ");
  Serial.print(cm);
  Serial.println(" cm");
  
  if (cm > 25){
    valor = 0;
  }
  else {
  	if (cm < 25 && cm >= 10) {
      valor = 64;
    }
    else {
      if (cm < 10 && cm >= 5) {
      	valor = 128;
      }
      else{
      	valor = 255;
      }
    }
  }
  
  analogWrite(rojo, valor);
  
  delay(250);
}