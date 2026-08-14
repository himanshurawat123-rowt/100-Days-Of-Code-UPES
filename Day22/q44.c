/*
Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 3.3

Input 2:
5
Output 2:
Approximate sum: 4.4
*/

#include <stdio.h>

int main() {
    int n;

    if (scanf("%d", &n) == 1) {
        if (n <= 0) {
            printf("Approximate sum: 0.0\n");
            return 0;
        }

        double sum = 1.0; // First term is 1

        // Subsequent terms follow: (2*i - 1) / (2*i) for i = 2, 3, ..., n
        for (int i = 2; i <= n; i++) {
            double num = 2.0 * i - 1.0;
            double den = 2.0 * i;
            sum += num / den;
        }

        printf("Approximate sum: %.1f\n", sum);
    }

    return 0;
}
