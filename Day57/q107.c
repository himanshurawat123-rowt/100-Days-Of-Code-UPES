/*
Q107: Write a program to take an array arr[] of integers as input, the task is to find the previous
greater element for each element of the array in order of their appearance in the array.
Previous greater element of an element in the array is the nearest element on the left which
is greater than the current element. If there does not exist next greater of current element,
then previous greater element for current element is -1.

N.B:
- Print the output for each element in a comma separated fashion.
- Do not use Stack, use brute force approach (nested loop) to solve.

Sample Test Cases:
Input 1:
arr = [1, 3, 2, 4]
Output 1:
-1, -1, 3, -1

Input 2:
arr = [6, 8, 0, 1, 3]
Output 2:
-1, -1, 8, 8, 8

Input 3:
arr = [1, 2, 3, 5]
Output 3:
-1, -1, -1, -1

Input 4:
arr = [5, 4, 3, 1]
Output 4:
-1, 5, 4, 3

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char line[10000];
    int arr[1000];
    int n = 0;

    if (fgets(line, sizeof(line), stdin) == NULL) {
        return 0;
    }

    // Parse the array elements between '[' and ']'
    char *p = strchr(line, '[');
    char *end_bracket = strchr(line, ']');
    if (p == NULL || end_bracket == NULL) {
        return 0;
    }
    p++;

    while (p < end_bracket) {
        char *next;
        long val = strtol(p, &next, 10);
        if (next == p) {
            p++;  // skip commas and spaces
        } else {
            arr[n++] = (int)val;
            p = next;
        }
    }

    // Brute force: for each element, scan to the left for the nearest greater element
    for (int i = 0; i < n; i++) {
        int result = -1;

        for (int j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) {
                result = arr[j];
                break;  // nearest greater element on the left found
            }
        }

        if (i > 0) {
            printf(", ");
        }
        printf("%d", result);
    }

    printf("\n");

    return 0;
}