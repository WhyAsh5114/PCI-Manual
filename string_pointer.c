#include <stdio.h>

int main()
{
    char *ptr;
    char str[] = "MAHARASHTRA STATE BOARD OF TECHNICAL EDUCATION";
    ptr = str + 11;

    printf("%s\n", ptr++);
    printf("%s\n", ptr);
    return 0;
}