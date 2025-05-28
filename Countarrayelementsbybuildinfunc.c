#include<stdio.h>
int main()
{
    int i,n,x;
    printf("Array num: ");
    scanf("%d",&n);
    int arr[n];
    printf("Array elements: ");
    for(i=0; i<n; i++)
    {
        arr[i]= rand()%21;
        {
            printf("%d ",arr[i]);
        }
    }
    for (i=0; i<n; i++)
    {
        x= sizeof arr/ sizeof ((int) n);
    }
    printf("\nThe number of array is: %d",x);
}
