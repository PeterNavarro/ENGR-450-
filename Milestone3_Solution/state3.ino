/*
   The state is to drive forward from the start square and stop before the wall
   before proceeding to the next state.
*/

void state3Setup() {

  platformForward();
  state = 3;
  playtone1();
}

void state3() {
  float distance;
  float duration;
  //Continously check the distance to the first wall until you get x centimeters away
  do {
    digitalWrite(trigPin, LOW);
    delayMicroseconds(100);
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(100);
    digitalWrite(trigPin, LOW);
    duration = pulseIn(echoPin, HIGH);
    distance = (duration * .0343) / 2;
    Serial.print("Distance: ");
    Serial.println(distance);
    delay(100);

  } while (distance >= x);

  //once you reach x centimeters
  platformStop();
  delay(100);
  state4Setup();
}
