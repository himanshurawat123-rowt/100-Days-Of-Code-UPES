/*
Q137: Create an enum for user roles (ADMIN, USER, GUEST) 
and display messages based on role.

Sample Test Cases:
Input 1:
GUEST
Output 1:
Welcome Guest!
*/

#include <stdio.h>
#include <string.h>

// Define enum for user roles
enum Role {
    ADMIN,
    USER,
    GUEST,
    INVALID
};

int main() {
    char input[20];

    // Read role string from user
    if (scanf("%19s", input) != 1) {
        return 0;
    }

    enum Role currentRole = INVALID;

    // Map string input to corresponding enum constant
    if (strcmp(input, "ADMIN") == 0) {
        currentRole = ADMIN;
    } else if (strcmp(input, "USER") == 0) {
        currentRole = USER;
    } else if (strcmp(input, "GUEST") == 0) {
        currentRole = GUEST;
    }

    // Display message based on enum value
    switch (currentRole) {
        case ADMIN:
            printf("Welcome Admin!\n");
            break;
        case USER:
            printf("Welcome User!\n");
            break;
        case GUEST:
            printf("Welcome Guest!\n");
            break;
        default:
            printf("Invalid Role!\n");
            break;
    }

    return 0;
}
