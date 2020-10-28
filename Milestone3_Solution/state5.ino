/*
   This state is after the block has be required and it moving backwards to the
   start wall.
*/

void state5Setup() {
  platformBackward();
  startTime = millis();
  state = 5;
}
void state5() {
  
  unsigned long currentTime;
  currentTime = millis();
  // We can change this if we want but i have it reversing for 2.5 seconds after grabbing the block
  if ((currentTime - startTime) > 2500) {
    platformStop();
    delay(200);
    state6Setup();
  }

}
