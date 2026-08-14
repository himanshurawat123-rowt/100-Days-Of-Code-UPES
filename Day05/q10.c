Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

/*
Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2

*/

  #include <stdio.h>

int main() {
    int total_seconds;

    // Read total seconds
    if (scanf("%d", &total_seconds) == 1) {
        int hours = total_seconds / 3600;
        int minutes = (total_seconds % 3600) / 60;
        int seconds = total_seconds % 60;

        // Print output matching the exact format (h:m:s)
        printf("%d:%d:%d\n", hours, minutes, seconds);
    }

    return 0;
}
