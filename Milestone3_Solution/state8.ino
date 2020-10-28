/*
 * This is the last class that drops the block into the opposite bin once the robot is 
 * against the wall
 */
void state8Setup() {
  state = 8;
  playtone1();
}

void state8() {
  int pos = 0;
  //starts the servo movement in reverse which drops the block into the opposite bin 
  myservo.write(150);
  delay(500);
  state9Setup();
  
}
