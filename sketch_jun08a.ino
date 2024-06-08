#include <Servo.h>

Servo frontr;  // create servo object to control a servo
Servo frontl;  // create servo object to control a servo
Servo pr;  // create servo object to control a servo


int frontrp = 0;  // analog pin used to connect the potentiometer
int frontlp = 1;  // analog pin used to connect the potentiometer
int prp = 2;  // analog pin used to connect the potentiometer


int val;    // variable to read the value from the analog pin
int val2;    // variable to read the value from the analog pin
int val3;    // variable to read the value from the analog pin


void setup() {
  frontr.attach(9);  // attaches the servo on pin 9 to the servo object
  frontl.attach(8);  // attaches t servo on pin 9 to the servo object
  pr.attach(10); 

}
void fw(int seconds)
{
  delay(1000);
  frontr.write(62);
  frontl.write(110);  
  delay(seconds);
  frontr.write(90);
  frontl.write(90);
  delay(seconds);
}

void bw(int secondsw)
{
  delay(1000);
  frontr.write(110);
  frontl.write(62);  
  delay(secondsw);
  frontr.write(90);
  frontl.write(90);
  delay(secondsw);
}

void loop() {
  delay(1000);
  pr.write(110);
  fw(600);
  pr.write(70); 
  bw(450);                 
}
