/*
Q30: Write a program to reverse a given number.

Sample Test Cases:
Input 1:
1234
Output 1:
4321

Input 2:
100
Output 2:
1
*/

#include <stdio.h>

int main() {
    int n;

    if (scanf("%d", &n) == 1) {
        int rev = 0;
        int temp = n;

        while (temp != 0) {
            int digit = temp % 10;
            rev = rev * 10 + digit;
            temp /= 10;
        }

        printf("%d\n", rev);
    }

    return 0;
}
