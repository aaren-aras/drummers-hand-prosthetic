#include <Servo.h>
Servo Servo1;

// Connecting output signal from breadboard to Analog 0 
#define EMG_PIN 0 

// Connecting servo to Digital PWM 9 
#define SERVO_PIN 9

void setup() {
  // put your setup code here, to run once:
  Servo1.attach(SERVO_PIN);

}

void loop() {
  // put your main code here, to run repeatedly:
  int reading = analogRead(EMG_PIN);
  int angle = map(reading, 0, 1023, 0, 105);
  Servo1.write(angle);
}







