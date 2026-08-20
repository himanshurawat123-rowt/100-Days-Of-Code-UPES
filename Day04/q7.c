Q7: Write a program to swap two numbers without using a third variable.

/*
Sample Test Cases:
Input 1:
10 20
Output 1:
After swap: 20 10

Input 2:
7 14
Output 2:
After swap: 14 7

*/


\#include <stdio.h>

int main() {
    int a, b;

    // Read the two integers
    if (scanf("%d %d", &a, &b) == 2) {
        // Swap logic using arithmetic operations
        a = a + b;
        b = a - b;
        a = a - b;

        // Print output matching the exact format
        printf("After swap: %d %d\n", a, b);
    }

    return 0;
}
