/*
Q95: Check if one string is a rotation of another.

Sample Test Cases:
Input 1:
abcde
deabc
Output 1:
Rotation

Input 2:
abc
acb
Output 2:
Not rotation

*/

#include <stdio.h>

int main() {
    char s1[1000];
    char s2[1000];

    if (fgets(s1, sizeof(s1), stdin) == NULL) return 0;
    if (fgets(s2, sizeof(s2), stdin) == NULL) return 0;

    // Calculate length of s1
    int len1 = 0;
    while (s1[len1] != '\0' && s1[len1] != '\n') {
        len1++;
    }

    // Calculate length of s2
    int len2 = 0;
    while (s2[len2] != '\0' && s2[len2] != '\n') {
        len2++;
    }

    if (len1 != len2 || len1 == 0) {
        printf("Not rotation\n");
        return 0;
    }

    // Check all possible rotations of s1 against s2
    int is_rotation = 0;
    for (int shift = 0; shift < len1; shift++) {
        int match = 1;
        for (int i = 0; i < len1; i++) {
            if (s1[(shift + i) % len1] != s2[i]) {
                match = 0;
                break;
            }
        }
        if (match) {
            is_rotation = 1;
            break;
        }
    }

    if (is_rotation) {
        printf("Rotation\n");
    } else {
        printf("Not rotation\n");
    }

    return 0;
}