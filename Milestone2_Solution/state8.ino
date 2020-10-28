/* This is the eighth state that sets the movement of the the robot to forward.
   It will go forward until the button is pressed, thus going to the next movement state.
*/
 
void state8Setup() {
  platformForward();
  startTime = millis();
  state = 8;
}

void state8() {
  //Varible to account for time.
  unsigned long currentTime;
  currentTime = millis();
  int button = digitalRead(buttonPin);
  
  //This if-statement was implemented incase the button was not triggered.
  //After 12 seconds the robot will stop movement, play the tone, and proceed to the next movement state.
  
  if ((currentTime - startTime) > 12000) {
    platformStop();
    playtone2();
    delay(500);
    state9Setup();

  }
  //Checks to see if the button is pressed to end the current movement and begin the next movement.
  if (button == HIGH) {
    platformStop();
    playtone2();
    //This delay is here so the tone would play before the robot began the next movement.
    delay(500);
    state9Setup();

  }

}
