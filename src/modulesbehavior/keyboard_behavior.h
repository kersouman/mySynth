/****************************************************************************/
/**
* \file keyboard_behavior.h
* \brief The keyboard module behavior
* \author Thomas Chevet (KersouMan)
* \version 0.1
* \date 2016, October 15
*
* The keyboard module provides the frequency of the sound from the key that is
* pressed on the keyboard
*/
/****************************************************************************/

#ifndef MY_SYNTH_KEYBOARD_BEHAVIOR_H
#define MY_SYNTH_KEYBOARD_BEHAVIOR_H

typedef struct key_frequency {
    short key : 7;
    float frequency;
};

#endif