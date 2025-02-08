#include <stdio.h>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    float n;
    scanf("%f", &n);
    float a = n * 5.00;
    float b = (n - 100.00) * 7.00;
    float c = (n - 300.00) * 10.00;
    
    if (n > 0 && n <= 100) {
        if (a <= 1200.00) {
            printf("The electricity bill is: %.2f.\n", (9.00 / 10.00) * a);
        } else {
            printf("The electricity bill is: %.2f.\n", a);
        }
    } else if (n > 100 && n <= 300) {
        float k = b + 500.00;
        if (k <= 1200.00) {
            printf("The electricity bill is: %.2f.\n", (9.00 / 10.00) * k);
        } else {
            printf("The electricity bill is: %.2f.\n", k);
        }
    } else if (n > 300) {
        printf("The electricity bill is: %.2f.\n", 500.00 + 1400.00 + c);
    } else {
        printf("Invalid Input!\n");
    }
    return 0;
}