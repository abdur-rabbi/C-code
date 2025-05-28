#include<stdio.h>
void string(char x[], char y[])
{
    char str3[200];
    int i, j;


    for(i=0; x[i]!='\0'; i++)
    {
        str3[i]=x[i];
    }
    for(j=0; y[j]!='\0'; j++)
    {
        str3[i+j]=y[j];
    }
    str3[i+j]='\0';

    printf("The merge string is:%s",str3);

}


int main()
{
    char str1[100],str2[110];
    printf("The first string is: ");
    gets(str1);
    printf("The second string is: ");
    gets( str2);
    string(str1, str2);


}
