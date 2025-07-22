#include <stdio.h>

int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    printf("Divided by 2 = %d\n", n >> 1);
    return 0;
}
