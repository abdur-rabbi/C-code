#include<stdio.h>
void num1(int x, int y)
{
    printf("\nBefore swapping num1 is: %d %d",x,y);
    int temp;
    temp= x;
    x = y;
    y = temp;

    printf("\nAfter swapping num1 is: %d %d",x,y);
}
int main()
{
    int n, m;
    printf("The two number is: ");
    scanf("%d %d",&n, &m);
    num1(n, m);


}
