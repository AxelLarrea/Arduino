#include <Servo.h>

int cont = 0, grado;
Servo servoMotor; 

void setup() {
  Serial.begin(9600);
  servoMotor.attach(8);
}
 
void loop() {
  servoMotor.write(0);
  delay(1000);
  grado = random(0, 180);
  //Serial.println(grado);
  servoMotor.write(grado);
  cont += 1;
  delay(1000);
  
  if (cont == 3){
    cont = 0;
    Serial.print("Ultima posicion: ");
    Serial.println(grado);
    
    // Desplazamos 0º
    servoMotor.write(0);
    delay(2000);
	
    // Desplazamos 180º
    servoMotor.write(180);
    delay(2000);
    
    // Desplazamos 90º
    servoMotor.write(90);
    delay(2000);
  }
}