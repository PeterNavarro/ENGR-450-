/* This is the ninth state that sets the movement of the the robot to backward.
   It will move backwards then stop and proceed to the next movement state after the elasped time.
*/

void state9Setup() {
  platformBackward();
  startTime = millis();
  state = 9;
}

void state9() {

  unsigned long currentTime;
  currentTime = millis();
  //This if-statement waits for the elapsed time from when the robot starts the backwards movement
  //and stops the movement after the time after 3 seconds.
  
  if ((currentTime - startTime) > 3000) {
    platformStop();
    delay(100);
    //Moves the robot forwards for a fraction a second, then stops to give room for the next turn.
    platformForward();
    delay(100);
    platformStop();
    state10Setup();
  }

}
