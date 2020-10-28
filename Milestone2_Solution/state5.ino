/* This is the fifth state that sets the movement of the the robot to spin left
   It will spin 90 degrees then stop and proceed to the next movement state.
*/

void state5Setup() {
  platformSpinLeft();
  startTime = millis();
  state = 5;
}

void state5() {

  unsigned long currentTime;
  currentTime = millis();
  
  //This if-statement waits for the elapsed time from when the robot starts the movement 
  //and stops the movement after the time it takes to do a 90 degree turn.
  
  if ((currentTime - startTime) > turn90) {
    platformStop();
    state6Setup();
  }

}
