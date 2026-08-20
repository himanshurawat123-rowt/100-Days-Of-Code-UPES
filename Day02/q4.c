Q4: Write a program to calculate the area and circumference of a circle given its radius.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Area=153.94, Circumference=43.96

Input 2:
3
Output 2:
Area=28.27, Circumference=18.85

*/

  #include <stdio.h>

#define PI 3.141592653589793

int main() {
    double radius;
    
    // Read the radius
    if (scanf("%lf", &radius) == 1) {
        double area = PI * radius * radius;
        double circumference = 2 * PI * radius;
        
        // Print output rounded to 2 decimal places
        printf("Area=%.2f, Circumference=%.2f\n", area, circumference);
    }
    
    return 0;
}
