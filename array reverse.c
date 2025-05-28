#include<stdio.h>
int main()
{
    int i,n,temp;
    printf("Array num: ");
    scanf("%d",&n);
    int arr[n];
    printf("Array elements:\n ");
    for(i=0; i<n; i++)
    {
        arr[i]= rand()% 21;
        {
            printf("%d\n",arr[i]);
        }
    }

    printf("The swaping array is: ");
    for(i=0; i<n/2; i++)
    {
        temp= arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]= temp;
        {
            printf("%d ",temp);
        }
    }






}
