#include<stdio.h>
int main()
{
    int n, m, x;
    printf("The fist input number is: ");
    scanf("%d",&n);
    printf("The second input number is: ");
    scanf("%d",&m);


    x= rand()%(m-n+1)+n;   // x= The random

    int i, b, count=0; //  b=maxtries
    printf("\nWe can tries only: ");
    scanf("%d",&b);

    for(i=1; i<=b; i++)
    {
        int a;
        printf("\nGuess the random number:");
        scanf("%d",&a);
        if(a>x)
        {
            printf("We are guessing the higher number than the random number.\n");
        }
        else if(a<x)
        {
            printf("We are guessing the lower number than the random number.\n");
        }
        else
        {
            printf("Congartulations, We guess the number.\n");
        }
        if(x==a)
        {
            count++;
        }
    }

    printf("Our score is: %d",(10-b+count));
}
