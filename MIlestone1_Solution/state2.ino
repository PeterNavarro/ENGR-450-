/* This is the playing state in our state diagram.
   The purpose of this is to playing the tune connected to either button.
   We have to check the buttons again to see if one was pressed while the tune is playing.
*/

void state2Setup() {

  //This gives us how long it has been since the program started
  //We store it in a varible to account for if another button is pressed during a tune.
  tuneStartTime = millis();
  state = 2;

}
void state2() {

  boolean done = false;
  //Check buttons to see if they were pressed after the tune begins playing.
  //This is the same process as in state 1.

  int button = digitalRead(button1pin);
  if (button == HIGH) {
    //This variable tunePending accounts for which tune to be played after the first tune is complete.
    tunePending = 1;
    //state3Setup is where the pending tune will be played.
    state3Setup();

  }
  //Works the same for the first button.
  int button1 = digitalRead(button2pin);
  if (button1 == HIGH) {
    tunePending = 2;
    state3Setup();

  }
  //Play tune until done depending on tunePlaying variable.
  //Plays tune one if button one is pressured.
  if (tunePlaying == 1) {
    //Takes the elapsed time and passes it through to the playTune method.
    done = playTune1(millis() - tuneStartTime);

  }
  //Plays tune two if button two is pressured.
  if (tunePlaying == 2) {
    done = playTune2(millis() - tuneStartTime);

  }
  //After tune is completed we enter back into the waiting state.
  if (done) {
    state1Setup();

  }





}
