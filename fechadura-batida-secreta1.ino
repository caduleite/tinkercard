#include <SoftwareSerial.h>
#include <Servo.h>
Servo servo9;

const int piezo = A0;
const int switchPin = 2;
const int yellowLed = 3;
const int greenLed = 4;
const int redLed = 5;

int knockVal;
int switchVal;

const int quietknock = 10;
const int loudKnock = 100;
boolean locked = false;
int numberOfknocks = 0;

void setup() {
  servo9.attach(9);
  pinMode(yellowLed, OUTPUT);
  pinMode(greenLed, OUTPUT);
  pinMode(redLed, OUTPUT);
  pinMode(switchPin, INPUT);
  Serial.begin(9600);
  digitalWrite(greenLed, HIGH);
  
  servo9.write(0);
  Serial.println("The bocx is unlocked!");
}
void loop() {
  if (locked == false) {
    switchVal = digitalRead(switchPin);
    if (switchVal == HIGH) {
      locked = true;
      digitalWrite(greenLed, LOW);
      digitalWrite(redLed, HIGH);
      servo9.write(90);
      Serial.println("The box locked!");
      delay(1000);
    }
  }
  if (locked == true) {
    knockVal = analogRead(piezo);
    
    if (numberOfknocks < 3 && knockVal > 0) {
      if (ckeckForknock(knockVal) == true) {
        numberOfknocks++;
      }
      Serial.print(3 - numberOfknocks);
      Serial.println("more knocks to go");
     }
    if (numberOfknocks >= 3) {
      	
      locked = false;
      servo9.write(0);
      delay(20);
      digitalWrite(greenLed, HIGH);
      digitalWrite(redLed, LOW);
      Serial.println("The box is unlocked!");
    }
  }
}

boolean ckeckForknock(int value) {
  if (value > quietknock && value < loudKnock) {
    	
    	digitalWrite(yellowLed, HIGH);
        delay(50);
        digitalWrite(yellowLed, LOW);
        Serial.println("Valid knock of value");
        Serial.println(value);
        return true;
      }
      else {
        Serial.print("Bad knock value");
        Serial.println(value);
        return false;
      }
     }