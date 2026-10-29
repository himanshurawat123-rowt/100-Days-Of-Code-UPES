/*
Q126: Ask the user for a filename. Check if it exists by trying to open 
it in read mode. If the file pointer is NULL, print an error message; 
otherwise, read and display its content.

Sample Test Cases:
Input 1:
sample.txt
Output 1:
File opened successfully.
(Displays file content)

Input 2:
nofile.txt
Output 2:
Error: File does not exist!
*/

#include <stdio.h>

int main() {
    char filename[100];

    // Read the filename from standard input
    if (scanf("%99s", filename) != 1) {
        return 0;
    }

    // Attempt to open the file in read mode
    FILE *file = fopen(filename, "r");

    // Check if the file pointer is NULL (file does not exist or access denied)
    if (file == NULL) {
        printf("Error: File does not exist!\n");
        return 1;
    }

    printf("File opened successfully.\n");

    // Read and display content line by line
    char buffer[256];
    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        printf("%s", buffer);
    }

    // Close the file stream
    fclose(file);

    return 0;
}
