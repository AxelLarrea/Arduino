#define rojo 8
#define pot A0

void setup()
{
  Serial.begin(9600);
  pinMode(rojo, OUTPUT);
}

void loop()
{
  int valor = analogRead(pot); 
  Serial.println(valor);
  analogWrite(rojo, valor);
  delay(1000);
  /*valor = 50;
  analogWrite(rojo, valor);
  delay(1000);
  valor = 100;
  analogWrite(rojo, valor);
  delay(1000);
  valor = 150;
  analogWrite(rojo, valor);
  delay(1000);
  valor = 200;
  analogWrite(rojo, valor);
  delay(1000);
  valor = 250;
  analogWrite(rojo, valor);
  delay(1000);*/
}