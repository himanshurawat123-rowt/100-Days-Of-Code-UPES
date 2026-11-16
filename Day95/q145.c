/*
Q145: Return a structure containing top student's details from a function.

Sample Test Cases:
Input 1:
3
Riya 101 89
Karan 102 96
Meena 103 92

Output 1:
Top Student: Karan | Roll: 102 | Marks: 96
*/

#include <stdio.h>

// Define structure Student
struct Student {
    char name[50];
    int roll_no;
    int marks;
};

// Function that finds and returns the structure of the top-scoring student
struct Student getTopStudent(struct Student students[], int n) {
    struct Student top = students[0];

    for (int i = 1; i < n; i++) {
        if (students[i].marks > top.marks) {
            top = students[i];
        }
    }

    return top;
}

int main() {
    int n;

    // Read number of students
    if (scanf("%d", &n) != 1 || n <= 0) {
        return 0;
    }

    struct Student students[n];

    // Read details of n students
    for (int i = 0; i < n; i++) {
        if (scanf("%49s %d %d", students[i].name, &students[i].roll_no, &students[i].marks) != 3) {
            return 0;
        }
    }

    // Call function and receive the returned struct
    struct Student topper = getTopStudent(students, n);

    // Print the top student's details
    printf("Top Student: %s | Roll: %d | Marks: %d\n", topper.name, topper.roll_no, topper.marks);

    return 0;
}
