#include <stdio.h>

int main() {
    char ch;
    printf("Enter a lowercase letter: ");
    scanf(" %c", &ch);
    printf("Uppercase: %c\n", ch - 32);  // Assuming ASCII
    return 0;
}
