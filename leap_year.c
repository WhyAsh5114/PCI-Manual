#include <stdio.h>

int main()
{
    int year;
    printf("Enter leap year: ");
    scanf("%d", &year);

    if (year % 400 == 0) {
        printf("It is a leap year\n");
    } else if (year % 100 == 0) {
        printf("It is not a leap year\n");
    } else if (year % 4 == 0) {
        printf("It is a leap year\n");
    } else {
        printf("It is not a leap year\n");
    }
}