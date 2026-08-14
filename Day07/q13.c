Q13: Write a program to input a year and check whether it is a leap year or not using conditional statements.

/*
Sample Test Cases:
Input 1:
2020
Output 1:
Leap year

Input 2:
1900
Output 2:
Not a leap year

Input 3:
2000
Output 3:
Leap year

*/

  #include <stdio.h>

int main() {
    int year;

    // Read the year
    if (scanf("%d", &year) == 1) {
        // A year is a leap year if:
        // 1. It is divisible by 400, OR
        // 2. It is divisible by 4 but NOT divisible by 100
        if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
            printf("Leap year\n");
        } else {
            printf("Not a leap year\n");
        }
    }

    return 0;
}
