/* This is the frist state that sets the movement of the the robot to forward.
   It will go forward until the button is pressed, thus going to the next movement state.
*/
void state1Setup() {

  platformForward();
  state = 1;
}

void state1() {

  //Checks to see if the button is pressed to end the current movement and begin the next movement.
  int button = digitalRead(buttonPin);
  if (button == HIGH) {
    platformStop();
    delay(500);
    //Moves the robot backwards for half a second, then stops to give room for the next turn.
    platformBackward();
    delay(500);
    platformStop();
    state2Setup();

  }

}
