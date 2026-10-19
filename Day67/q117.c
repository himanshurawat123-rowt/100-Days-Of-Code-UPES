/*
Q117: Write a program to take two sorted arrays of size m and n as input. 
Merge both the arrays such that the merged array is also sorted. 
Print the merged array.

Sample Test Cases:
Input 1:
nums1 = [2,7,11,15] nums2 = [4,8,10]
Output 1:
2 4 7 8 10 11 15

Input 2:
nums1 = [1,2,7] nums2 = [9,10,17]
Output 2:
1 2 7 9 10 17

Input 3:
nums1 = [-10,-2,7] nums2 = [-3, -1, 7]
Output 3:
-10 -3 -2 -1 7 7
*/

#include <stdio.h>

int main() {
    int m, n;

    // Read size and elements of the first array
    if (scanf("%d", &m) != 1) return 0;
    int nums1[m];
    for (int i = 0; i < m; i++) {
        scanf("%d", &nums1[i]);
    }

    // Read size and elements of the second array
    if (scanf("%d", &n) != 1) return 0;
    int nums2[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums2[i]);
    }

    // Merged array of size (m + n)
    int merged[m + n];
    int i = 0, j = 0, k = 0;

    // Two-pointer merge technique (O(m + n) time)
    while (i < m && j < n) {
        if (nums1[i] <= nums2[j]) {
            merged[k++] = nums1[i++];
        } else {
            merged[k++] = nums2[j++];
        }
    }

    // Copy remaining elements of nums1, if any
    while (i < m) {
        merged[k++] = nums1[i++];
    }

    // Copy remaining elements of nums2, if any
    while (j < n) {
        merged[k++] = nums2[j++];
    }

    // Print the merged sorted array
    for (int idx = 0; idx < m + n; idx++) {
        printf("%d", merged[idx]);
        if (idx < m + n - 1) {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}
