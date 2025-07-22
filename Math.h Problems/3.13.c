// Problem 3.13 - Cosec Inverse
#include <stdio.h>
#include <math.h>

int main() {
    double n, cosec_inv;
    printf("Enter a value (x): ");
    scanf("%lf", &n);

    if (n == 0) {
        printf("Cosec inverse is undefined for 0\n");
    } else {
        cosec_inv = asin(1 / n);  // csc⁻¹(x) = sin⁻¹(1/x)
        printf("Cosec inverse of %.2lf is %.2lf radians\n", n, cosec_inv);
    }

    return 0;
}
