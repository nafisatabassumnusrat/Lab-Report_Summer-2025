// Problem 3.18 - Common Log (log10)
#include <stdio.h>
#include <math.h>

int main() {
    double x;
    printf("Enter a positive number: ");
    scanf("%lf", &x);

    if (x > 0)
        printf("log10(%.2lf) = %.2lf\n", x, log10(x));
    else
        printf("Log base 10 is undefined for non-positive numbers.\n");

    return 0;
}
