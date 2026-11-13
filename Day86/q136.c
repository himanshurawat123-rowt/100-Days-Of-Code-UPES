/*
Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) 
and perform operations using switch.

Sample Test Cases:
Input 1:
ADD 10 20
Output 1:
30
*/

#include <stdio.h>
#include <string.h>

// Define enum for menu choices
enum Operation {
    ADD,
    SUBTRACT,
    MULTIPLY,
    INVALID
};

int main() {
    char choice[20];
    int a, b;

    // Read operation string and two integers
    if (scanf("%19s %d %d", choice, &a, &b) != 3) {
        return 0;
    }

    enum Operation op = INVALID;

    // Map string input to corresponding enum constant
    if (strcmp(choice, "ADD") == 0) {
        op = ADD;
    } else if (strcmp(choice, "SUBTRACT") == 0) {
        op = SUBTRACT;
    } else if (strcmp(choice, "MULTIPLY") == 0) {
        op = MULTIPLY;
    }

    // Perform operation using switch on enum
    switch (op) {
        case ADD:
            printf("%d\n", a + b);
            break;
        case SUBTRACT:
            printf("%d\n", a - b);
            break;
        case MULTIPLY:
            printf("%d\n", a * b);
            break;
        default:
            printf("Invalid operation\n");
            break;
    }

    return 0;
}
