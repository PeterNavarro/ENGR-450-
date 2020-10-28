/*
   This state is going to be the main function for grabbing the block off the wall
*/

void state4Setup() {

  state = 4;
  playtone1();
}

void state4() {
  //starts the servo movement to make the initial grab on the block
  int pos;
  myservo.write(107);
  delay(600);
  state5Setup();
}
