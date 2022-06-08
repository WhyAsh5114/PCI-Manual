#include <stdio.h>

int main()
{
    int n;
    printf("Enter number of iterations: ");
    scanf("%d", &n);

    int a = 0;
    int b = 1;
    int c;
    for (int i = 0; i < n; i++) {
        c = a + b;
        a = b;
        b = c;
        printf("%d ", c);
    }
    printf("\n");
}