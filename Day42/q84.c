/*
Q84: Convert a lowercase string to uppercase without using built-in functions.

Sample Test Cases:
Input 1:
hello
Output 1:
HELLO

*/

#include <stdio.h>

int main() {
    char str[1000];

    if (fgets(str, sizeof(str), stdin) == NULL) {
        return 0;
    }

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n') {
            break;
        }

        // ASCII shift: 'a' - 'A' = 32
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
    }

    // Print converted string without trailing newline
    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        putchar(str[i]);
    }
    putchar('\n');

    return 0;
}