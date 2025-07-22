// Problem 3.14 - Calculate x^y
#include <stdio.h>
#include <math.h>

int main() {
    double x, y;
    printf("Enter base (x): ");
    scanf("%lf", &x);
    printf("Enter exponent (y): ");
    scanf("%lf", &y);

    double result = pow(x, y);
    printf("%.2lf^%.2lf = %.2lf\n", x, y, result);

    return 0;
}
