#include <stdio.h>

int main() {
    float income, tax = 0.0;

    // Reading input from the user
    scanf("%f", &income);

    // Checking if the income is within valid range
    if (income < -10000000 || income > 10000000) {
        printf("INVALID\n");
        return 0;
    }

    // Calculating tax based on the given rules
    if (income <= 250000) {
        tax = 0.0;
    } else if (income > 250000 && income <= 500000) {
        tax = (5.0 / 100.0) * (income - 250000);
    } else if (income > 500000 && income <= 1000000) {
        tax = (5.0 / 100.0) * 250000 + (20.0 / 100.0) * (income - 500000);
    } else if (income > 1000000) {
        tax = (5.0 / 100.0) * 250000 + (20.0 / 100.0) * 500000 + (30.0 / 100.0) * (income - 1000000);
    }

    // Printing the total tax payable up to 2 decimal places
    printf("%.2f\n", tax);

    return 0;
}