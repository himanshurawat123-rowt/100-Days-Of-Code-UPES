/*
Q132: Define an enum for traffic lights (RED, YELLOW, GREEN) 
and print 'Stop', 'Wait', or 'Go' based on its value.

Sample Test Cases:
Input 1:
GREEN
Output 1:
Go
*/

#include <stdio.h>
#include <string.h>

// Define enum for TrafficLight
enum TrafficLight {
    RED,
    YELLOW,
    GREEN,
    INVALID
};

int main() {
    char input[20];

    // Read traffic light string from user
    if (scanf("%19s", input) != 1) {
        return 0;
    }

    enum TrafficLight light = INVALID;

    // Map input string to the corresponding enum value
    if (strcmp(input, "RED") == 0) {
        light = RED;
    } else if (strcmp(input, "YELLOW") == 0) {
        light = YELLOW;
    } else if (strcmp(input, "GREEN") == 0) {
        light = GREEN;
    }

    // Evaluate enum state using a switch statement
    switch (light) {
        case RED:
            printf("Stop\n");
            break;
        case YELLOW:
            printf("Wait\n");
            break;
        case GREEN:
            printf("Go\n");
            break;
        default:
            printf("Invalid Light\n");
            break;
    }

    return 0;
}
