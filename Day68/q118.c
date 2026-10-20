/*
Q118: Write a program to take an input array of size n. 
The array should contain all the integers between 0 to n except for one. 
Print that missing number.

Sample Test Cases:
Input 1:
nums1 = [0,3,2,4]
Output 1:
1

Input 2:
nums1 = [1,2,3]
Output 2:
0

Input 3:
nums1 = [0,4,3,1,5]
Output 3:
2
*/

#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1 || n < 1) {
        return 0;
    }

    int nums[n];
    long long actual_sum = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
        actual_sum += nums[i];
    }

    // Expected sum of numbers from 0 to n: n * (n + 1) / 2
    long long expected_sum = (long long)n * (n + 1) / 2;

    int missing_number = (int)(expected_sum - actual_sum);

    printf("%d\n", missing_number);

    return 0;
}
