/*
Q41: Write a program to swap the first and last digit of a number.

Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001
*/

#include <stdio.h>

int main() {
    int n;

    if (scanf("%d", &n) == 1) {
        int num = n;
        if (num < 0) num = -num;

        int last = num % 10;

        int temp = num;
        int digits = 1;
        while (temp >= 10) {
            temp /= 10;
            digits++;
        }
        int first = temp;

        int power = 1;
        for (int i = 0; i < digits - 1; i++) {
            power *= 10;
        }

        int result = num - (first * power) - last + (last * power) + first;

        if (n < 0) result = -result;

        printf("%d\n", result);
    }

    return 0;
}
