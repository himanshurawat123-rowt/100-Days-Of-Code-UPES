/*
Q52: Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*

Sample Test Cases:
Input 1:

Output 1:
Pattern with stars spaced irregularly as shown.
*/

#include <stdio.h>

int main() {
    // Array representing star counts per block: 1, 3, 5, 3, 1
    int blocks[] = {1, 3, 5, 3, 1};
    int total_blocks = sizeof(blocks) / sizeof(blocks[0]);

    for (int b = 0; b < total_blocks; b++) {
        for (int i = 0; i < blocks[b]; i++) {
            printf("*\n");
        }
        // Print empty line separating blocks (except after the final block)
        if (b < total_blocks - 1) {
            printf("\n");
        }
    }

    return 0;
}
