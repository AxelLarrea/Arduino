#define rojo 9
#define azul 8
#define flexPin A0 
int red_value;
int blue_value;

void setup(){
  pinMode(rojo, OUTPUT);
  pinMode(azul, OUTPUT);
  Serial.begin(9600);   
}

void loop(){
  red_value = analogRead(flexPin)-1;
  Serial.println("Valor led rojo: " + String(red_value));               
  blue_value = map(red_value, 50, 300, 0, 255);
  Serial.println("valor led azul: " + String(blue_value));
  analogWrite(rojo, red_value);
  analogWrite(azul, blue_value);
  delay(100);                        
}