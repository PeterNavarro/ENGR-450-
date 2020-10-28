/*
    This is the movement state that moves the robot forward to the next block.
*/


void state2Setup() {

  platformForward();
  state = 2;

}

void state2() {

  //move forward a few centimeters to the next block.
  //might need to adjust this delay value

  delay(150);
  platformStop();
  delay(500);
  state1Setup();


}
