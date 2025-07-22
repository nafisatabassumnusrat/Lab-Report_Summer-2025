#include <stdio.h>

int main() {
    char name[50];
    printf("Enter your name: ");
    scanf("%s", name);  // This reads only first word
    printf("Your name is: %s\n", name);
    return 0;
}
