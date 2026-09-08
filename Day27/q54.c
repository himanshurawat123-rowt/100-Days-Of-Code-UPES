/*
Q54: Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   *

Sample Test Cases:
Input 1:

Output 1:
   *
  ***
 *****
*******
 *****
  ***
   *

*/

#include <stdio.h>

int main() {
    int n = 4; // Upper half ki number of rows

    // Upper half (spaces ghatenge, stars badhenge)
    for (int i = 1; i <= n; i++) {
        // Leading spaces print karna
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // Stars print karna
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower half (spaces badhenge, stars ghatenge)
    for (int i = n - 1; i >= 1; i--) {
        // Leading spaces print karna
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // Stars print karna
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}