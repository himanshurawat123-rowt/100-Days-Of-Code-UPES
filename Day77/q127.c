/*
Q127: Write a program that reads text from input.txt, converts all 
lowercase letters to uppercase, and writes the result to output.txt.

Sample Test Cases:
Input 1:
Input File (input.txt): Hello World\nC programming
Output 1:
Output File (output.txt): HELLO WORLD\nC PROGRAMMING
*/

#include <stdio.h>
#include <ctype.h>

int main() {
    // Open source file in read mode
    FILE *src = fopen("input.txt", "r");
    if (src == NULL) {
        printf("Error: Could not open input.txt\n");
        return 1;
    }

    // Open target file in write mode
    FILE *dest = fopen("output.txt", "w");
    if (dest == NULL) {
        printf("Error: Could not create output.txt\n");
        fclose(src);
        return 1;
    }

    int ch;
    // Read character by character, transform lowercase to uppercase
    while ((ch = fgetc(src)) != EOF) {
        fputc(toupper((unsigned char)ch), dest);
    }

    // Close both file streams
    fclose(src);
    fclose(dest);

    printf("Text converted and written to output.txt successfully.\n");

    return 0;
}
