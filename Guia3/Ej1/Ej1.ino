#include <Servo.h>
int grado;
Servo servoMotor;
 
void setup() {
  Serial.begin(9600);
  servoMotor.attach(8);
}
 
void loop() {
  grado = random(0, 180);
  Serial.println(grado);
  servoMotor.write(grado);
  delay(1000);
}