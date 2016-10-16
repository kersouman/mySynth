/****************************************************************************/
/**
* \file meta_signal.h
* \brief Metadata in order to know the current state of our sound signal
* \author Thomas Chevet (KersouMan)
* \version 0.1
* \date 2016, September 21
*
* We need to know the current time position on our signal in addition to the
* current amplitude and the current frequency in order to give the next
* amplitude for our signal.
*/
/****************************************************************************/

#ifndef MY_SYNTH_META_SIGNAL_H
#define MY_SYNTH_META_SIGNAL_H

typedef struct Meta_signal {
    unsigned long currentAmplitude : 24;
    unsigned long currentFrequency : 24;
    unsigned long currentIncrement : 24;
};

extern struct Meta_signal meta_signal;

#endif //MY_SYNTH_META_SIGNAL_H
