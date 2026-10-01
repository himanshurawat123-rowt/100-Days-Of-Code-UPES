/*
Q50: Write a program to print the following pattern:
*****
 ****
  ***
   **
    *

Sample Test Cases:
Input 1:

Output 1:
*****
 ****
  ***
   **
    *

Input 2:

Output 2:
Note: Spaces indicate indentation.
*/

#include <stdio.h>

int main() {
    int n = 5;

    for (int i = 0; i < n; i++) {
        // Print leading spaces
        for (int j = 0; j < i; j++) {
            printf(" ");
        }

        // Print asterisks
        for (int k = 0; k < n - i; k++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
