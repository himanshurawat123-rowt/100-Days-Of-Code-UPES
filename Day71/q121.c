/*
Q121: Write a C program that creates a text file named info.txt in write mode. 
The program should take the user’s name and age as input, and write them to 
the file using fprintf(). After writing, display a message confirming that 
the data was successfully saved.

Sample Test Cases:
Input 1:
Rahul
23
Output 1:
File created successfully! Data written to info.txt
*/

#include <stdio.h>

int main() {
    FILE *file = fopen("info.txt", "w");
    if (file == NULL) {
        printf("Error creating file!\n");
        return 1;
    }

    char name[100];
    int age;

    // Read name (single word or line) and age
    if (scanf("%99s", name) != 1) {
        fclose(file);
        return 1;
    }

    if (scanf("%d", &age) != 1) {
        fclose(file);
        return 1;
    }

    // Write formatted data into info.txt
    fprintf(file, "Name: %s\nAge: %d\n", name, age);

    // Close the file stream to flush and save
    fclose(file);

    printf("File created successfully! Data written to info.txt\n");

    return 0;
}
