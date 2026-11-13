/*
Q142: Store details of 5 students in an array of structures and print all.

Sample Test Cases:
Input 1:
Asha 101 85
Ravi 102 92
Neha 103 78
Amit 104 88
Priya 105 95

Output 1:
Name            Roll    Marks
------------------------------
Asha            101     85
Ravi            102     92
Neha            103     78
Amit            104     88
Priya           105     95
*/

#include <stdio.h>

// Define structure Student
struct Student {
    char name[50];
    int roll_no;
    int marks;
};

int main() {
    struct Student students[5];

    // Read details of 5 students into the array of structures
    for (int i = 0; i < 5; i++) {
        if (scanf("%49s %d %d", students[i].name, &students[i].roll_no, &students[i].marks) != 3) {
            return 0;
        }
    }

    // Print tabular header
    printf("%-15s %-8s %-8s\n", "Name", "Roll", "Marks");
    printf("------------------------------\n");

    // Print details of all 5 students
    for (int i = 0; i < 5; i++) {
        printf("%-15s %-8d %-8d\n", students[i].name, students[i].roll_no, students[i].marks);
    }

    return 0;
}
