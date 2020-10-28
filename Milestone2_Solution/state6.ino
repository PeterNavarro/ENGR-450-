/* This is the sixth state that sets the movement of the the robot to forward.
   It will go forward until the button is pressed, thus going to the next movement state.
*/

void state6Setup() {
  platformForward();
  startTime = millis();
  state = 6;
}

void state6() {

  //Checks to see if the button is pressed to end the current movement and begin the next movement.
  int button = digitalRead(buttonPin);
  if (button == HIGH) {

    platformStop();
    delay(500);
    //Moves the robot backwards for half a second, then stops to give room for the next turn.
    platformBackward();
    delay(300);
    platformStop();
    state7Setup();
  }

}
