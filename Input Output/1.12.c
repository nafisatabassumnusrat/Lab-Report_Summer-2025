#include <stdio.h>

int main() {
    char ch;
    printf("Enter an uppercase letter: ");
    scanf(" %c", &ch);
    printf("Lowercase: %c\n", ch + 32);  // Assuming ASCII
    return 0;
}
