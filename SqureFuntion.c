#include<stdio.h>
void sum(int x,int y)
{
    printf("The squre is: %d",x*y);
}
int main()
{

    int a;
    printf("The num: ");
    scanf("%d",&a);
    sum(a,a);


    getch();

}
