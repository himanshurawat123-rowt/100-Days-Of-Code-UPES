/*
Q34: Write a program to check if a number is prime.

Sample Test Cases:
Input 1:
7
Output 1:
Prime

Input 2:
10
Output 2:
Not prime
*/

#include <stdio.h>
#include <stdbool.h>

int main() {
    int n;

    if (scanf("%d", &n) == 1) {
        if (n <= 1) {
            printf("Not prime\n");
            return 0;
        }

        bool isPrime = true;

        // Check divisors up to sqrt(n)
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            printf("Prime\n");
        } else {
            printf("Not prime\n");
        }
    }

    return 0;
}
