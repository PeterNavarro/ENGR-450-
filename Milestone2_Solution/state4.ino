/* This is the forth state that sets the movement of the the robot to backward.
   It will move backwards then stop and proceed to the next movement state after the elasped time.
*/
void state4Setup() {
  platformBackward();
  startTime = millis();
  state = 4;
}

void state4() {

  unsigned long currentTime;
  currentTime = millis();

  //This if-statement waits for the elapsed time from when the robot starts the backwards movement
  //and stops the movement after the time after 3 seconds.
  
  if ((currentTime - startTime) > 3000) {
    platformStop();
    state5Setup();
  }

}
