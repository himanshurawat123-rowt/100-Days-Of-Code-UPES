/*
Q104: Write a Program to take a positive integer n as input, and find the pivot integer x
such that the sum of all elements between 1 and x inclusively equals the sum of all
elements between x and n inclusively.
Print the pivot integer x. If no such integer exists, print -1.
Assume that it is guaranteed that there will be at most one pivot integer for the given input.

Sample Test Cases:
Input 1:
n = 8
Output 1:
6

Input 2:
n = 1
Output 2:
1

Input 3:
n = 4
Output 3:
-1

*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char line[100];
    long n = 0;

    if (fgets(line, sizeof(line), stdin) == NULL) {
        return 0;
    }

    // Parse n from "n = 8" (also works if only "8" is given)
    char *eq = strchr(line, '=');
    if (eq != NULL) {
        n = strtol(eq + 1, NULL, 10);
    } else {
        n = strtol(line, NULL, 10);
    }

    // Sum of 1..n
    long total = n * (n + 1) / 2;

    int pivot = -1;

    // Running sum of 1..x; the sum of x..n is total - sum + x
    long sum = 0;
    for (long x = 1; x <= n; x++) {
        sum += x;
        if (sum == total - sum + x) {
            pivot = (int)x;
            break;
        }
    }

    printf("%d\n", pivot);

    return 0;
}