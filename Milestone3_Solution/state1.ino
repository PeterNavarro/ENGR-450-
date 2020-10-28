/*
   The state is to drive forward from the start square and stop before the wall
   before proceeding to the next state.
*/

void state1Setup() {

  platformForward();
  state = 1;
  playtone1();
}

void state1() {
  float distance;
  float duration;

  //Continously check the distance to the first wall until you get x centimeters away
//  do {
//
//    digitalWrite(trigPin, LOW);
//    delayMicroseconds(100);
//    digitalWrite(trigPin, HIGH);
//    delayMicroseconds(100);
//    digitalWrite(trigPin, LOW);
//    duration = pulseIn(echoPin, HIGH);
//    distance = (duration * .0343) / 2;
//    Serial.print("Distance: ");
//    Serial.println(distance);
//    delay(100);
//
//  } while (distance <= 25);

  //stop once you reach x centimeters away from the wall.

 //We had to use this as a starting motion because our robot could not fit sideways in the start square
  delay(2000);
  platformStop();
  delay(300);
  state2Setup();
}
