/*
Q110: Write a program to take an integer array arr and an integer k as inputs.
The task is to find the maximum element in each subarray of size k moving from left to right.
Print the maximum elements for each window separated by spaces as output.

Sample Test Cases:
Input 1:
arr[1, 2, 3, 1, 4, 5, 2, 3, 6] = , k = 3
Output 1:
3 3 4 5 5 5 6

Input 2:
arr[5, 1, 3, 4, 2] = , k = 1
Output 2:
5 1 3 4 2

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char line[10000];
    int arr[1000];
    int deque[1000];  // stores indices; values at these indices are in decreasing order
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

    int front = 0, back = -1;  // deque is deque[front..back]

    for (int i = 0; i < n; i++) {
        // Remove the index that has slid out of the window
        if (front <= back && deque[front] <= i - k) {
            front++;
        }

        // Remove smaller elements from the back; they can never be a maximum
        while (front <= back && arr[deque[back]] <= arr[i]) {
            back--;
        }

        deque[++back] = i;

        // Once the first window is complete, the front holds the window maximum
        if (i >= k - 1) {
            if (i > k - 1) {
                printf(" ");
            }
            printf("%d", arr[deque[front]]);
        }
    }

    printf("\n");

    return 0;
}