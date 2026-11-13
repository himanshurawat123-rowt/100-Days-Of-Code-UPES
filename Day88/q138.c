/*
Q138: Print all enum names and integer values using a loop.

Sample Test Cases:
Input 1:
No input
Output 1:
RED=0
YELLOW=1
GREEN=2
*/

#include <stdio.h>

// Define enum for TrafficLight
enum TrafficLight {
    RED,
    YELLOW,
    GREEN
};

int main() {
    // Array of string names corresponding to the enum values
    const char *lightNames[] = {
        "RED",
        "YELLOW",
        "GREEN"
    };

    // Loop from RED (0) to GREEN (2)
    for (int i = RED; i <= GREEN; i++) {
        printf("%s=%d\n", lightNames[i], i);
    }

    return 0;
}
