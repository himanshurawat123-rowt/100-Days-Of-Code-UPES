/*
Q64: Find the digit that occurs the most times in an integer number.

Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    if (scanf("%s", str) != 1) return 0;

    int count[10] = {0};

    // Har digit ki frequency count karna
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            count[str[i] - '0']++;
        }
    }

    // Maximum frequency wala sabse chhota digit dhoondna
    int max_freq = 0;
    int most_frequent_digit = 0;

    for (int i = 0; i <= 9; i++) {
        if (count[i] > max_freq) {
            max_freq = count[i];
            most_frequent_digit = i;
        }
    }

    printf("%d\n", most_frequent_digit);

    return 0;
}