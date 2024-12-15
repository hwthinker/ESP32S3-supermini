#include <Arduino.h>
int led = 48;

void setup() {
  // initialize digital pin led as an output
  pinMode(led, OUTPUT);
}

void loop() {
  digitalWrite(led, HIGH);   // turn the LED off
  delay(1000);               // wait for a second
  digitalWrite(led, LOW);    // turn the LED on
  delay(1000);               // wait for a second
}

