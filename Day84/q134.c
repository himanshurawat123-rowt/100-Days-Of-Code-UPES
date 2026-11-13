/*
Q134: Define an enum with SUCCESS, FAILURE, and TIMEOUT, 
and print messages accordingly.

Sample Test Cases:
Input 1:
FAILURE
Output 1:
Operation failed
*/

#include <stdio.h>
#include <string.h>

// Define enum for operation status
enum Status {
    SUCCESS,
    FAILURE,
    TIMEOUT,
    INVALID
};

int main() {
    char input[20];

    // Read status string from user
    if (scanf("%19s", input) != 1) {
        return 0;
    }

    enum Status currentStatus = INVALID;

    // Map input string to corresponding enum constant
    if (strcmp(input, "SUCCESS") == 0) {
        currentStatus = SUCCESS;
    } else if (strcmp(input, "FAILURE") == 0) {
        currentStatus = FAILURE;
    } else if (strcmp(input, "TIMEOUT") == 0) {
        currentStatus = TIMEOUT;
    }

    // Print corresponding message based on enum value
    switch (currentStatus) {
        case SUCCESS:
            printf("Operation succeeded\n");
            break;
        case FAILURE:
            printf("Operation failed\n");
            break;
        case TIMEOUT:
            printf("Operation timed out\n");
            break;
        default:
            printf("Invalid status\n");
            break;
    }

    return 0;
}
