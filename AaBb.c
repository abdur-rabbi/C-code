#include<stdio.h>
int main()
{
    char i,j;
    for(i=65,j=97; i<=91,j<=123; i++, j+=1)
        printf("%c%c\t",i,j);

    return 0;

}
