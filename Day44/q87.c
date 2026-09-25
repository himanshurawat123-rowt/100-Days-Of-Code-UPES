/*
Q87: Count spaces, digits, and special characters in a string.

Sample Test Cases:
Input 1:
a b1&2
Output 1:
Spaces=1, Digits=2, Special=1

*/

#include <stdio.h>

int main() {
    char str[1000];

    if (fgets(str, sizeof(str), stdin) == NULL) {
        return 0;
    }

    int spaces = 0;
    int digits = 0;
    int special = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        // Skip newline character added by fgets
        if (str[i] == '\n') {
            break;
        }

        char ch = str[i];

        if (ch == ' ') {
            spaces++;
        } else if (ch >= '0' && ch <= '9') {
            digits++;
        } else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            // Alphabetic characters: do not count in spaces, digits, or special
            continue;
        } else {
            special++;
        }
    }

    printf("Spaces=%d, Digits=%d, Special=%d\n", spaces, digits, special);

    return 0;
}