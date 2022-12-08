/*
  This program detects the movement of living organisms through their body heat. 
  Whenever someone moves, the LED lights up!
*/


#define PIR 8   // IR sensor PIR on pin 8
#define LED 13  // led on pin 13

void setup() {
  // begin the serial connection whit 9600 bit/s speed
  Serial.begin(9600);

  // set PIR as input
  pinMode(PIR, INPUT);
  // set led as output
  pinMode(LED, OUTPUT);
}

void loop() {
  int sensor_val = digitalRead(PIR); // read sensor value

  digitalWrite(LED, sensor_val); // Set value to the LED according to the value of the sensor

  // When motion is detected, the sensor output becomes 1
  if (sensor_val) 
  { 
    Serial.println("Motion detected");
    while (sensor_val)  // Wait until the pin becomes 0
    {
      sensor_val = digitalRead(PIR); // update sensor value
    }
  }
}
