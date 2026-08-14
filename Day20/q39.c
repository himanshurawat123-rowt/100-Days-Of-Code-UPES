/*
Q39: Write a program to find the product of odd digits of a number.

Sample Test Cases:
Input 1:
12345
Output 1:
15

Input 2:
2468
Output 2:
1
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    if (scanf("%d", &n) == 1) {
        int temp = abs(n);
        long long product = 1;

        while (temp != 0) {
            int digit = temp % 10;
            if (digit % 2 != 0) {
                product *= digit;
            }
            temp /= 10;
        }

        printf("%lld\n", product);
    }

    return 0;
}
