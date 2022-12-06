int potPin = A0; // Porta analógica.
int potValue = 0; // Valor a ser lido pelo Ponteciomentro.
int led = 9; 	  // Pino LED 9.

void setup()
{
  pinMode(led, OUTPUT); // Pino LED 9 saída.
}

void loop()
{
  potValue = analogRead(potPin); // Leitura do potenciomentro.
  analogWrite(led, potValue/4);  // controle do brilho.
  delay(10);					 // Aguarda 10 ms.
}
