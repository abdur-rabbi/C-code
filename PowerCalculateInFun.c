#include<stdio.h>
int main()
{
    int i,x,y,result=1;
    printf("Enter the num: ");
    scanf("%d %d",&x,&y);
    for(i=1; i<=y; i++)
    {
        result*=x;
    }
    printf("\nThe power value is: %d",result);


    getch();

}
