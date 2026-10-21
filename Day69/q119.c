/*
Q119: Write a program to take an integer array as input. 
Only one element will be repeated. Print the repeated element. 
Try to find the result in one single iteration.

Sample Test Cases:
Input 1:
nums1 = [1,3,3,4]
Output 1:
3

Input 2:
nums1 = [1,2,2]
Output 2:
2

Input 3:
nums1 = [0,4,1,1,5]
Output 3:
1
*/

#include <stdio.h>

#define MAX_VAL 100000

int visited[MAX_VAL + 1];

int main() {
    int n;
    if (scanf("%d", &n) != 1 || n < 2) {
        return 0;
    }

    int val;
    int repeated = -1;

    // Single pass: as each element is read, check if it was seen before
    for (int i = 0; i < n; i++) {
        scanf("%d", &val);
        if (repeated == -1) {
            if (visited[val]) {
                repeated = val;
            } else {
                visited[val] = 1;
            }
        }
    }

    if (repeated != -1) {
        printf("%d\n", repeated);
    }

    return 0;
}
