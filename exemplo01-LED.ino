/*
* Projeto 1 – Acender LEDs ao mesmo tempo.
*
* Criado em: 18/09/2021
* Autor : Carlos Eduardo
* Acende LEDs ao mesmo tempo*/

int LED_RED = 5;
int LED_GREEN = 7;

void setup()
{
  pinMode(LED_RED, OUTPUT);
  pinMode(LED_GREEN, OUTPUT);
}

void loop()
{
  digitalWrite(LED_RED, HIGH);
  delay(1000); 
  digitalWrite(LED_GREEN, HIGH);
  delay(1000); 
}