#include<stdio.h>
int main()
{
    int m, n, a, b, c;
    printf("The initial number is: ");
    scanf("%d",&m);
    printf("The final number is: ");
    scanf("%d",&n);
    if(m>0 && m<n)
    {
        printf("The initial range is valid for Pythagorean Triplets.");
    }
    else
    {
        printf("The initial range is not valid for Pythagorean Triplets.\n");
        return 1;

    }

    printf(" & The Pythagorean Triplets are:\n");
    for(a=m; a<=n; a++)
    {
        for(b=a+1; b<=n; b++)
        {
            for(c=b+1; c<=n; c++)
            {
                if(a*a+b*b==c*c)
                {
                    printf("%d, %d, %d\n",a, b, c);
                }
            }
        }
    }





}
