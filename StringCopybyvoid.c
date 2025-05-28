#include<stdio.h>
void string(char x[])
{
    int i, len;
    for(i=0; x[i]!='\0'; i++)
    {
        len++;
    }

    char str2[100];
    printf("The second string is: ");
    gets(str2);
    int j;
    for(j=0; str2[j]!='\0'; j++)
    {
        x[len+j]= str2[j];
    }
    x[len+j]='\0';

    printf("The final string is: %s", x);
}
int main()
{
    char str[100];
    printf("The input string is: ");
    gets(str);
    string(str);
}
