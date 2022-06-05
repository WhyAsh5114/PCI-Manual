#include <stdio.h>
#include <string.h>


struct Library {
    int accession_number;
    char title[100];
    char author[100];
    float price;
    int flag;
} book1;


int main()
{
    printf("Enter accession number: ");
    scanf("%d", &book1.accession_number);

    char _title[100];
    printf("Enter title of book: ");
    scanf("%s", _title);
    strcpy(book1.title, _title);

    char _author[100];
    printf("Enter author of book: ");
    scanf("%s", _author);
    strcpy(book1.author, _author);

    printf("Enter price of book: ");
    scanf("%f", &book1.price);

    printf("Enter flag: ");
    scanf("%d", &book1.flag);


    printf("Accession number of book is: %d\n", book1.accession_number);
    printf("Title of book is: %s\n", book1.title);
    printf("Author of book is: %s\n", book1.author);
    printf("Price of book is: %f\n", book1.price);
    printf("Flag of book is: %d\n", book1.flag);
}