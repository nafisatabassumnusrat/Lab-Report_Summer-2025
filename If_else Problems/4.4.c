// Problem 4.4 - Minimum of two numbers using if
#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two integers: ");
    scanf("%d%d", &a, &b);

    if (a < b)
        printf("Minimum is %d\n", a);
    else
        printf("Minimum is %d\n", b);

    return 0;
}
