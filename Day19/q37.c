/*
Q37: Write a program to find the LCM of two numbers.

Sample Test Cases:
Input 1:
4 5
Output 1:
20

Input 2:
7 3
Output 2:
21
*/

#include <stdio.h>

int main() {
    int a, b;

    if (scanf("%d %d", &a, &b) == 2) {
        if (a == 0 || b == 0) {
            printf("0\n");
            return 0;
        }

        int x = a, y = b;

        // Euclidean algorithm to find GCD
        while (y != 0) {
            int rem = x % y;
            x = y;
            y = rem;
        }

        int gcd = x;

        // LCM(a, b) = (|a * b|) / GCD(a, b)
        // Divide first to prevent integer overflow
        long long lcm = ((long long)a / gcd) * b;

        if (lcm < 0) {
            lcm = -lcm;
        }

        printf("%lld\n", lcm);
    }

    return 0;
}
