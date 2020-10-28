const int button = 3;
int second = LOW;
int hold = 0;
int single = 0;
long startTime = 0;
long lastSwitchTime = 0;


void setup() {
  pinMode(button, INPUT);
  Serial.begin(9600);
  Serial.println("Click the button once or twice, but do not hold down.");
}

void loop() {

  int first = digitalRead(button);

  //CHECK THE FIRST PRESS
  if (first == HIGH && second == LOW) {
    startTime = millis();
  }

  //CHECK HOW LONG THE PRESS IS DOWN 
  if (first == HIGH && second == HIGH) {
    if ((millis() - startTime) > 500) {
      hold = 1;
    }
  }

  //CHECK WHEN PRESS IS RELEASED
  if (first == LOW && second == HIGH) {
    if (((millis() - startTime) > 50) && hold != 1) {
      onRelease();
    }
    if (hold == 1) {
      delay(1800);
      Serial.println("Hey, I said don't hold the the button down, try again !");
      hold = 0;      
    }
  }
  
  second = first;
  if (single == 1 && (millis() - lastSwitchTime) > 500) {
    Serial.println("Single Click!");
    single = 0;
  }
}
//METHOD TO CHECK WHETHER BUTTON WAS PRESSED AFTER FIRST BUTTON PRESS
void onRelease() {

  if ((millis() - lastSwitchTime) >= 500) {
    single = 1;
    lastSwitchTime = millis();
    return;
  }

  if ((millis() - lastSwitchTime) < 500) {
    Serial.println("Double Click!");
    single = 0;
    lastSwitchTime = millis();
  }
}
