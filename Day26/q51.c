/*
Q51: Write a program to print the following pattern:
    5
   45
  345
 2345
12345

Sample Test Cases:
Input 1:

Output 1:
    5
   45
  345
 2345
12345
*/

#include <stdio.h>

int main() {
    int n = 5;

    for (int i = n; i >= 1; i--) {
        // Leading spaces: (i - 1) spaces on each row
        for (int s = 1; s < i; s++) {
            printf(" ");
        }

        // Numbers starting from i up to n
        for (int j = i; j <= n; j++) {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}
