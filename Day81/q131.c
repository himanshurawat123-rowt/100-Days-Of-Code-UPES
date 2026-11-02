/*
Q131: Create an enumeration for days (SUNDAY to SATURDAY) and print 
each day with its integer value.

Sample Test Cases:
Input 1:
No input
Output 1:
SUNDAY = 0
MONDAY = 1
TUESDAY = 2
WEDNESDAY = 3
THURSDAY = 4
FRIDAY = 5
SATURDAY = 6
*/

#include <stdio.h>

// Define enum for days of the week
enum Day {
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
};

int main() {
    // Array of string representations matching the enum values
    const char *dayNames[] = {
        "SUNDAY",
        "MONDAY",
        "TUESDAY",
        "WEDNESDAY",
        "THURSDAY",
        "FRIDAY",
        "SATURDAY"
    };

    // Iterate through enum values from SUNDAY (0) to SATURDAY (6)
    for (int day = SUNDAY; day <= SATURDAY; day++) {
        printf("%s = %d\n", dayNames[day], day);
    }

    return 0;
}
