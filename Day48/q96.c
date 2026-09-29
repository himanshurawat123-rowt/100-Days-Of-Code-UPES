/*
Q96: Reverse each word in a sentence without changing the word order.

Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/

#include <stdio.h>

void reverse_range(char str[], int start, int end) {
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char str[1000];

    if (fgets(str, sizeof(str), stdin) == NULL) {
        return 0;
    }

    int word_start = 0;
    int i = 0;

    while (str[i] != '\0' && str[i] != '\n') {
        if (str[i] == ' ') {
            reverse_range(str, word_start, i - 1);
            word_start = i + 1;
        }
        i++;
    }

    // Reverse the final word in the sentence
    reverse_range(str, word_start, i - 1);

    // Null-terminate at the end of valid characters
    str[i] = '\0';

    printf("%s\n", str);

    return 0;
}