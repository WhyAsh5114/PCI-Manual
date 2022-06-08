#include <stdio.h>

int main()
{
    int r;
    printf("Enter radius: ");
    scanf("%d", &r);

    float circumference = 2 * 3.14 * r;
    float area = 3.14 * r * r;
    printf("Circumference is: %f\n", circumference);
    printf("Area is %f\n", area);
}