/***************************************************************************/
/**
* \file oscillator_behavior.h
* \brief The oscillator module behavior
* \author Thomas Chevet (KersouMan)
* \version 0.1
* \date 2016, September 6
*
* The oscillator provides the soundwave which will be altered by the other
* modules.
* This library provides the behavior of the oscillator module.
*/
/***************************************************************************/

#ifndef DEF_OSCILLATOR_BEHAVIOR
#define DEF_OSCILLATOR_BEHAVIOR

/**
* The structure containing the information on the soundwave
*/
typedef struct Wave {
    unsigned short waveType : 2; 
    /**
    * The type of soundwave used:
    * 00 for sine wave
    * 01 for triangle wave
    * 10 for sawtooth wave
    * 11 for square wave
    */
    unsigned long frequency : 24;
    /**
    * The frequency of the signal
    */
    unsigned int pulseWidth : 8;
    /**
    * The pusle width in case of square wave
    */
}

#endif