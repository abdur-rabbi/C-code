#include<stdio.h>
int main()
{
    int n;
    printf("The input number is: ");
    scanf("%d",&n);
    int flag=0;
    for(int i=2; i<n; i++ )
    {
        if(flag%i==0)
            flag=1  ;
        break;
    }
    if (flag==1)
        printf("Its a prime number.");
    else
        printf("Not prime number.");
}
