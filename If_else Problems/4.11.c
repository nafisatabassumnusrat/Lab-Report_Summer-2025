#include <stdio.h>

int main() {
    int marks;

    printf("Enter your marks (0-100): ");
    scanf("%d", &marks);

    if (marks >= 80 && marks <= 100) {
        printf("Grade: A\n");
    } else if (marks >= 70 && marks < 80) {
        printf("Grade: B\n");
    } else if (marks >= 60 && marks < 70) {
        printf("Grade: C\n");
    } else if (marks >= 50 && marks < 60) {
        printf("Grade: D\n");
    } else if (marks >= 40 && marks < 50) {
        printf("Grade: E\n");
    } else if (marks >= 0 && marks < 40) {
        printf("Result: Fail\n");
    } else {
        printf("Invalid marks entered.\n");
    }

    return 0;
}
