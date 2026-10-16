/*
Q114: Write a program to take a string s as input. The task is to find the length 
of the longest substring without repeating characters. Print the length as output.

Sample Test Cases:
Input 1:
s = "abcabcbb"
Output 1:
3

Input 2:
s = "bbbbb"
Output 2:
1

Input 3:
s = "pwwkew"
Output 3:
3

*/

#include <stdio.h>
#include <string.h>

int lengthOfLongestSubstring(char *s) {
    // Array to store the last seen index of each ASCII character
    int last_index[256];
    for (int i = 0; i < 256; i++) {
        last_index[i] = -1;
    }

    int max_len = 0;
    int left = 0;

    for (int right = 0; s[right] != '\0'; right++) {
        unsigned char ch = (unsigned char)s[right];

        // If the character is already inside the current window, shift left pointer
        if (last_index[ch] >= left) {
            left = last_index[ch] + 1;
        }

        // Update the last seen position of the character
        last_index[ch] = right;

        // Calculate current window length
        int current_len = right - left + 1;
        if (current_len > max_len) {
            max_len = current_len;
        }
    }

    return max_len;
}

int main() {
    char s[10000];

    if (fgets(s, sizeof(s), stdin) == NULL) {
        return 0;
    }

    // Strip trailing newline character if present
    int len = strlen(s);
    if (len > 0 && s[len - 1] == '\n') {
        s[len - 1] = '\0';
    }

    printf("%d\n", lengthOfLongestSubstring(s));

    return 0;
}
