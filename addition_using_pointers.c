#include <stdio.h>

void increment(int* num)
{
    *num = *num + 1;
}

int main()
{
    int n = 5;
    printf("Before increment: %d\n", n);
    increment(&n);
    printf("After increment: %d\n", n);
}