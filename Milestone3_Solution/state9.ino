//This was added as an addtional state in case the block gets suck on the rail before the bin

void state9Setup() {
  platformBackward();
  state = 9;
  playtone1();
}

void state9() {

  //The robot backs up after releasing the block, closes the grabber, then goes forward to hit the block in

  delay(500);
  platformStop();
  delay(250);
  myservo.write(120);
  delay(400);
  platformForward();
  delay(1200);
  platformStop();
  state = 10;


}
