#include "../../src/shared_data/signal_properties.h"
#include <stdio.h>

int main() {
    int index = 0;
    double frequency = 0.0;

    index = getFrequencyIndex(0.05);
    frequency = frequencies[index].frequency;
    printf("We try to get the index of 0.05 Hz\n");
    printf("We expect the index 0\n");
    printf("Index: %d\n", index);
    printf("We now want to know the frequency associated\n");
    printf("We expect the frequency 0.05 Hz\n");
    printf("Frequency: %f\n\n", frequency);

    index = getFrequencyIndex(0.1);
    frequency = frequencies[index].frequency;
    printf("We try to get the index of 0.1 Hz\n");
    printf("We expect the index 1\n");
    printf("Index: %d\n", index);
    printf("We now want to know the frequency associated\n");
    printf("We expect the frequency 0.1 Hz\n");
    printf("Frequency: %f\n\n", frequency);

    index = getFrequencyIndex(1000.0);
    frequency = frequencies[index].frequency;
    printf("We try to get the index of 1000 Hz\n");
    printf("We expect the index 19999\n");
    printf("Index: %d\n", index);
    printf("We now want to know the frequency associated\n");
    printf("We expect the frequency 1000 Hz\n");
    printf("Frequency: %f\n\n", frequency);

    index = getFrequencyIndex(5674.15);
    frequency = frequencies[index].frequency;
    printf("We try to get the index of 5674.15 Hz\n");
    printf("We expect the index 113482\n");
    printf("Index: %d\n", index);
    printf("We now want to know the frequency associated\n");
    printf("We expect the frequency 5674.15 Hz\n");
    printf("Frequency: %f\n\n", frequency);

    index = getFrequencyIndex(18568.65);
    frequency = frequencies[index].frequency;
    printf("We try to get the index of 18568.65 Hz\n");
    printf("We expect the index 371372\n");
    printf("Index: %d\n", index);
    printf("We now want to know the frequency associated\n");
    printf("We expect the frequency 18568.65 Hz\n");
    printf("Frequency: %f\n\n", frequency);

    index = getFrequencyIndex(0.03);
    frequency = frequencies[index].frequency;
    printf("We try to get the index of 0.03 Hz\n");
    printf("We expect the index 0\n");
    printf("Index: %d\n", index);
    printf("We now want to know the frequency associated\n");
    printf("We expect the frequency 0.05 Hz\n");
    printf("Frequency: %f\n\n", frequency);

    index = getFrequencyIndex(0.06);
    frequency = frequencies[index].frequency;
    printf("We try to get the index of 0.06 Hz\n");
    printf("We expect the index 0\n");
    printf("Index: %d\n", index);
    printf("We now want to know the frequency associated\n");
    printf("We expect the frequency 0.05 Hz\n");
    printf("Frequency: %f\n\n", frequency);

    index = getFrequencyIndex(0.07);
    frequency = frequencies[index].frequency;
    printf("We try to get the index of 0.07 Hz\n");
    printf("We expect the index 1\n");
    printf("Index: %d\n", index);
    printf("We now want to know the frequency associated\n");
    printf("We expect the frequency 0.1 Hz\n");
    printf("Frequency: %f\n\n", frequency);

    index = getFrequencyIndex(5236.64);
    frequency = frequencies[index].frequency;
    printf("We try to get the index of 5236.64 Hz\n");
    printf("We expect the index 104731\n");
    printf("Index: %d\n", index);
    printf("We now want to know the frequency associated\n");
    printf("We expect the frequency 5236.65 Hz\n");
    printf("Frequency: %f\n\n", frequency);

    index = getFrequencyIndex(5236.61);
    frequency = frequencies[index].frequency;
    printf("We try to get the index of 5236.62 Hz\n");
    printf("We expect the index 104730\n");
    printf("Index: %d\n", index);
    printf("We now want to know the frequency associated\n");
    printf("We expect the frequency 5236.6 Hz\n");
    printf("Frequency: %f\n\n", frequency);

    return 0;
}