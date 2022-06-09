#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    int len = 0;
    int tn = n;
    while (tn > 0) {
        len += 1;
        tn /= 10;
    }

    int rn = 0;
    tn = n;
    while (tn > 0) {
        rn += (tn % 10) * pow(10, len-1);
        len -= 1;
        tn /= 10;
    }

    if (n == rn) {
        printf("Number is palindrome\n");
    } else {
        printf("Number is not palindrome\n");
    }
}