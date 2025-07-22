#include <stdio.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);  // Note the space before %c to consume newline
    printf("You entered: %c\n", ch);
    return 0;
}
