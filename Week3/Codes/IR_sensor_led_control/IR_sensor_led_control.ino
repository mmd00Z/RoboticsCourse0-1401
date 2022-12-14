/*
  This program controls the LED by using the output value of the infrared sensor.
  If we bring the light-reflecting object close to the sensor, the LED will turn on!
*/


#define RECIVER 7 // IR sensor reciver on pin 7
#define LED 13    // led on pin 13

void setup() {
  // set resiver as input
  pinMode(RECIVER, INPUT);
  // set led as output
  pinMode(LED, OUTPUT);
}

void loop() {
  int sensor_val = digitalRead(RECIVER);

  if (sensor_val == 0)
  {
    digitalWrite(LED, 1);
  }
  else
  {
    digitalWrite(LED, 0);
  }

  // set led logical state --> not sensor_val
  // digitalWrite(LED, !sensor_val);
}
