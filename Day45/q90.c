/*
Q90: Toggle case of each character in a string.

Sample Test Cases:
Input 1:
Hello
Output 1:
hELLO

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

        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;
        }
    }

    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        putchar(str[i]);
    }
    putchar('\n');

    return 0;
}