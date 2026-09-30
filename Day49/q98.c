/*
Q98: Print initials of a name with the surname displayed in full.

Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[1000];

    if (fgets(str, sizeof(str), stdin) == NULL) {
        return 0;
    }

    // Remove trailing newline and spaces
    int len = strlen(str);
    while (len > 0 && (str[len - 1] == '\n' || str[len - 1] == ' ')) {
        str[--len] = '\0';
    }

    // Find the start of the last word (the surname)
    int last_start = len;
    while (last_start > 0 && str[last_start - 1] != ' ') {
        last_start--;
    }

    int new_word = 1;  // flag: next non-space character starts a word

    // Print initials for every word before the surname
    for (int i = 0; i < last_start; i++) {
        if (str[i] == ' ') {
            new_word = 1;
        } else if (new_word) {
            printf("%c.", toupper((unsigned char)str[i]));
            new_word = 0;
        }
    }

    // Print a space only if initials were printed, then the full surname
    if (last_start > 0) {
        printf(" ");
    }
    printf("%s\n", str + last_start);

    return 0;
}