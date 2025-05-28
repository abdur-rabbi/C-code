                                                             /*array mearge*/

#include<stdio.h>
int main()
{
    int i,n,m;
    printf("Array num1:");
    scanf("%d",&n);
    int arr1[n];
    printf("Array elements1: ");
    for(i=0; i<n; i++)
    {
        arr1[i]= rand()%21;
        {
            printf("%d ",arr1[i]);
        }
    }

    printf("\nArray num2:");
    scanf("%d",&m);
    int  arr2[m];
    printf("Array elements2: ");
    for(i=0; i<m; i++)
    {
        arr2[i]= rand()%21+10;
        {
            printf("%d ",arr2[i]);
        }
    }

    int x= n+m;
    int  arr3[x];

    for (i=0; i<n; i++)
    {
        arr3[i]=arr1[i];
    }
    for(i=0; i<m; i++)
    {
        arr3[n+i]=arr2[i];
    }

    printf("\nMearge array:\n");
    for(i=0; i<x; i++)
    {
        printf("%d ",arr3[i]);
    }


    getch();





}
