/*
 * This code is for servo motor controlled by Arduino uno
 * Abdullah Al Mamun,EWU(EEE)
 * Dhaka,Bangladesh.
 * 26/11/2016
 */
#include <Servo.h>

Servo mamun;  // create servo object to control a servo

int pos = 0;    // variable to store the servo position

void setup() {
  mamun.attach(9);  // attaches the servo on pin 9 to the servo object. This pin is enable to PWM
}

void loop() {
  for (pos = 0; pos <= 180; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    mamun.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
  for (pos = 180; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
    mamun.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
}
