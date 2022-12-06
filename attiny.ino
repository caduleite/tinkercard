void setup()
{
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
}

void loop()
{
  // Red 
  digitalWrite(2, HIGH);
  delay(8000); 
  
  
  // Red - Green
  digitalWrite(2, LOW);
  digitalWrite(0, HIGH);
  delay(5000);
  
  // Green - Yelow - Red
   digitalWrite(0, LOW);
   digitalWrite(1, HIGH);
   delay(3000);
   digitalWrite(1, LOW);
}