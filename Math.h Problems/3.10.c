#include <stdio.h>
#include <math.h>
#define M_PI 3.14159265358979323846
int main() {
    double n;

    printf("Enter value of n: ");
    scanf("%lf", &n);

    double result = atan(n) * 180 / M_PI;
    printf("tan⁻¹(%.4lf) = %.4lf°\n", n, result);

    return 0;
}
