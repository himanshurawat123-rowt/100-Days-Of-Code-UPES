/*
Q94: Find the longest word in a sentence.

Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/

#include <stdio.h>

int main() {
    char str[1000];

    if (fgets(str, sizeof(str), stdin) == NULL) {
        return 0;
    }

    int max_len = 0;
    int max_start = 0;

    int cur_len = 0;
    int cur_start = 0;

    int i = 0;
    while (str[i] != '\0' && str[i] != '\n') {
        if (str[i] != ' ') {
            if (cur_len == 0) {
                cur_start = i;
            }
            cur_len++;
        } else {
            if (cur_len > max_len) {
                max_len = cur_len;
                max_start = cur_start;
            }
            cur_len = 0;
        }
        i++;
    }

    // Check the last word if string didn't end with a space
    if (cur_len > max_len) {
        max_len = cur_len;
        max_start = cur_start;
    }

    for (int j = 0; j < max_len; j++) {
        putchar(str[max_start + j]);
    }
    putchar('\n');

    return 0;
}