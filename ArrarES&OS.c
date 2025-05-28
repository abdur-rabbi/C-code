#include<stdio.h>
int main()
{
    int i,n,even=0,odd=0;
    printf("Array num:");
    scanf("%d",&n);
    int arr[n];
    printf("Array elements: ");
    for(i=0; i<n; i++)
    {
        arr[i]= rand()%16+10;
        {
            printf("%d ",arr[i]);
        }
    }
    printf("\n EvenSum:");
    for(i=0; i<n; i++)
    {
        if(arr[i]%2==0)
        {

            even+=arr[i];
        }
    }
    printf("%d",even);


    printf("\n OddSum:");
    for(i=0; i<n; i++)
    {
        if(arr[i]%2!=0)
        {

            odd+=arr[i];
        }
    }
    printf("%d",odd);


}
