/****************************************************************************/
/**
* \file oscillator_behavior.c
* \brief The oscillator module behavior
* \author Thomas Chevet (KersouMan)
* \version 0.1
* \date 2016, September 6
*
* The oscillator provides the soundwave which will be altered by the other
* modules.
* This library provides the behavior of the oscillator module.
*/
/****************************************************************************/

#include "oscillator_behavior.h"
#include <stdlib.h>
#include "signal_properties.h"

/**
* We initialize the triangle or the sawtooth at half the amplitude of the
* wave. This amplitude is 0xffffff so we will have to return 0x7fffff.
*/
unsigned long reInitializeSignal() {
    return 0x7fffff;
}

unsigned long getNextAmplitudeTri(unsigned long currentAmplitude,
                unsigned long currentTime,
                unsigned long currentFrequency) {

}

unsigned long getNextAmplitudeSaw(unsigned long currentAmplitude,
                unsigned long currentTime,
                unsigned long currentFrequency) {

}

unsigned long getNextAmplitudeSquare(unsigned long currentAmplitude,
                unsigned long currentTime,
                unsigned long currentFrequency) {

}