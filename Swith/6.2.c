#include <stdio.h>

int main() {
    int num;

    printf("Enter a number (1 to 10): ");
    scanf("%d", &num);

    switch (num) {
        case 1:
            printf("Roman numeral: I\n");
            break;
        case 2:
            printf("Roman numeral: II\n");
            break;
        case 3:
            printf("Roman numeral: III\n");
            break;
        case 4:
            printf("Roman numeral: IV\n");
            break;
        case 5:
            printf("Roman numeral: V\n");
            break;
        case 6:
            printf("Roman numeral: VI\n");
            break;
        case 7:
            printf("Roman numeral: VII\n");
            break;
        case 8:
            printf("Roman numeral: VIII\n");
            break;
        case 9:
            printf("Roman numeral: IX\n");
            break;
        case 10:
            printf("Roman numeral: X\n");
            break;
        default:
            printf("Invalid input! Please enter a number between 1 and 10.\n");
    }

    return 0;
}
