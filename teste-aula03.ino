/*
* Projeto 1 – Acender Led 
*
* Criado em: 18/09/2021
* Autor : Carlod Eduardo
* Acende um LED por dois segundo, e depois apaga por um segundo*/

int LED = 5;
void setup()
{
  pinMode(LED, OUTPUT);
}

void loop()
{
  digitalWrite(LED, HIGH);
  delay(2000); // Acende LED por dois segundo.
  digitalWrite(LED, LOW);
  delay(1000); // Apaga LED por um segundo.
}