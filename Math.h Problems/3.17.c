// Problem 3.17 - Natural Log (log)
#include <stdio.h>
#include <math.h>

int main() {
    double x;
    printf("Enter a positive number: ");
    scanf("%lf", &x);

    if (x > 0)
        printf("log(%.2lf) = %.2lf\n", x, log(x));
    else
        printf("Log is undefined for non-positive numbers.\n");

    return 0;
}
