#include <stdio.h>

int isLeapYear(int year) {
    if (year % 400 == 0) {
        return 1;
    } else if (year % 100 == 0) {
        return 0;
    } else if (year % 4 == 0) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int year;
    
    scanf("%d", &year);

    if (year < 1) {
        printf("The given year %d is Invalid year.\n", year);
    } else {
        if (isLeapYear(year)) {
            printf("Yes, %d is a leap year.\n", year);
        } else {
            printf("No, %d is not a leap year.\n", year);
        }
    }

    return 0;
}
