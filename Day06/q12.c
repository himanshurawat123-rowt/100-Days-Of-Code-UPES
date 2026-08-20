Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

/*
Sample Test Cases:
Input 1:
-5
Output 1:
Negative

Input 2:
0
Output 2:
Zero

Input 3:
10
Output 3:
Positive

*/

#include <stdio.h>

int main() {
    int num;

    // Read the integer
    if (scanf("%d", &num) == 1) {
        // Outer if condition
        if (num >= 0) {
            // Nested if-else to distinguish between Positive and Zero
            if (num > 0) {
                printf("Positive\n");
            } else {
                printf("Zero\n");
            }
        } else {
            printf("Negative\n");
        }
    }

    return 0;
}
