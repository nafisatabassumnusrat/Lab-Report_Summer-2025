#include <stdio.h>

int main() {
    int num;
    printf("Enter an octal number: ");
    scanf("%o", &num);
    printf("Decimal: %d\n", num);
    return 0;
}
