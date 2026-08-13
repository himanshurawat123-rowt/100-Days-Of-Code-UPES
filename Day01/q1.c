
/*
Q1 (User Inputs, Operations & Output)
Write a program to input two numbers and display their sum.

INPUT 1:
3 4
OUTPUT 1:
Sum = 7

INPUT 2:
-1 20
OUTPUT 2:
Sum = 19
*/

#include <stdio.h>

int main() {
    int num1, num2, sum;

    // Input two numbers
    if (scanf("%d %d", &num1, &num2) == 2) {
        sum = num1 + num2;
        // Displaying output as per sample test cases
        printf("Sum = %d\n", sum);
    }

    return 0;
}
