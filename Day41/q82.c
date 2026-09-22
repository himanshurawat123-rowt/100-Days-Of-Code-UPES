/*
Q82: Print each character of a string on a new line.

Sample Test Cases:
Input 1:
Hi
Output 1:
H
i

*/

#include <stdio.h>

int main() {
    char str[1000];

    // Read string including spaces until newline
    if (fgets(str, sizeof(str), stdin) == NULL) {
        return 0;
    }

    for (int i = 0; str[i] != '\0'; i++) {
        // Skip trailing newline character from fgets
        if (str[i] == '\n') {
            break;
        }
        printf("%c\n", str[i]);
    }

    return 0;
}