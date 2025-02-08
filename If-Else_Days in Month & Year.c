#include <stdio.h>
//first i will define a funtion of leap year
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
    int month, year;

    scanf("%d %d", &month, &year);

    if (month < 1 || month > 12) {
        printf("Invalid Month\n");
    } 
    if (year < 1) {
        printf("Invalid Year\n");
    } else {
        int days;
        switch (month) {
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                days = 31;
                break;
            case 4: case 6: case 9: case 11:
                days = 30;
                break;
            case 2:
                if (isLeapYear(year)) {
                    days = 29;
                } else {
                    days = 28;
                }
                break;
            default:
                days = 0; // This should never be reached because of earlier checks
        }
        printf("%d\n", days);
    }

    return 0;
}
