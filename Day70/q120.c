/*
Q120: Write a program to take a string input. Change it to title/sentence case 
(capitalize the first letter of each word).

Sample Test Cases:
Input 1:
str = I am trying to build logic.
Output 1:
I Am Trying To Build Logic.

Input 2:
str = The classes are supposed to start early.
Output 2:
The Classes Are Supposed To Start Early.

Input 3:
str = We are going to look at 26 different test cases.
Output 3:
We Are Going To Look At 26 Different Test Cases.
*/

#include <stdio.h>
#include <ctype.h>

int main() {
    char str[1000];

    // Read the full line including spaces
    if (fgets(str, sizeof(str), stdin) == NULL) {
        return 0;
    }

    int new_word = 1;

    for (int i = 0; str[i] != '\0'; i++) {
        if (isspace((unsigned char)str[i])) {
            new_word = 1;
        } else if (new_word) {
            str[i] = (char)toupper((unsigned char)str[i]);
            new_word = 0;
        }
    }

    printf("%s", str);

    return 0;
}
