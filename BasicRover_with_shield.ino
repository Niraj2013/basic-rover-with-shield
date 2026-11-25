
// Adafruit Motor shield library
// copyright Adafruit Industries LLC, 2009
// this code is public domain, enjoy!

#include <AFMotor.h>

AF_DCMotor motor(1);
AF_DCMotor othermotor(2);

void setup() {
  Serial.begin(9600);           // set up Serial library at 9600 bps
  Serial.println("Motor test!");
    motor.setSpeed(255); 
    othermotor.setSpeed(255);   
  
  // turn on motor
  motor.setSpeed(200);
  othermotor.setSpeed(200);
  motor.run(RELEASE);
  othermotor.run(RELEASE);

}
void backward(){
  motor.run(BACKWARD);
  othermotor.run(BACKWARD);
}
void forward(){
  motor.run(FORWARD);
  othermotor.run(FORWARD);
}
void right(){
  motor.run(FORWARD);
  othermotor.run(BACKWARD);
}
void left(){
  motor.run(BACKWARD);
  othermotor.run(FORWARD);
}
void loop() {
forward();
delay(1000);
backward();
delay(1000);
right();
delay(1000);
left();
delay(1000);
}


