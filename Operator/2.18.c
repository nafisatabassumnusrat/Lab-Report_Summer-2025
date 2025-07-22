#include <stdio.h>

int main() {
    int n, result;
    printf("Enter number: ");
    scanf("%d", &n);
    result = (n << 2) + n;  // (n*4 + n) = n*5
    printf("Multiplied by 5 = %d\n", result);
    return 0;
}
