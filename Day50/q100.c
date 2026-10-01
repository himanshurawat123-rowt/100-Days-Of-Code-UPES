/*
Q100: Print all sub-strings of a string.

Sample Test Cases:
Input 1:
abc
Output 1:
a,ab,abc,b,bc,c

*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];

    if (fgets(str, sizeof(str), stdin) == NULL) {
        return 0;
    }

    // Remove trailing newline
    int len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[--len] = '\0';
    }

    int first = 1;  // flag: avoids printing a comma before the first substring

    // For each starting position, print every substring that begins there
    for (int start = 0; start < len; start++) {
        for (int end = start; end < len; end++) {
            if (!first) {
                printf(",");
            }
            first = 0;

            // Print characters from start to end
            for (int k = start; k <= end; k++) {
                printf("%c", str[k]);
            }
        }
    }

    printf("\n");

    return 0;
}