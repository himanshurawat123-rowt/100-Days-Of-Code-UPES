/*
Q73: Find the sum of each row of a matrix and store it in an array.

Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
6 15

*/

#include <stdio.h>

int main() {
    int rows, cols;
    if (scanf("%d %d", &rows, &cols) != 2) return 0;

    int matrix[rows][cols];
    long long row_sums[rows];

    for (int i = 0; i < rows; i++) {
        row_sums[i] = 0;
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            row_sums[i] += matrix[i][j];
        }
    }

    for (int i = 0; i < rows; i++) {
        printf("%lld", row_sums[i]);
        if (i < rows - 1) {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}