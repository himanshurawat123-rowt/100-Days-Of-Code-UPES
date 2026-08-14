/*
Q28: Write a program to print the product of even numbers from 1 to n.

Sample Test Cases:
Input 1:
4
Output 1:
8

Input 2:
6
Output 2:
48
*/

#include <stdio.h>

int main() {
    int n;

    if (scanf("%d", &n) == 1) {
        if (n < 2) {
            printf("0\n");
            return 0;
        }

        long long product = 1;
        for (int i = 2; i <= n; i += 2) {
            product *= i;
        }

        printf("%lld\n", product);
    }

    return 0;
}
