#include <stdio.h>

int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int *ptr = a;

    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += *(ptr + i);
    }

    printf("%d\n", sum);
}