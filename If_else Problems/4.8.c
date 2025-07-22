// Problem 4.8 - Medium of three numbers using if
#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d%d%d", &a, &b, &c);

    int medium;
    if ((a >= b && a <= c) || (a <= b && a >= c))
        medium = a;
    else if ((b >= a && b <= c) || (b <= a && b >= c))
        medium = b;
    else
        medium = c;

    printf("Medium is %d\n", medium);
    return 0;
}
