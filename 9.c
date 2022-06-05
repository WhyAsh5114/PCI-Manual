#include <stdio.h>

int main()
{
    float percentage;
    printf("Enter percentage: ");
    scanf("%f", &percentage);
    
    if (percentage >= 90 && percentage < 100) {
        printf("Grade is A\n");
    } else if (percentage >= 80 && percentage < 90) {
        printf("Grade is B\n");
    } else if (percentage >= 70 && percentage < 80) {
        printf("Grade is C\n");
    } else if (percentage >= 60 && percentage < 70) {
        printf("Grade is D\n");
    } else if (percentage >= 0 && percentage < 60) {
        printf("Candidate has failed\n");
    } else {
        printf("Invalid input\n");
    }
}