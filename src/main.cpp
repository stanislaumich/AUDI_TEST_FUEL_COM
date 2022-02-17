#include <Arduino.h>
//RAM:   [          ]   0.4% (used 9 bytes from 2048 bytes)
//Flash: [          ]   2.9% (used 924 bytes from 32256 bytes)

#define fpin A5

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(fpin, INPUT);
  Serial.begin(9600);
}

// the loop function runs over and over again forever
void loop() {
  int fl=analogRead(fpin);
  Serial.println(fl);
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
}