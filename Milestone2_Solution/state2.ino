/* This is the second state that sets the movement of the the robot to spin left
 * It will spin 90 degrees then stop and proceed to the next movement state.
 */
void state2Setup() {
  
  platformSpinLeft();
  startTime = millis();
  state = 2;
}

void state2() {
  
  unsigned long currentTime;
  currentTime = millis();
  
  //This if-statement waits for the elapsed time from when the robot starts the movement 
  //and stops the movement after the time it takes to do a 90 degree turn.
  
  if ((currentTime - startTime) > turn90) {
    platformStop();
    delay(500);
    state3Setup();
  }

}
