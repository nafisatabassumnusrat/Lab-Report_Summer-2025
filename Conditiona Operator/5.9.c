#include <stdio.h>

int main() {
    int mark;

    printf("Enter your mark: ");
    scanf("%d", &mark);

    (mark >= 40 && mark <= 100) ? printf("Pass\n") :
    (mark >= 0) ? printf("Fail\n") :
    printf("Invalid mark\n");

    return 0;
}
