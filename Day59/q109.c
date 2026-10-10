/*
Q109: Write a program to take an integer array arr and an integer k as inputs.
Print the maximum sum of all the subarrays of size k.

Sample Test Cases:
Input 1:
arr[100, 200, 300, 400] = , k = 2
Output 1:
700

Input 2:
arr[1, 4, 2, 10, 23, 3, 1, 0, 20] = , k = 4
Output 2:
39

Input 3:
arr[100, 200, 300, 400] = , k = 1
Output 3:
400

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char line[10000];
    int arr[1000];
    int n = 0;
    int k = 0;

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

    // Parse k: find 'k' after the closing bracket, then the number after its '='
    char *kpos = strchr(end_bracket, 'k');
    if (kpos != NULL) {
        kpos = strchr(kpos, '=');
        if (kpos != NULL) {
            k = (int)strtol(kpos + 1, NULL, 10);
        }
    }

    // No valid window of size k
    if (k <= 0 || k > n) {
        printf("-1\n");
        return 0;
    }

    // Sum of the first window
    long window_sum = 0;
    for (int i = 0; i < k; i++) {
        window_sum += arr[i];
    }
    long max_sum = window_sum;

    // Slide the window: add the new element, remove the one that left
    for (int i = k; i < n; i++) {
        window_sum += arr[i] - arr[i - k];
        if (window_sum > max_sum) {
            max_sum = window_sum;
        }
    }

    printf("%ld\n", max_sum);

    return 0;
}