#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int result = num & 7;  // Modulo 8 using bitwise AND
    printf("%d mod 8 is %d\n", num, result);

    return 0;
}
