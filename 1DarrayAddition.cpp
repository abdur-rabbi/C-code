                                /*addition of 1D arrray*/
#include <stdio.h>
#include <stdlib.h>
void add(int x[], int y[], int a)
{
    int i, j, z[a];
    printf("The elements of array A is: ");
    for (i = 0; i < a; i++)
    {
        x[i] = rand() % 15 + 10;
        {
            printf("%d ", x[i]);
        }
    }
    printf("\n\nThe elements of array B is: ");
    for (i = 0; i < a; i++)
    {
        y[i] = rand() % 10 + 10;
        {
            printf("%d ", y[i]);
        }
    }
    printf("\n\nAtter addition the elements of array C is: ");
    for (i = 0; i < a; i++)
    {
        z[i] = x[i] + y[i];
        {
            printf("%d ", z[i]);
        }
    }
}

int main()
{
    int m, n;
    printf("Input arry length: ");
    scanf("%d", &m);
    int arr1[m], arr2[m];
    add(arr1, arr2, m);
}