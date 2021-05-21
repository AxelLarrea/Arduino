#define trigPin  12
#define echoPin  11
#include <LiquidCrystal.h>


long duration, cm, inches;
LiquidCrystal lcd(10, 9, 7, 6, 5, 4);

void setup() {
  lcd.begin(16, 2);
  Serial.begin (9600);
  //Define inputs and outputs
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
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
  lcd.clear();
  if (cm > 200 && cm < 300){
    lcd.setCursor(0,0);
    lcd.print("Distancia: ");
    lcd.print(cm);
    lcd.print("cm");
    lcd.setCursor(0,1);
    lcd.print("Proximo");
    delay(500);
  }
  else if (cm > 100 && cm <= 200){
    lcd.setCursor(0,0);
    lcd.print("Distancia: ");
    lcd.print(cm);
    lcd.print("cm");
    lcd.setCursor(0,1);
    lcd.print("Cerca");
    delay(500);
  }
  else if (cm >= 1 && cm <= 100){
    lcd.setCursor(0,0);
    lcd.print("Distancia: ");
    lcd.print(cm);
    lcd.print("cm");
    lcd.setCursor(0,1);
    lcd.print("Muy cerca");
    delay(500); 
  }
  lcd.clear();
  delay(200);
}