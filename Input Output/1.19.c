#include <stdio.h>

int main() {
    char line[100];
    printf("Enter a line of text: ");
    getchar(); // clear buffer before using fgets
    fgets(line, sizeof(line), stdin);
    printf("You entered: %s", line);
    return 0;
}
