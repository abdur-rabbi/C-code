#include<stdio.h>
void passarray(int x[], int m)
{
    printf("The array elements are: ");
    for(int i=0; i<m; i++)
    {
       x[i]= rand()%16;
        {
            printf("%d ",x[i]);
        }
    }
}
    int main()
    {
        int i, n;
        printf("The array length is: ");
        scanf("%d",&n);
        int arr[n];
        passarray(arr, n);


    }

