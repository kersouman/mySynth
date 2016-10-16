/****************************************************************************/
/**
* \file meta_signal.c
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

#include "meta_signal.h"

Meta_signal meta_signal = {
    0x7fffffff,
    0,
    0
};