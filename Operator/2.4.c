#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two integers (dividend and divisor): ");
    scanf("%d %d", &a, &b);
    if (b != 0)
        printf("Quotient: %d\n", a / b);
    else
        printf("Division by zero is not allowed.\n");
    return 0;
}
