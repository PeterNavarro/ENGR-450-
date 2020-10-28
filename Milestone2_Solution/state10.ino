/* This is the tenth state that sets the movement of the the robot to spin right
   It will spin 90 degrees then stop and proceed to the next movement state.
*/

void state10Setup() {
  platformSpinRight();
  startTime = millis();
  state = 10;
}

void state10() {
  //Variables for time 
  unsigned long currentTime;
  currentTime = millis();
  
  //This if-statement waits for the elapsed time from when the robot starts the movement
  //and stops the movement after the time it takes to do a 90 degree turn.
  
  if ((currentTime - startTime) > turn90) {
    platformStop();
    state11Setup();

  }

}
