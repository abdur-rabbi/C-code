#include<stdio.h>
int main()
{
    struct books
    {
        char title[100];
        char author[100];
        float price;
    };
    printf("The number of books are: ");
    int i, n;
    scanf("%d",&n);
    struct books b[n];
    for(i=0; i<n; i++)
    {
        getchar();
        printf("The title of the book is: ");

        gets(b[i].title);
        printf("The author of the book is: ");

        gets(b[i].author);
        printf("The price of the book is: ");

        scanf("%f",&b[i].price);
    }
    printf("The minimum value is: ");
    float x;
    scanf("%f",&x);
    printf("TITLE\tAUTHOR\tPRICE\n");
    for(i=0; i<n; i++)
    {
        if(b[i].price>x)
        {
            printf("%s\t%s\t%.2f\n",b[i].title, b[i].author, b[i].price);
        }
    }
    return 0;
}
