#include <Arduino.h>

int analogPin = A0;
int val = 0;
int ledPin = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  val = analogRead(analogPin);
  float voltage = 5.0 * val / 1024;
  Serial.println(voltage);
  delay(100);
  if(voltage > 1.5) {
    ledPin = 13;
  }
  else {
    ledPin = 11;
  }
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, HIGH);
}