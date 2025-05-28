#include<stdio.h>
char strlength(char x[])
{
    int length=0;
    for(int i=0; x[i]!='\0'; i++)
    {
        length++;
    }
    return length;



}

int main()
{
    char str[100];
    printf("The input string is: ");
    gets(str);
    strlength(str);
    printf("The string length is:%d ", strlength(str));


}
