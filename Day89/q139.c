/*
Q139: Show that enums store integers by printing assigned values.

Sample Test Cases:
Input 1:
No input
Output 1:
SUCCESS=0, FAILURE=1, TIMEOUT=2
*/

#include <stdio.h>

// Define enum; C automatically assigns integer constants starting from 0
enum Status {
    SUCCESS,
    FAILURE,
    TIMEOUT
};

int main() {
    // Store enum constants in standard int variables to demonstrate integer storage
    int s = SUCCESS;
    int f = FAILURE;
    int t = TIMEOUT;

    // Print using %d integer format specifier
    printf("SUCCESS=%d, FAILURE=%d, TIMEOUT=%d\n", s, f, t);

    return 0;
}
