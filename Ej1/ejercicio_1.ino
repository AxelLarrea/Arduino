int verde = 9;
#define rojo 10

void setup()
{
  Serial.begin(9600);
  pinMode(8, OUTPUT);
  pinMode(verde, OUTPUT);
  pinMode(rojo, OUTPUT);
}

void loop()
{
  digitalWrite(verde, HIGH);
  delay(500); // Wait for 1000 millisecond(s)
  digitalWrite(verde, LOW);
  delay(500); // Wait for 1000 millisecond(s)
  digitalWrite(8, HIGH);
  delay(500); // Wait for 1000 millisecond(s)
  digitalWrite(8, LOW);
  delay(500); // Wait for 1000 millisecond(s)
  digitalWrite(rojo, HIGH);
  delay(500); // Wait for 1000 millisecond(s)
  digitalWrite(rojo, LOW);
  delay(500); // Wait for 1000 millisecond(s)
}
