#include<stdio.h>

int main()
{
    int i, n;
    printf("The input arr is: ");
    scanf("%d",&n);
    int arr[n];
    printf("The array elements is: ");
    for(i=0; i<n; i++)
    {
        arr[i]= rand()%21;
        {
            printf("%d ",arr[i]);
        }
    }

    int j, f;
    printf("\nThe prime number are: ");

    for(i=0; i<n; i++)
    {
        f=1;
        if(arr[i]<2)
        {
            continue;
        }

        for(j=2; j*j<=arr[i]; j++)
        {
            if(arr[i]%j==0)
            {
                f=0;
                break;
            }

        }
        if(f==1)
            printf("%d ",arr[i]);

    }
}
