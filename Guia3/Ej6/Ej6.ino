#define trigPin  12
#define echoPin  11
#define buzzerPin 8


long duration, cm, inches;
 
void setup() {
  Serial.begin (9600);
  //Define inputs and outputs
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(buzzerPin, OUTPUT);
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
  noTone(buzzerPin);
  
  if (cm > 20 && cm <= 30){
    tone(buzzerPin, 440, 1000);
    delay(1500);
  }
  else if (cm > 12 && cm <= 20) {
  	tone(buzzerPin, 340, 1000);
    delay(1000);
  }
  else if (cm > 6 && cm <= 12) {
    tone(buzzerPin, 240, 1000);
    delay(500);
  }
  else if (cm > 2 && cm <= 6) {
    tone(buzzerPin, 140, 1000);
    delay(250);
  }
  else {
  	noTone(buzzerPin);
  }
}