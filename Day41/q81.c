/*
Q81: Count characters in a string without using built-in length functions.

Sample Test Cases:
Input 1:
Hello
Output 1:
5

Input 2:
 
Output 2:
1

*/

#include <stdio.h>

int main() {
    char str[1000];

    // Read full line including spaces until newline
    if (fgets(str, sizeof(str), stdin) == NULL) {
        return 0;
    }

    int count = 0;
    while (str[count] != '\0') {
        // Stop before the trailing newline character
        if (str[count] == '\n') {
            break;
        }
        count++;
    }

    printf("%d\n", count);

    return 0;
}