/*
Q33: Write a program to check if a number is an Armstrong number.

Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong
*/

#include <stdio.h>
#include <math.h>

int main() {
    int n;

    if (scanf("%d", &n) == 1) {
        if (n < 0) {
            printf("Not Armstrong\n");
            return 0;
        }

        int original = n;
        int temp = n;
        int digits = 0;

        // Count number of digits
        while (temp != 0) {
            digits++;
            temp /= 10;
        }

        // Special case for 0
        if (original == 0) {
            digits = 1;
        }

        temp = original;
        int sum = 0;

        // Calculate sum of digits raised to the power of digit count
        while (temp != 0) {
            int rem = temp % 10;
            sum += round(pow(rem, digits));
            temp /= 10;
        }

        if (sum == original) {
            printf("Armstrong\n");
        } else {
            printf("Not Armstrong\n");
        }
    }

    return 0;
}
