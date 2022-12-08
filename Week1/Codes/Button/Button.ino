/*
  This program controls the LED by button
*/


#define BUTTON 5  // IR button on pin 5
#define LED 13    // led on pin 13

void setup() {
  // set button as input pullup
  pinMode(BUTTON, INPUT_PULLUP);
  
  // set led as output
  pinMode(LED, OUTPUT);
}

void loop() {
  int button_val = digitalRead(BUTTON);

  digitalWrite(LED, !button_val);
}
