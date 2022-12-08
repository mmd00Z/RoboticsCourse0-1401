/*
  This program prints the distance between the sensor and the obstacles in the serial monitor!
*/

#define SRF05 4  // define trig pin on pin 4

void setup() {
  // begin the serial connection whit 9600 bit/s speed
  Serial.begin(9600);
}



void loop() {
  float d = calculateDistance(SRF05);
  if (d > 400 || d < 3)
  {
    Serial.println("distance out of the range(3- 400 cm)");
    return;
  }
  Serial.print(d);
  Serial.println(" cm");
  delay(200);
}

float calculateDistance(uint8_t pin)
{
  long duration = 0;

  // send pulse whit 10 microseconds pulse duration
  pinMode(pin, OUTPUT);
  digitalWrite(pin, HIGH);
  delayMicroseconds(10);
  digitalWrite(pin, LOW);

  pinMode(pin, INPUT);
  // Getting the return time of the sound reflection
  duration = pulseIn(pin, HIGH);
  // d = v . t 
  return duration * .0343 / 2.0;
}
