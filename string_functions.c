#include <stdio.h>
#include <string.h>

int main()
{
    char s1[] = "Hello";
    char s2[] = "World";

    printf("Length of %s is: %d\n", s1, strlen(s1));

    if (strcmp(s1, s2) > 0) {
        printf("%s is larger than %s\n", s1, s2);
    } else if (strcmp(s1, s2) < 0) {
        printf("%s is smaller than %s\n", s1, s2);
    } else {
        printf("%s is equal to %s\n", s1, s2);
    }

    printf("Before copying: %s %s\n", s1, s2);
    strcpy(s1, s2);
    printf("After copying: %s %s\n", s1, s2);

    printf("Before concatenating: %s\n", s1);
    strcat(s1, s2);
    printf("After concatenating: %s\n", s1);
}