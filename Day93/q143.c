/*
Q143: Find and print the student with the highest marks.

Sample Test Cases:
Input 1:
3
Ravi 101 95
Sita 102 85
Aman 103 88

Output 1:
Topper: Ravi (Marks: 95)
*/

#include <stdio.h>

// Define structure Student
struct Student {
    char name[50];
    int roll_no;
    int marks;
};

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

    // Track the index of the student with the highest marks
    int topperIndex = 0;
    for (int i = 1; i < n; i++) {
        if (students[i].marks > students[topperIndex].marks) {
            topperIndex = i;
        }
    }

    // Print the topper's name and marks
    printf("Topper: %s (Marks: %d)\n", students[topperIndex].name, students[topperIndex].marks);

    return 0;
}
