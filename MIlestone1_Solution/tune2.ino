/* This is all the code needed for tune 2.
   It includes the melody, note durations, and the playTune2 method to play the tune.
   The moajority of this is based off the toneMelody example class.
   This is the exact same class at tune1, expect having different melodies and note durations.
*/

#include "pitches.h"

int melody2[] = {
  NOTE_FS5, NOTE_FS5, NOTE_D5, NOTE_B4, NOTE_B4, NOTE_E5,
  NOTE_E5, NOTE_E5, NOTE_GS5, NOTE_GS5, NOTE_A5, NOTE_B5,
  NOTE_A5, NOTE_A5, NOTE_A5, NOTE_E5, NOTE_D5, NOTE_FS5,
  NOTE_FS5, NOTE_FS5, NOTE_E5, NOTE_E5, NOTE_FS5, NOTE_E5
};

// note durations: 4 = quarter note, 8 = eighth note, etc.:
int noteDurations2[] = {
  8, 8, 8, 4, 4, 4,
  4, 5, 8, 8, 8, 8,
  8, 8, 8, 4, 4, 4,
  4, 5, 8, 8, 8, 8
};
//Variables to keep track of note information.
int noteDuration2;
int nextNoteDuration2;
int thisNote2 = 1;

boolean playTune2(unsigned long elaspedTime) {
  // iterate over the notes of the melody:
  // This if-statement makes sure the elapsedTIme is always greater than the nextNoteTime.
  // This allows the notes to be played until the variable thisNote reaches the number of notes in the tune.
  if (elaspedTime > nextNoteTime) {
    // to calculate the note duration, take one second divided by the note type.
    //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.

    int noteDuration2 = 1000 / noteDurations2[thisNote2];
    tone(8, melody2[thisNote2], noteDuration2);
    thisNote2++;

    // to distinguish the notes, set a minimum time between them.
    // the note's duration + 30% seems to work well
    int pauseBetweenNotes = noteDuration2 * 1.30;
    nextNoteTime = nextNoteTime + pauseBetweenNotes + noteDuration2;
    
    //This makes sure only the correct number of notes is played for each tune.
    if (thisNote2 > 22) {
      //Resets the values for the tune for the next time a button is pressed and the next tune is played.
      nextNoteTime = 0;
      thisNote2 = 0;
      return true;

    }
  }
  return false;
}
