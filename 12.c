#include <stdio.h>

int main()
{
    for (int i = 1; i <= 5; i++) {
        printf("Table of %d\n", i);
        for (int j = 1; j <= 10; j++) {
            printf("%d x %d = %d\n", i, j, i*j);
        }
        printf("\n");
    }
}