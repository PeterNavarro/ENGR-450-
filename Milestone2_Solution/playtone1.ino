//Function to play tone 1
void playtone1(){

  tone(8, 1000, 400);

}

//Function to play tone 2
void playtone2() {

  tone(8, 1500, 400);
  delay(800);
  noTone(8);
  tone(8, 1500, 400);
  delay(800);
  noTone(8);

}

//Function to play tone 3
void playtone3() {

  tone(8, 500, 400);
  delay(500);
  noTone(8);
  tone(8, 500, 400);
  delay(500);
  noTone(8);
  tone(8, 500, 400);
  delay(500);
  noTone(8);

}
