#include<stdio.h>
int main()
{
    int i,n,x,position=0;
    printf("Array num:");
    scanf("%d",&n);
    int arr[n];
    printf(" Array elements: ");
    for(i=0; i<n; i++)
    {
        arr[i]= rand()%21;
        {
            printf("%d ",arr[i]);
        }
    }
    printf("\nSearch value: ");
    scanf("%d",&x);

    printf("\nThe value position is: ");

    for (i=0; i<n; i++)
    {
        if ( x==arr[i])
        {
            position=1;
            {
                 printf("%d ",i+1);
            }

        }

    }
    if(position==0)
        printf("\n Not found.");

    else
        printf(".");







}
