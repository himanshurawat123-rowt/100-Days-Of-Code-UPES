/*
Q123: Read a text file and count the total number of characters, words, and lines. 
A word is defined as a sequence of non-space characters separated by spaces or newlines.

Sample Test Cases:
Input 1:
File: sample.txt (Content: Hello world\nThis is C programming)
Output 1:
Characters: 31
Words: 5
Lines: 2
*/

#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *file = fopen("sample.txt", "r");
    if (file == NULL) {
        printf("Error: Could not open file sample.txt\n");
        return 1;
    }

    int characters = 0;
    int words = 0;
    int lines = 0;

    int ch;
    int last_char = '\n';
    int in_word = 0;

    while ((ch = fgetc(file)) != EOF) {
        characters++;

        // Track newlines for line count
        if (ch == '\n') {
            lines++;
        }

        // Word transition logic using whitespace
        if (isspace(ch)) {
            in_word = 0;
        } else if (!in_word) {
            in_word = 1;
            words++;
        }

        last_char = ch;
    }

    // If the file does not end with a newline but has content, count the final line
    if (characters > 0 && last_char != '\n') {
        lines++;
    }

    fclose(file);

    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    return 0;
}
