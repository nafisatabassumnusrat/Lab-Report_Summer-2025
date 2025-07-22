#include <stdio.h>

int main() {
    int marks;
    
    printf("Enter your marks (0-100): ");
    scanf("%d", &marks);

    if (marks >= 40 && marks <= 100) {
        printf("Result: Pass\n");
    } else if (marks < 40 && marks >= 0) {
        printf("Result: Fail\n");
    } else {
        printf("Invalid marks entered.\n");
    }
    
    return 0;
}
