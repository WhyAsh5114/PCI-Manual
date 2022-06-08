#include <stdio.h>

int main()
{
    int l, b;
    printf("Enter length and breadth of rectangle: ");
    scanf("%d %d", &l, &b);

    int perimeter = 2 * (l + b);
    int area = l * b;
    printf("Area is: %d\n", area);
    printf("Perimeter is: %d\n", perimeter);
}