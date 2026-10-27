/*
Q125: Open an existing file in append mode and allow the user to enter a new line of text. 
Append the text at the end without overwriting existing content.

Sample Test Cases:
Input 1:
Existing File: data.txt (Content before execution: Hello world)
User Input: This is appended text.
Output 1:
File updated successfully with appended text.
*/

#include <stdio.h>
#include <string.h>

int main() {
    // "a" mode ensures data is always written at the end without truncating
    FILE *file = fopen("data.txt", "a");
    if (file == NULL) {
        printf("Error: Could not open file data.txt\n");
        return 1;
    }

    char text[256];

    // Read a full line from user input
    if (fgets(text, sizeof(text), stdin) != NULL) {
        // Remove trailing newline if fgets captured it, to cleanly append
        size_t len = strlen(text);
        if (len > 0 && text[len - 1] == '\n') {
            text[len - 1] = '\0';
        }

        // Write the new line to the file
        fprintf(file, "\n%s", text);
    }

    fclose(file);

    printf("File updated successfully with appended text.\n");

    return 0;
}
