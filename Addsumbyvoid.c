#include<stdio.h>
void sum(int a, int y,int b)
{
    printf("The sum is: %d\n",a+y+b) ;
}
void sub(int c, int d, int e)
{

    printf("The sub is: %d\n",c-d-e);

}


int main()
{

    sum(12,45,1);

    sum(12,95,7);


    sub(12,45,7);

    sub(32,44,7);


    getch();

}
