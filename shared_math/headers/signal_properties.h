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

#ifndef DEF_SIGNAL_PROPERTIES
#define DEF_SIGNAL_PROPERTIES

typedef struct Frequency_properties {
    unsigned float frequency;
    unsigned float period;
    unsigned int triangle_increment : 24;
    unsigned int sawtooth_increment : 24;
};

extern Frequency_properties frequencies[];

#endif