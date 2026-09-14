/*
Q66: Insert an element in a sorted array at the appropriate position.

Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6

*/

#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    int arr[n + 1];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int key;
    scanf("%d", &key);

    int i = n - 1;
    // Elements ko right shift karna jab tak sahi position na mil jaye
    while (i >= 0 && arr[i] > key) {
        arr[i + 1] = arr[i];
        i--;
    }
    arr[i + 1] = key;

    for (int j = 0; j <= n; j++) {
        printf("%d", arr[j]);
        if (j < n) {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}