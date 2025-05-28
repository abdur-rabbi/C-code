#include<stdio.h>
int main()
{
    int i, n;
    printf("The number of array is: ");
    scanf("%d",&n);
    int arr[n];
    printf("The array elements are: ");
    for(i=0; i<n; i++)
    {
        arr[i]= rand()%16;
        {
            printf("%d ",arr[i]);
        }
    }


    int x, largest;
    x= largest;
    x=arr[i];
    printf("\nThe largest array is: ");
    for(i=0; i<n; i++)
    {
        if(arr[i]>x)

            x=arr[i];

    }
    printf("%d",x);


}
