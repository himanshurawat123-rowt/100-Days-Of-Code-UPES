/*
Q102: Write a Program to take a sorted array arr[] and an integer x as input, 
find the index (0-based) of the smallest element in arr[] that is greater than 
or equal to x and print it. This element is called the ceil of x. If such an 
element does not exist, print -1. Note: In case of multiple occurrences of 
ceil of x, return the index of the first occurrence.

Sample Test Cases:
Input 1:
arr = [1, 2, 8, 10, 11, 12, 19], x = 5
Output 1:
2

Input 2:
arr = [1, 2, 8, 10, 11, 12, 19], x = 20
Output 2:
-1

Input 3:
arr = [1, 1, 2, 8, 10, 11, 12, 19], x = 0
Output 3:
0

Input 4:
arr = [1, 1, 2, 8, 10, 11, 12, 19], x = 2
Output 4:
2

*/

#include <stdio.h>

int find_ceil_index(int arr[], int n, int x) {
    int low = 0;
    int high = n - 1;
    int ans = -1;

    // Binary search for lower bound (first element >= x)
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] >= x) {
            ans = mid;        // Candidate found; look left for first occurrence
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    return ans;
}

int main() {
    int n;
    if (scanf("%d", &n) != 1 || n <= 0) {
        return 0;
    }

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int x;
    if (scanf("%d", &x) != 1) {
        return 0;
    }

    printf("%d\n", find_ceil_index(arr, n, x));

    return 0;
}