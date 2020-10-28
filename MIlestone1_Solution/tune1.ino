/* This is all the code needed for tune 1.
 * It includes the melody, note durations, and the playTune1 method to play the tune.
 * The moajority of this is based off the toneMelody example class.
 */

#include "pitches.h"
//notes in the melody:
int melody[] = {
  NOTE_C4, NOTE_G3, NOTE_G3, NOTE_A3, NOTE_G3, 0, NOTE_B3, NOTE_C4, NOTE_C4, 
  NOTE_G3, NOTE_G3, NOTE_A3, NOTE_G3, 0, NOTE_B3, NOTE_C4
};

//note durations: 4 = quarter note, 8 = eighth note, etc.:
int noteDurations[] = {
  4, 8, 8, 4, 4, 4, 4, 4,
  4, 8, 8, 4, 4, 4, 4, 4};
  
//Variables to keep track of note information.
int noteDuration;
int nextNoteDuration;
int thisNote = 1;

boolean playTune1(unsigned long elaspedTime) {
  // iterate over the notes of the melody:
  // This if-statement makes sure the elapsedTIme is always greater than the nextNoteTime.
  // This allows the notes to be played until the variable thisNote reaches the number of notes in the tune.
  if (elaspedTime > nextNoteTime) {
    
    // to calculate the note duration, take one second divided by the note type.
    //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
    noteDuration = 1000 / noteDurations[thisNote];
    tone(8, melody[thisNote], noteDuration);
    
    thisNote++;
    
    // to distinguish the notes, set a minimum time between them.
    // the note's duration + 30% seems to work well:
    int pauseBetweenNotes = noteDuration * 1.30;

    nextNoteTime = nextNoteTime + pauseBetweenNotes + noteDuration;
    
    //This makes sure only the correct number of notes is played for each tune.
    if (thisNote > 18) {
      //Resets the values for the tune for the next time a button is pressed and the next tune is played.
      nextNoteTime = 0;
      thisNote = 0;
      return true;
    }

  }
  return false;
}
