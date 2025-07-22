// Problem 4.7 - Minimum of three numbers using if
#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d%d%d", &a, &b, &c);

    if (a <= b && a <= c)
        printf("Minimum is %d\n", a);
    else if (b <= a && b <= c)
        printf("Minimum is %d\n", b);
    else
        printf("Minimum is %d\n", c);

    return 0;
}
