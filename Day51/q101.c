/*
Q101: Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs.
The elements in the sorted array might be repeated. You need to print the first and last
occurrence of the target and print the index of first and last occurrence.
Print -1, -1 if the target is not present.

Sample Test Cases:
Input 1:
nums = [5,7,7,8,8,10], target = 8
Output 1:
3,4

Input 2:
 nums = [5,7,7,8,8,10], target = 6
Output 2:
-1,-1

Input 3:
 nums = [5,7,7,8,8,10], target = 10
Output 3:
5,5

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Binary search for the first (find_first = 1) or last (find_first = 0) index of target
int search(int nums[], int n, int target, int find_first) {
    int low = 0, high = n - 1, result = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (nums[mid] == target) {
            result = mid;
            if (find_first) {
                high = mid - 1;  // keep looking on the left side
            } else {
                low = mid + 1;   // keep looking on the right side
            }
        } else if (nums[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return result;
}

int main() {
    char line[10000];
    int nums[1000];
    int n = 0;
    int target = 0;

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

    // Parse the target value after "target ="
    char *t = strstr(end_bracket, "target");
    if (t != NULL) {
        t = strchr(t, '=');
        if (t != NULL) {
            target = (int)strtol(t + 1, NULL, 10);
        }
    }

    int first = search(nums, n, target, 1);
    int last = search(nums, n, target, 0);

    printf("%d,%d\n", first, last);

    return 0;
}