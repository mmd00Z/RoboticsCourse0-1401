// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(12, OUTPUT);
  pinMode(7, INPUT_PULLUP);
  Serial.begin(9600);
}

// the loop function runs over and over again forever
void loop() {                 // wait for a second
  *
     if (digitalRead(7) == LOW)
     {
       digitalWrite(12, 1);
     }

}
