Q8: Write a program to find and display the sum of the first n natural numbers.

/*
Sample Test Cases:
Input 1:
5
Output 1:
Sum=15

Input 2:
10
Output 2:
Sum=55

*/

  #include <stdio.h>

int main() {
    int n;

    // Read the value of n
    if (scanf("%d", &n) == 1) {
        // Formula to find the sum of first n natural numbers: n * (n + 1) / 2
        int sum = n * (n + 1) / 2;

        // Print output matching the exact format
        printf("Sum=%d\n", sum);
    }

    return 0;
}
