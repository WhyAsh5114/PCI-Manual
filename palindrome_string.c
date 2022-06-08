#include <stdio.h>

int main()
{
    int n;
    printf("Enter length of string: ");
    scanf("%d", &n);

    char s[n];
    printf("Enter string: ");
    scanf("%s", s);

    int is_palindrome = 1;
    for (int i = 0; i < n/2; i++) {
        if (s[i] != s[n-1-i]) {
            is_palindrome = 0;
            break;
        }
    }

    if (is_palindrome == 1) {
        printf("Given string is a palindrome\n");
    } else {
        printf("Given string is not a palindrome\n");
    }
}