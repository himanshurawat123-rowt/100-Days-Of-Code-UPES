Q5: Write a program to convert temperature from Celsius to Fahrenheit.

/*
Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212

*/

  #include <stdio.h>

int main() {
    double celsius;

    // Read Celsius temperature
    if (scanf("%lf", &celsius) == 1) {
        // Formula: (C * 9/5) + 32
        double fahrenheit = (celsius * 9.0 / 5.0) + 32.0;

        // Print output formatted as an integer or rounded value
        printf("Fahrenheit=%.0f\n", fahrenheit);
    }

    return 0;
}
