/*
Q97: Print the initials of a name.

Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.

*/

#include <stdio.h>
#include <ctype.h>

int main() {
    char name[1000];

    if (fgets(name, sizeof(name), stdin) == NULL) {
        return 0;
    }

    int in_word = 0;

    for (int i = 0; name[i] != '\0' && name[i] != '\n'; i++) {
        if (name[i] != ' ') {
            if (!in_word) {
                printf("%c.", toupper((unsigned char)name[i]));
                in_word = 1;
            }
        } else {
            in_word = 0;
        }
    }
    printf("\n");

    return 0;
}