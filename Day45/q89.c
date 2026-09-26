/*
Q89: Count frequency of a given character in a string.

Sample Test Cases:
Input 1:
programming
g
Output 1:
2

*/

#include <stdio.h>

int main() {
    char str[1000];
    char target;

    if (fgets(str, sizeof(str), stdin) == NULL) {
        return 0;
    }

    if (scanf(" %c", &target) != 1) {
        return 0;
    }

    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n') {
            break;
        }
        if (str[i] == target) {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}