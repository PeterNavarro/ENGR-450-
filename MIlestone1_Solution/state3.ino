/*This is the playing pending state in our state diagram.
 * The purpose of this state is to play the pending tune after a tune is finished.
 */

void state3Setup() {

  state = 3;
}
void state3() {
  
  //This state does the same playTune action that state 2 does. 
  //It passes the elapsed time to the playTune methods where the tunes are then played.
  
  boolean done = false;
  
  if (tunePlaying == 1) {
    done = playTune1(millis() - tuneStartTime);
  }
  if (tunePlaying == 2) {
    done = playTune2(millis() - tuneStartTime);

  }
  //This if-statement waits for the variable done to  be true to set the next tunePending variable to tunePlaying
  //Once done is true it means the tune is complete.
  if (done) {
    tunePlaying = tunePending;
    state2Setup();

  }

}
