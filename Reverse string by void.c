#include<stdio.h>
void string(char x[])
{
    int i, length=0;
    for(i=0; x[i]!='\0'; i++)
    {
        length++;
    }
    printf("\nThe reverse string is: ");
    for(i=length-1; x[i]!='\0'; i--)
    {
        printf("%c",x[i]);
    }
}


int main()
{
    char str[100];
    printf("The input string is: ");
    fgets(str, sizeof(str), stdin);
    string(str);
}
