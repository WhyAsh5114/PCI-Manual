#include <stdio.h>
#include <math.h>

int num_rev(int n)
{
    int rn = 0;
    while (n > 0) {
        int digit = n % 10;
        rn = rn * 10 + digit;
        n /= 10;
    }
    return rn;
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("After reversal: %d\n", num_rev(n));
}