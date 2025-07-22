#include <stdio.h>

int main() {
    int marks;

    printf("Enter your marks (0-100): ");
    scanf("%d", &marks);

    if (marks >= 80 && marks <= 100) {
        printf("Division: First Division\n");
    } else if (marks >= 60 && marks < 80) {
        printf("Division: Second Division\n");
    } else if (marks >= 40 && marks < 60) {
        printf("Division: Third Division\n");
    } else if (marks >= 0 && marks < 40) {
        printf("Result: Fail\n");
    } else {
        printf("Invalid marks entered.\n");
    }

    return 0;
}
