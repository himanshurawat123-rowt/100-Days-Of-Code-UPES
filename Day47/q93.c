/*
Q93: Check if two strings are anagrams of each other.

Sample Test Cases:
Input 1:
listen
silent
Output 1:
Anagrams

Input 2:
hello
world
Output 2:
Not anagrams

*/

#include <stdio.h>

int main() {
    char str1[1000];
    char str2[1000];

    if (fgets(str1, sizeof(str1), stdin) == NULL) return 0;
    if (fgets(str2, sizeof(str2), stdin) == NULL) return 0;

    int freq[256] = {0};

    int len1 = 0;
    while (str1[len1] != '\0' && str1[len1] != '\n') {
        freq[(unsigned char)str1[len1]]++;
        len1++;
    }

    int len2 = 0;
    while (str2[len2] != '\0' && str2[len2] != '\n') {
        freq[(unsigned char)str2[len2]]--;
        len2++;
    }

    if (len1 != len2) {
        printf("Not anagrams\n");
        return 0;
    }

    int is_anagram = 1;
    for (int i = 0; i < 256; i++) {
        if (freq[i] != 0) {
            is_anagram = 0;
            break;
        }
    }

    if (is_anagram) {
        printf("Anagrams\n");
    } else {
        printf("Not anagrams\n");
    }

    return 0;
}