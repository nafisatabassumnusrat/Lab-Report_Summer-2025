#include <stdio.h>
#include <math.h>
#define M_PI 3.14159265358979323846
int main() {
    double n;

    printf("Enter value of n: ");
    scanf("%lf", &n);

    if (n != 0) {
        double result = atan(1 / n) * 180 / M_PI;
        printf("cot⁻¹(%.4lf) = %.4lf°\n", n, result);
    } else {
        printf("cot inverse undefined for n = 0\n");
    }

    return 0;
}
