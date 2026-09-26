/*
Q27: Write a program to print the sum of the first n odd numbers.

Sample Test Cases:
Input 1:
3
Output 1:
9

Input 2:
5
Output 2:
25
*/

#include <stdio.h>

int main() {
    int n;

    if (scanf("%d", &n) == 1) {
        // The sum of the first n odd numbers is always n * n
        int sum = n * n;
        printf("%d\n", sum);
    }

    return 0;
}
