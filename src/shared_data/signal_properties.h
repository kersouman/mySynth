/****************************************************************************/
/**
* \file signal_properties.h
* \brief A table referencing the frequencies and their attributes
* \author Thomas Chevet (KersouMan)
* \version 0.1
* \date 2016, September 16
*
* The signal properties module provides a table where the frequency and the
* increments associated for the different types of signal are provided
*/
/****************************************************************************/

#ifndef MY_SYNTH_SIGNAL_PROPERTIES_H
#define MY_SYNTH_SIGNAL_PROPERTIES_H

typedef struct Frequency_properties {
    double frequency;
    unsigned int triangle_increment : 24;
    unsigned int sawtooth_increment : 24;
    double period;
} Frequency_properties_t;

extern struct Frequency_properties frequencies[];

unsigned int getFrequencyIndex(double frequency);

#endif //MY_SYNTH_SIGNAL_PROPERTIES_H