#include<stdio.h>
#include<stdlib.h>
int main()
{
    char str[100];
    printf("The string is: ");
    fgets(str, sizeof(str), stdin);
    int i, length =0;
    for(i=0; str[i]!='\0'; i++)
    {
        length++;
    }
    printf("\nThe reverse string is: ");
    for(i= length-1; str[i]!='\0'; i--)
    {
        printf("%c",str[i]);
    }
}


