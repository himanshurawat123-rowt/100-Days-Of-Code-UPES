/*
Q105: Write a program to take an integer array nums of size n, and print the majority element.
The majority element is the element that appears strictly more than ⌊n / 2⌋ times.
Print -1 if no such element exists.
Note: Majority Element is not necessarily the element that is present most number of times.

Sample Test Cases:
Input 1:
nums = [3,2,3]
Output 1:
3

Input 2:
nums = [2,2,1,1,1,2,2]
Output 2:
2

Input 3:
nums = [2,2,1,1,1,2,2,3]
Output 3:
-1

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

    // Step 1: Boyer-Moore voting to find a candidate
    int candidate = 0, count = 0;
    for (int i = 0; i < n; i++) {
        if (count == 0) {
            candidate = nums[i];
        }
        if (nums[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }

    // Step 2: Verify the candidate really appears more than n/2 times
    int freq = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] == candidate) {
            freq++;
        }
    }

    if (n > 0 && freq > n / 2) {
        printf("%d\n", candidate);
    } else {
        printf("-1\n");
    }

    return 0;
}