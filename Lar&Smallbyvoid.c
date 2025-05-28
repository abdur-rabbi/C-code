#include<stdio.h>
#include<stdlib.h>
void largest(int arr[], int n)
{
  int x, largest;
    x= largest;
    x=arr[0];
    printf("\nThe largest array is: ");
    for(int i=0; i<n; i++)
    {
        if(arr[i]>x)

            x=arr[i];

    }
    printf("%d",x);
}

void smallest(int arr[], int n)
{
  int y;

    y=arr[0];
    printf("\nThe smallest array is: ");
    for(int i=0; i<n; i++)
    {
        if(arr[i]<y)

            y=arr[i];

    }
    printf("%d",y);
}

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
    largest(arr , n);
    smallest(arr, n);
}

