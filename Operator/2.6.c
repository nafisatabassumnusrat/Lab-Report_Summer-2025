#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    if (b != 0)
        printf("Remainder: %d\n", a % b);
    else
        printf("Division by zero is not allowed.\n");
    return 0;
}
