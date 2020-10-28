/*
   This state is to turn the robot left after the robot reversed from state 5
*/
void state6Setup() {

  platformSpinLeft();
  startTime = millis();
  state = 6;
  playtone1();
}
void state6() {

  unsigned long currentTime;
  currentTime = millis();

  //This if-statement waits for the elapsed time from when the robot starts the movement
  //and stops the movement after the time it takes to do a 90 degree turn.
  if ((currentTime - startTime) > turn90) {
    platformStop();
    delay(500);
    state7Setup();
  }

}
