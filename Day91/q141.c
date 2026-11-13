/*
Q141: Define a structure Student with name, roll_no, and marks, 
then read and print one student's data.

Sample Test Cases:
Input 1:
Name: Asha
Roll: 101
Marks: 90
Output 1:
Name: Asha | Roll: 101 | Marks: 90
*/

#include <stdio.h>

// Define structure Student
struct Student {
    char name[50];
    int roll_no;
    int marks;
};

int main() {
    struct Student s;

    // Read student data matching the sample input format
    if (scanf("Name: %49s\nRoll: %d\nMarks: %d", s.name, &s.roll_no, &s.marks) != 3) {
        // Fallback if input is provided without labels (e.g., Asha 101 90)
        rewind(stdin);
        if (scanf("%49s %d %d", s.name, &s.roll_no, &s.marks) != 3) {
            return 0;
        }
    }

    // Print student data in the required format
    printf("Name: %s | Roll: %d | Marks: %d\n", s.name, s.roll_no, s.marks);

    return 0;
}
