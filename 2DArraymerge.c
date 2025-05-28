#include <stdio.h>
#include <stdlib.h>
int main()
{

    int i, j, m, n;
    printf("Array length: ");
    scanf("%d %d", &m, &n);
    int arr1[m][n], arr2[m][n], arr3[m][n];
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            arr1[i][j] = rand() % 21;
            arr2[i][j] = rand() % 16;
            arr3[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    printf("\n");

    printf("Matrix A:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {

            printf("%2d ", arr1[i][j]);
        }

        printf("\n");
    }
    printf("\n");

    printf("Matrix B:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%2d ", arr2[i][j]);
        }

        printf("\n");
    }
    printf("\n");

    printf("Matrix A+B:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)

        {
            printf("%2d ", arr3[i][j]);
        }
        printf("\n");
    }
}
