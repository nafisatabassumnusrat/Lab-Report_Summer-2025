// Problem 3.15 - Square Root of a number
#include <stdio.h>
#include <math.h>

int main() {
    double num;
    printf("Enter a number: ");
    scanf("%lf", &num);

    if (num < 0)
        printf("Square root of a negative number is imaginary.\n");
    else
        printf("Square root of %.2lf is %.2lf\n", num, sqrt(num));

    return 0;
}
