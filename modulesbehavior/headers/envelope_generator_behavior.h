/****************************************************************************/
/**
* \file envelope_generator_behavior.h
* \brief The envelope generator module behavior
* \author Thomas Chevet (KersouMan)
* \version 0.1
* \date 2016, September 6
*
* The envelope generator module provides a signal which shapes the sound in
* four times: attack, decay, sustain, release.
* This library provides the behavior of the envelope generator module.
*/
/****************************************************************************/

#ifndef DEF_ENVELOPE_GENERATOR_BEHAVIOR
#define DEF_ENVELOPE_GENERATOR_BEHAVIOR

/**
* The structure containing the information on the attack part of the envelope
*/
typedef struct Attack {
    unsigned short attackType : 2;
    /**
    * The type of curve used:
    * 00 for exponential
    * 01 for linear
    * 10 for inverted exponential
    * 11 for inverted linear
    */
    unsigned short attackTimeCaliber : 1;
    /**
    * The time caliber used:
    * 0 for millisecond
    * 1 for second
    */
    unsigned int attackDuration : 10;
    /**
    * The duration of the attack phase
    */
};

/**
* The structure containing the information on the decay part of the envelope
*/
typedef struct Decay {
    unsigned short decayType : 2;
    /**
    * The type of curve used is on the same pattern as the attack part
    */
    unsigned short decayTimeCaliber : 1;
    /**
    * The time caliber used is on the same pattern as the attack part
    */
    unsigned int decayDuration : 10;
    /**
    * The duration of the decay phase
    */
};

/**
* The structure containing the information on the release part of the envelope
*/
typedef struct Release {
    unsigned short releaseType : 2;
    /**
    * The type of curve used is on the same pattern as the attack part
    */
    unsigned short releaseTimeCaliber : 1;
    /**
    * The time caliber used is on the same pattern as the attack part
    */
    unsigned int releaseDuration : 10;
    /**
    * The duration of the release phase
    */
};

/**
* The structure containing the information on the sustain part of the envelope
*/
typedef struct Sustain {
    unsigned short sustainOn : 1;
    /**
    * A boolean to know the status of the sustain phase, on or off
    */
    unsigned int sustainLevel : 10;
    /**
    * The level, in percent of the max level, at which the signal stabilizes
    */
};

#endif