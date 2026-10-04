/*
Q103: Write a Program to take an array of integers as input, calculate the pivot index of this array.
The pivot index is the index where the sum of all the numbers strictly to the left of the index
is equal to the sum of all the numbers strictly to the index's right.
If the index is on the left edge of the array, then the left sum is 0 because there are no
elements to the left. This also applies to the right edge of the array.
Print the leftmost pivot index. If no such index exists, print -1.

Sample Test Cases:
Input 1:
nums = [1,7,3,6,5,6]
Output 1:
3

Input 2:
nums = [1,2,3]
Output 2:
-1

Input 3:
nums = [2,1,-1]
Output 3:
0

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char line[10000];
    int nums[1000];
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
            nums[n++] = (int)val;
            p = next;
        }
    }

    // Total sum of all elements
    long total = 0;
    for (int i = 0; i < n; i++) {
        total += nums[i];
    }

    long left_sum = 0;
    int pivot = -1;

    // Right sum = total - left_sum - nums[i]
    for (int i = 0; i < n; i++) {
        if (left_sum == total - left_sum - nums[i]) {
            pivot = i;  // first match is the leftmost pivot
            break;
        }
        left_sum += nums[i];
    }

    printf("%d\n", pivot);

    return 0;
}