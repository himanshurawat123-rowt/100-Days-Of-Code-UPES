/*
Q130: Store multiple student records (name, roll number, marks) into a file 
using fprintf(). Then read them using fscanf() and display each record.

Sample Test Cases:
Input 1:
2
Asha 101 85
Ravi 102 92

Output 1:
Name: Asha | Roll: 101 | Marks: 85
Name: Ravi | Roll: 102 | Marks: 92
*/

#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    int n;

    // Number of student records to input
    if (scanf("%d", &n) != 1 || n <= 0) {
        return 0;
    }

    struct Student students[n];

    // Read student details from user
    for (int i = 0; i < n; i++) {
        scanf("%49s %d %d", students[i].name, &students[i].roll, &students[i].marks);
    }

    // Step 1: Write records to file using fprintf()
    FILE *file = fopen("students.txt", "w");
    if (file == NULL) {
        printf("Error: Could not create file students.txt\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        fprintf(file, "%s %d %d\n", students[i].name, students[i].roll, students[i].marks);
    }

    fclose(file);

    // Step 2: Read records back from file using fscanf()
    file = fopen("students.txt", "r");
    if (file == NULL) {
        printf("Error: Could not open file students.txt\n");
        return 1;
    }

    char name[50];
    int roll, marks;

    while (fscanf(file, "%49s %d %d", name, &roll, &marks) == 3) {
        printf("Name: %s | Roll: %d | Marks: %d\n", name, roll, marks);
    }

    fclose(file);

    return 0;
}
