// Problem 3.12 - Sec Inverse
#include <stdio.h>
#include <math.h>

int main() {
    double n, sec_inv;
    printf("Enter a value (x): ");
    scanf("%lf", &n);

    if (n == 0) {
        printf("Sec inverse is undefined for 0\n");
    } else {
        sec_inv = acos(1 / n);  // sec⁻¹(x) = cos⁻¹(1/x)
        printf("Sec inverse of %.2lf is %.2lf radians\n", n, sec_inv);
    }

    return 0;
}