#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter length of the 3 sides of triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a == b && b == c) {
        printf("Triangle is equilateral\n");
    } else if (a == b || b == c || a == c) {
        printf("Triangle is isosceles\n");
    } else {
        printf("Triangle is scalene\n");
    }

    if (a*a == b*b + c*c || b*b == a*a + c*c || c*c == a*a + b*b) {
        printf("Triangle is right angled\n");
    }
}