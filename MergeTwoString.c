#include <stdio.h>
void string(char x[], char y[])
{
    int i, j;
    char str3[10000];
    for (i = 0; x[i] != '\0'; i++)
    {
        str3[i] = x[i];
    }
    for (j = 0; y[j] != '\0'; j++)
    {
        str3[i + j] = y[j];
    }
    str3[i + j] != '\0';
    printf("The merge string is: %s", str3);
}
int main()
{
    char str1[1000], str2[120];
    printf("The frist input string is: ");
    gets(str1);
    printf("The second input string is: ");
    gets(str2);
    string(str1, str2);
}
