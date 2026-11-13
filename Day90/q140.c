/*
Q140: Define a struct with enum Gender and print person's gender.

Sample Test Cases:
Input 1:
Gender=MALE
Output 1:
Male
*/

#include <stdio.h>
#include <string.h>

// Define enum for Gender
enum Gender {
    MALE,
    FEMALE,
    OTHER,
    INVALID
};

// Define struct Person containing an enum Gender member
struct Person {
    enum Gender gender;
};

int main() {
    char input[30];

    // Read input string (e.g., "Gender=MALE")
    if (scanf("%29s", input) != 1) {
        return 0;
    }

    struct Person p;
    p.gender = INVALID;

    // Extract the value after '=' if present, otherwise use the whole string
    char *value = strchr(input, '=');
    if (value != NULL) {
        value++; // Move pointer past '='
    } else {
        value = input;
    }

    // Map string to enum Gender constant
    if (strcmp(value, "MALE") == 0) {
        p.gender = MALE;
    } else if (strcmp(value, "FEMALE") == 0) {
        p.gender = FEMALE;
    } else if (strcmp(value, "OTHER") == 0) {
        p.gender = OTHER;
    }

    // Print person's gender based on struct's enum member
    switch (p.gender) {
        case MALE:
            printf("Male\n");
            break;
        case FEMALE:
            printf("Female\n");
            break;
        case OTHER:
            printf("Other\n");
            break;
        default:
            printf("Invalid Gender\n");
            break;
    }

    return 0;
}
