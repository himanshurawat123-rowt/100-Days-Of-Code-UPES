/*
Q144: Write a function that accepts a structure as parameter and prints its members.

Sample Test Cases:
Input 1:
Student: Neha 104 92
Output 1:
Name: Neha | Roll: 104 | Marks: 92
*/

#include <stdio.h>

// Define structure Student
struct Student {
    char name[50];
    int roll_no;
    int marks;
};

// Function accepting a structure variable by value and printing its members
void printStudent(struct Student s) {
    printf("Name: %s | Roll: %d | Marks: %d\n", s.name, s.roll_no, s.marks);
}

int main() {
    struct Student s1;

    // Read input matching "Student: Neha 104 92"
    if (scanf("Student: %49s %d %d", s1.name, &s1.roll_no, &s1.marks) != 3) {
        // Fallback if input is provided without the "Student:" label (e.g., Neha 104 92)
        rewind(stdin);
        if (scanf("%49s %d %d", s1.name, &s1.roll_no, &s1.marks) != 3) {
            return 0;
        }
    }

    // Pass the structure to the function
    printStudent(s1);

    return 0;
}
