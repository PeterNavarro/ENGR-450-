/* Author: Peter Navarro and Corey Mendonca
 * Date: 9/4/2020
 * Milestone 1 solution
 * Implement 3 states, waiting, playing , playing pending
 * Implement two tunes to be played.
 */


// Golabl variables used within each class
int state;
int tunePlaying;
int tunePending;
const int button1pin = 2;
const int button2pin = 3;
long tuneStartTime;
int nextNoteTime;
const int buzzPin = 8;



void setup() {

  state1Setup(); 
  //Initalizes the buttons to the ports they are connected to on the arduino.
  pinMode(button1pin, INPUT);
  pinMode(button2pin, INPUT);
}
void loop() {

  //Basic loop structure that allows the arudino to continiously run through the program.
  //Loop structure is unchanged except you can add more states if needed.
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
  }

}
