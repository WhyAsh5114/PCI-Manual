#include <stdio.h>
#include <math.h>

int num_rev(int n)
{
    int tn = n;
    int num_of_digits = 0;
    while (tn > 0) {
        tn /= 10;
        num_of_digits++;
    }

    int rn = 0;
    for (int i = 0; i < num_of_digits; i++) {
        int digit = n % 10;
        n /= 10;
        rn += digit * pow(10, num_of_digits-i-1);
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