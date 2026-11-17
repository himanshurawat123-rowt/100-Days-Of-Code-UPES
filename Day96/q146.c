/*
Q146: Create Employee structure with nested Date structure for joining date and print details.

Sample Test Cases:
Input 1:
Employee: Raj | ID: 11 | Joining Date: 12 05 2020
Output 1:
Name: Raj | ID: 11 | Joining Date: 12/05/2020
*/

#include <stdio.h>

// Define nested Date structure
struct Date {
    int day;
    int month;
    int year;
};

// Define Employee structure containing a nested Date member
struct Employee {
    char name[50];
    int id;
    struct Date joiningDate;
};

int main() {
    struct Employee emp;

    // Read input matching "Employee: Raj | ID: 11 | Joining Date: 12 05 2020"
    if (scanf("Employee: %49s | ID: %d | Joining Date: %d %d %d",
              emp.name, &emp.id,
              &emp.joiningDate.day, &emp.joiningDate.month, &emp.joiningDate.year) != 5) {
        // Fallback if input is provided without labels (e.g., Raj 11 12 05 2020)
        rewind(stdin);
        if (scanf("%49s %d %d %d %d",
                  emp.name, &emp.id,
                  &emp.joiningDate.day, &emp.joiningDate.month, &emp.joiningDate.year) != 5) {
            return 0;
        }
    }

    // Print details using %02d so single-digit day/month keep leading zeros (e.g., 05)
    printf("Name: %s | ID: %d | Joining Date: %02d/%02d/%04d\n",
           emp.name, emp.id,
           emp.joiningDate.day, emp.joiningDate.month, emp.joiningDate.year);

    return 0;
}
