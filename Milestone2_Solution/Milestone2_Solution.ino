/* Authors: Corey Mendonca and Peter Navarro 
 * Date: 9/18/2020
 * Milestone 2 Solution
 * Implement different movement states to guide the robot through the playing field.
 */
// constants won't change. Used here to
// set pin numbers:
const int leftA =  2;      // Left Motor A pin
const int leftB =  3;      // Left Motor B pin
const int rightA =  6;     // Right Motor A pin
const int rightB =  7;     // Right Motor B pin
const int buttonPin = 4;
int state = 0;             // variable to hold current state
const int turn90 = 550;   //set variable to turn the robot 90 degrees in either direction.
int startTime;  


void setup() {
  // set the digital pins as output:
  pinMode(leftA, OUTPUT);
  pinMode(leftB, OUTPUT);
  pinMode(rightA, OUTPUT);
  pinMode(rightB, OUTPUT);
  pinMode(buttonPin, INPUT);
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
    case 10:
      state10();
      break;
    case 11:
      state11();
      break;


      //  Add more states here following the pattern if needed
      // However, there need to be state functions defined or there will be
      // compiler errors
  }

}
