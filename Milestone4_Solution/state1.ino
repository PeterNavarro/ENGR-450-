/*
 * This state determines block color, plays the correct tone, then proceeds to state 2
 */


void state1Setup() {
  
  state = 1;
}

void state1() {

  //Checks the value given from the sensor
  //waits a few seconds before checking value.
  
  int val = analogRead(photoSensor);
  delay(500);
  
  //Determines color of  block based off the sensors value.
  //White block 
  if (val < 300) {
    Serial.println("Block is white");
    playtone1();
    delay(1000);
    state2Setup();
  }
  //Black Block
  if (val > 600 && val < 950) {
    Serial.println("Block is Black");
    playtone2();
    delay(1000);
    state2Setup();
  }
  //No block 
  if (val > 950) {
    Serial.println("No block");
    playtone3();
    state2Setup();
  }
  

}
