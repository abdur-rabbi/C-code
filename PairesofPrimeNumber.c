#include<stdio.h>
int is_prime(int x)
{
    for(int i=2; i*i<=x; i++)
    {
        if(x%i==0)
            return 0;
    }
}
int main()
{
    int i, n;
    printf("Please enter an even number: ");
    scanf("%d",&n);
    if(n<=2 || n%2!=0)
    {
        printf("Please initial an even & greater number than 2.");
        return 1;
    }


    for(i=2; i<=n/2; i++)
    {
        if(is_prime(i) && is_prime(n-i))
        {
            printf("%d , %d\n",i, n-i);
        }
    }



}
