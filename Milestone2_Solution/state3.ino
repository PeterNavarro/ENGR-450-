/* This is the third state that sets the movement of the the robot to forward.
   It will go forward until the button is pressed, thus going to the next movement state.
*/

void state3Setup() {

  platformForward();
  startTime = millis();
  state = 3;
}

void state3() {

  // Variables to keep track of time, they are not needed with our current implementation in this state.
  unsigned long currentTime;
  int button = digitalRead(buttonPin);
  currentTime = millis();

  //Checks to see if the button is pressed to end the current movement and begin the next movement.
  if (button == HIGH) {
    platformStop();
    playtone1();
    //This delay is here so the tone would play before the robot began the next movement.
    delay(500);
    state4Setup();

  }
  // We had this bit of code implemnted incase the button was not triggered.
  // After 9 seconds the robot would stop movement and proceed to the next movement state.
  // Had some issues with this so we commented it out for our trials.

  //  if ((currentTime - startTime) > 9000) {
  //
  //    platformStop();
  //    playtone1();
  //    state4Setup();
  //
  //  }
}
