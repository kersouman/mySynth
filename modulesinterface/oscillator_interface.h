#ifndef DEF_OSCILLATOR_INTERFACE
#define DEF_OSCILLATOR_INTERFACE

typedef struct Wave {
    unsigned short waveType : 2;    // Since we have sine, sawtooth, triangle and square we only need 4 values
    unsigned long frequency : 24;   // The frequency of the signal
    unsigned int pulseWidth : 8;    // Used only if we have a square signal
}

#endif