/*
  This program detects the brightness of the object by reading the value of the infrared sensor!
*/


#define RECIVER 7 // IR sensor reciver on pin 7

void setup() {
  // begin the serial connection whit 9600 bit/s speed
  Serial.begin(9600);

  // set resiver as input
  pinMode(RECIVER, INPUT);
}

void loop() {
  // get sensor value
  int sensor_val = digitalRead(RECIVER);

  // print color on serial monitor
  if(sensor_val == 1)
  {
    Serial.println("Dark or nothing");
  }
  else
  {
    Serial.println("Light");
  }

  // other way:
  // Serial.println((sensor_val)? "Dark or nothing":"Light");

  delay(100);
}
