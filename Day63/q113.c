/*
Q113: Write a program to take an integer array arr and an integer k as inputs. 
The task is to find the kth smallest element in the array. 
Print the kth smallest element as output.

Sample Test Cases:
Input 1:
arr[] = [10, 5, 4, 3, 48, 6, 2, 33, 53, 10], k = 4
Output 1:
5

Input 2:
arr[] = [7, 10, 4, 3, 20, 15], k = 3
Output 2:
7

*/

#include <stdio.h>
#include <stdlib.h>

// Comparison function for qsort
int compare(const void *a, const void *b) {
    int x = *(const int *)a;
    int y = *(const int *)b;
    if (x < y) return -1;
    if (x > y) return 1;
    return 0;
}

int main() {
    int n;
    if (scanf("%d", &n) != 1 || n <= 0) {
        return 0;
    }

    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        return 0;
    }

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int k;
    if (scanf("%d", &k) != 1 || k <= 0 || k > n) {
        free(arr);
        return 0;
    }

    // Sort the array in ascending order
    qsort(arr, n, sizeof(int), compare);

    // kth smallest element will be at index (k - 1)
    printf("%d\n", arr[k - 1]);

    free(arr);
    return 0;
}
