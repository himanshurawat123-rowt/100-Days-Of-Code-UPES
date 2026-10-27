/*
Q124: Take two filenames from the user – a source file and a destination file. 
Copy all the content from the source file to the destination file using fgetc() and fputc().

Sample Test Cases:
Input 1:
source.txt destination.txt
Output 1:
File copied successfully to destination.txt
*/

#include <stdio.h>

int main() {
    char source_name[100];
    char dest_name[100];

    // Read filenames from user
    if (scanf("%99s %99s", source_name, dest_name) != 2) {
        return 0;
    }

    // Open source file in read mode
    FILE *src = fopen(source_name, "r");
    if (src == NULL) {
        printf("Error: Could not open source file %s\n", source_name);
        return 1;
    }

    // Open destination file in write mode
    FILE *dest = fopen(dest_name, "w");
    if (dest == NULL) {
        printf("Error: Could not open destination file %s\n", dest_name);
        fclose(src);
        return 1;
    }

    int ch;
    // Read character by character until EOF and write to destination
    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }

    // Close both file streams
    fclose(src);
    fclose(dest);

    printf("File copied successfully to %s\n", dest_name);

    return 0;
}
