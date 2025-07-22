#include <stdio.h>
#include <math.h>
#define M_PI 3.14159265358979323846
int main() {
    double n;

    printf("Enter value of n (between -1 and 1): ");
    scanf("%lf", &n);

    if (n >= -1 && n <= 1) {
        double result = asin(n) * 180 / M_PI;
        printf("sin⁻¹(%.4lf) = %.4lf°\n", n, result);
    } else {
        printf("Invalid input! sin⁻¹(n) is defined for -1 ≤ n ≤ 1.\n");
    }

    return 0;
}

