#include<stdio.h>
void largest(int arr[],int n)
{
    int i,x;
    x=arr[0];
    for(i=0; i<n; i++)
    {
        if(arr[i]>x)

            x=arr[i];
    }
    printf("\nThe largest num is: %d",x);
}

void smallest(int arr[], int n)
{
    int i,y;
    y=arr[0];

    for(i=0; i<n; i++)
    {
        if(arr[i]<y)

            y=arr[i];
    }
    printf("\nThe smallest num is: %d",y);
}
int main()
{
    int n,i;
    printf("The array length is: ");
    scanf("%d",&n);
    int arr[n];
    printf("Array elements:");
    for( i=0; i<n; i++)
    {
        arr[i]= rand()%21;
        {
            printf("\n%d",arr[i]);
        }
    }
    largest(arr,n);
    smallest(arr,n);
}
