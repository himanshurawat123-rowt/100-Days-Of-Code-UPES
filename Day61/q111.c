/*
Q111: Write a program to take an integer array arr and an integer k as inputs. 
The task is to find the first negative integer in each subarray of size k 
moving from left to right. If no negative exists in a window, print "0" for that window. 
Print the results separated by spaces as output.

Sample Test Cases:
Input 1:
arr[] = [-8, 2, 3, -6, 10], k = 2
Output 1:
-8 0 -6 -6

Input 2:
arr[] = [12, -1, -7, 8, -15, 30, 16, 28], k = 3
Output 2:
-1 -1 -7 -15 -15 0

Input 3:
arr[] = [12, 1, 3, 5], k = 3
Output 3:
0 0

*/

#include <stdio.h>

void printFirstNegativeInteger(int arr[], int n, int k) {
    int firstNegIndex = 0;

    for (int i = k - 1; i < n; i++) {
        // Window is from (i - k + 1) to i
        // Move pointer forward if it is out of window or non-negative
        while (firstNegIndex < i && (firstNegIndex < i - k + 1 || arr[firstNegIndex] >= 0)) {
            firstNegIndex++;
        }

        // Check if the element at firstNegIndex is a valid negative in the current window
        if (arr[firstNegIndex] < 0 && firstNegIndex >= i - k + 1) {
            printf("%d", arr[firstNegIndex]);
        } else {
            printf("0");
        }

        if (i < n - 1) {
            printf(" ");
        }
    }
    printf("\n");
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

    int k;
    if (scanf("%d", &k) != 1 || k <= 0 || k > n) {
        return 0;
    }

    printFirstNegativeInteger(arr, n, k);

    return 0;
}
