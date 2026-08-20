Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

/*
Sample Test Cases:
Input 1:
5 10
Output 1:
Area=50, Perimeter=30

Input 2:
3 7
Output 2:
Area=21, Perimeter=20

*/

  #include <stdio.h>

int main() {
    int length, breadth;
    
    // Read length and breadth from standard input
    if (scanf("%d %d", &length, &breadth) == 2) {
        int area = length * breadth;
        int perimeter = 2 * (length + breadth);
        
        // Print output in the exact required format
        printf("Area=%d, Perimeter=%d\n", area, perimeter);
    }
    
    return 0;
}
