#include <stdio.h>

int main() {
    int day, month, year;
    char sep1, sep2;
    
    printf("Enter date in format DD-MM-YYYY, DD/MM/YYYY, DD MM YYYY or DD,MM,YYYY: ");
    scanf("%d%c%d%c%d", &day, &sep1, &month, &sep2, &year);

    printf("Day: %d\n", day);
    printf("Month: %d\n", month);
    printf("Year: %d\n", year);
    
    return 0;
}
