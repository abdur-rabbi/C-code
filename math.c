#include<stdio.h>
void sum(int x)
{
    int result= x*x ;


    printf("The sum is: %d\n",result);


}
int main()
{
    int a,b;
    printf("Two number is: ");
    scanf("%d",&a);
    sum(a);
}
