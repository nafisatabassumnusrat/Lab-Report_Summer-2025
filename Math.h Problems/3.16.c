// Problem 3.16 - e^x
#include <stdio.h>
#include <math.h>

int main() {
    double x;
    printf("Enter the value of x: ");
    scanf("%lf", &x);

    printf("e^%.2lf = %.2lf\n", x, exp(x));
    return 0;
}
