#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    (a > b) ? printf("Maximum is %d\n", a) : printf("Maximum is %d\n", b);

    return 0;
}
