/*This is the waiting state on our state diagram.
 *Read buttons and switch to playing state if button is pressed
 */

void state1Setup() {

  state = 1;
  // read buttons

}
//Represents what happens in state one
void state1() {

  // initalize the first button
  int button = digitalRead(button1pin);

  //Check if first button is pressed
  if (button == HIGH) {
    //if button one is pressed, we update the variable tunePlaying to 1

    tunePlaying = 1;
    state2Setup();

  }

  //Intialize the second button
  int button1 = digitalRead(button2pin);
  
  //Check if second button is pressed
  if (button1 == HIGH) {
    //if button two is pressed, we update the variable tunePlaying to 2
    tunePlaying = 2;
    state2Setup();

  }
  //The numbers correlate with the button pressed i.e 1 is button 1 and 2 is button 2.
}
