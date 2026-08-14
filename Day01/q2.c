/*
Q2 (User Inputs, Operations & Output)
Write a program to input two numbers and display their sum, difference, product, and quotient.

INPUT 1:
10 2
OUTPUT 1:
Sum=12, Diff=8, Product=20, Quotient=5

INPUT 2:
7 3
OUTPUT 2:
Sum=10, Diff=4, Product=21, Quotient=2
*/

#include <stdio.h>

int main() {
    int num1, num2;

    // Taking input for two numbers
    if (scanf("%d %d", &num1, &num2) == 2) {
        int sum = num1 + num2;
        int diff = num1 - num2;
        int product = num1 * num2;

        // Checking for division by zero
        if (num2 != 0) {
            int quotient = num1 / num2;
            printf("Sum=%d, Diff=%d, Product=%d, Quotient=%d\n", sum, diff, product, quotient);
        } else {
            printf("Sum=%d, Diff=%d, Product=%d, Quotient=Undefined (Division by zero)\n", sum, diff, product);
        }
    }

    return 0;
}
