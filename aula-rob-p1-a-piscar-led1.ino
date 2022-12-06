/*
* Projeto 1 – Pisca Led (delay)
*
* Criado em: 18/09/2021
* Autor : Carlos Eduardo
* Acende um LED por um segundo, e depois apaga pelo mesmo tempo, 
* repetidamente.
*/

int LED = 13;

void setup()
{
  pinMode(LED, OUTPUT);
}

void loop()
{
  digitalWrite(LED, HIGH);
  delay(3000); // LED fica 3 segundos aceso.
  digitalWrite(LED, LOW);
  delay(3000); // LED fica 3 segundos apagado.
}