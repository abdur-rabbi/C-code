#include<stdio.h>
#include <stdlib.h>
#include<conio.h>
int main()
{
    int i=0, n;
    printf("Inter a number: ");
    scanf("%d",&n);
    int arr[n];

    printf("array elements are: ");
   do
    {
       arr[i]=rand()%21;

         printf("%d ",arr[i]);
        i++;
    }
     while(i<n);


     getch();



}
