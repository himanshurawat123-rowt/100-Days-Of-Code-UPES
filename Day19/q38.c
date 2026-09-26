/*
Q38: Write a program to find the sum of digits of a number.

Sample Test Cases:
Input 1:
123
Output 1:
6

Input 2:
999
Output 2:
27
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    if (scanf("%d", &n) == 1) {
        int temp = abs(n);
        int sum = 0;

        while (temp != 0) {
            sum += temp % 10;
            temp /= 10;
        }

        printf("%d\n", sum);
    }

    return 0;
}
