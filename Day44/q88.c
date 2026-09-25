/*
Q88: Replace spaces with hyphens in a string.

Sample Test Cases:
Input 1:
hello world
Output 1:
hello-world

*/

#include <stdio.h>

int main() {
    char str[1000];

    if (fgets(str, sizeof(str), stdin) == NULL) {
        return 0;
    }

    for (int i = 0; str[i] != '\0'; i++) {
        // Stop before the trailing newline character
        if (str[i] == '\n') {
            break;
        }

        if (str[i] == ' ') {
            putchar('-');
        } else {
            putchar(str[i]);
        }
    }
    putchar('\n');

    return 0;
}