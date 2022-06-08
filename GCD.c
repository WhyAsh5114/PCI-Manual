#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter 2 numbers: ");
    scanf("%d %d", &a, &b);

    int min = a < b ? a : b;
    int gcd = 1;
    for (int i = 1; i <= min; i++) {
        if (a % i == 0 && b % i == 0) {
            gcd = i;
        }
    }

    printf("GCD is: %d\n", gcd);
}
