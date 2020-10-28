/* Authors: Corey Mendonca and Peter Navarro
   Date: 10/16/2020
   Milestone 4 Solution
   Implement different movement states to guide the robot along the blocks and determine the color of the block
   by playing a specfic tone
*/

#include <Servo.h>

const int leftA =  2;      // Left Motor A pin
const int leftB =  3;      // Left Motor B pin
const int rightA =  6;     // Right Motor A pin
const int rightB =  7;    // Right Motor B
int state = 0;             // variable to hold current state  
const int photoSensor = A0;
int blockCount;

void setup() {
  pinMode(leftA, OUTPUT);
  pinMode(leftB, OUTPUT);
  pinMode(rightA, OUTPUT);
  pinMode(rightB, OUTPUT);
  Serial.begin(9600);
  pinMode(photoSensor, INPUT);
  state1Setup();

}


void loop() {
  // This loop simply calls the state function for the current State
  switch (state) {
    case 1:
      state1();
      break;
    case 2:
      state2();
      break;

  }
}
