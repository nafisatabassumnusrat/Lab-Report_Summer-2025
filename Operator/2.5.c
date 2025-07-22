#include <stdio.h>

int main() {
    float a, b;
    printf("Enter two floating point numbers: ");
    scanf("%f %f", &a, &b);
    if (b != 0)
        printf("Quotient: %.2f\n", a / b);
    else
        printf("Division by zero is not allowed.\n");
    return 0;
}
