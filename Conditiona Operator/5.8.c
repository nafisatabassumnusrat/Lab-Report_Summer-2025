#include <stdio.h>

int main() {
    int a, b, c, mid;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    mid = (a > b) ? ((a < c) ? a : ((b > c) ? b : c))
                  : ((b < c) ? b : ((a > c) ? a : c));
    
    printf("Middle value is %d\n", mid);

    return 0;
}
