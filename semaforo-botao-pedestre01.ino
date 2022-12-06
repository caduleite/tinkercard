// C++ code
//
void setup()
{
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(5, INPUT);
  pinMode(10, OUTPUT);
}

void loop()
{
  // Acende o VERDE do CARRO
  digitalWrite(4, HIGH);
  digitalWrite(3, LOW);
  delay(2000); // Wait for 2000 millisecond(s)
  digitalWrite(11, LOW);
  digitalWrite(9, HIGH);
  delay(4000); // Wait for 4000 millisecond(s)
  if (digitalRead(5) == 0) {
    // Acende o VERMELHO do CARRO
    digitalWrite(9, LOW);
    digitalWrite(10, HIGH);
    delay(2000); // Wait for 2000 millisecond(s)
    // Acende o AMARELO do CARRO
    digitalWrite(10, LOW);
    digitalWrite(11, HIGH);
    digitalWrite(4, LOW);
    digitalWrite(3, HIGH);
    delay(3000); // Wait for 3000 millisecond(s)
  }
}