#include<stdio.h>
void string(char x[])
{
    char a;
    printf("The occurrences character is: ");
  scanf("%c",&a);
    int i, count=0;
    for(i=0; x[i]!='\0'; i++)
    {
        if(x[i]==a)
        {
            count++;
        }

    }
    printf("\nThe value of occurrences character is: %d ",count);
}
int main()
{
    char str[100];
    printf("The input string is: ");
    gets(str);
    string(str);

}
