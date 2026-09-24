/*
Q85: Reverse a string.

Sample Test Cases:
Input 1:
abcd
Output 1:
dcba

*/

#include <stdio.h>

int main() {
    char str[1000];

    if (fgets(str, sizeof(str), stdin) == NULL) {
        return 0;
    }

    // Find length excluding trailing newline
    int len = 0;
    while (str[len] != '\0' && str[len] != '\n') {
        len++;
    }

    // Reverse two-pointer swap
    int start = 0;
    int end = len - 1;
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }

    // Null-terminate at original string length
    str[len] = '\0';

    printf("%s\n", str);

    return 0;
}