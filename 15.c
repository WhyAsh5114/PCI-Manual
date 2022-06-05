#include <stdio.h>

int main()
{
    int m1[3][3];
    int m2[3][3];

    printf("Enter values for 1st matrix\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &m1[i][j]);
        }
    }

    printf("Enter values for 2nd matrix\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &m2[i][j]);
        }
    }

    int ms[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            ms[i][j] = m1[i][j] + m2[i][j];
        }
    }

    printf("The sum of the 2 matrices is\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", ms[i][j]);
        }
        printf("\n");
    }
}