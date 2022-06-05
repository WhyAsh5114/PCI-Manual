#include <stdio.h>

int main()
{
    float f;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &f);

    float c = ((f - 32) * 5)/9;
    printf("Temperature in celsius is: %f\n", c);
}