#include <stdio.h>

int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    printf("n %% 4 = %d\n", n & 3);
    return 0;
}
