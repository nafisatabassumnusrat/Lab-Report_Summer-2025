#include <stdio.h>

int main() {
    int a, b, min;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    min = (a < b) ? a : b;
    printf("Minimum is %d\n", min);

    return 0;
}
