/* This is the eleventh and final state that sets the movement of the the robot to forward.
   It will go forward into the starting square and stop all movement.
*/
void state11Setup() {

  platformForward();
  startTime = millis();
  state = 11;
}

void state11() {
  // Variables for time
  unsigned long currentTime;
  currentTime = millis();

  //This if-statement waits for the elapsed time from when the robot starts the movement
  //and stops the movement after half a second, stoping the robot in the start square.
  if ((currentTime - startTime) > 500) {

    platformStop();
    playtone3();


  }
}
