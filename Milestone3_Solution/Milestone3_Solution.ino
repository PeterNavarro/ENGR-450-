/* Authors: Peter Navarro and Corey Mendonca
 * Date: 9/18/2020
 * Milestone 3 Solution
 * Implement different movement states to guide the robot to the blocks, grab one, and proceed to the opposite bin
 */

#include <Servo.h>

const int leftA =  2;      // Left Motor A pin
const int leftB =  3;      // Left Motor B pin
const int rightA =  6;     // Right Motor A pin
const int rightB =  7;
const int buttonPin = 4;  // Right Motor B
//This is just a base numnber for how close we want the
//the robot to get to each wall
int x = 7;
int state = 0;             // variable to hold current state
const int turn90 = 1000;   //set variable to turn the robot 90 degrees in either direction.
int startTime;
//Pin numbers for the servo
const int trigPin = 10;
const int echoPin = 11;
Servo myservo;

//
void setup() {
  pinMode(leftA, OUTPUT);
  pinMode(leftB, OUTPUT);
  pinMode(rightA, OUTPUT);
  pinMode(rightB, OUTPUT);
  pinMode(buttonPin, INPUT);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  myservo.attach(9);
  myservo.write(150);
  Serial.begin(9600);
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
    case 3:
      state3();
      break;
    case 4:
      state4();
      break;
    case 5:
      state5();
      break;
    case 6:
      state6();
      break;
    case 7:
      state7();
      break;
    case 8:
      state8();
      break;
    case 9:
      state9();
      break;

  }
}
