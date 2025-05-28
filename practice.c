#include <stdio.h>
int main()
{
    int i, n, x, y;
    printf("Input array length: ");
    scanf("%d", &n);
    int arr[n];
    printf("Array elements: ");
    for (i = 0; i < n; i++)
    {
        arr[i] = rand() % 10 + 15;
        {
            printf("%d ", arr[i]);
        }
    }
    x = y = arr[0];
    
    for (i = 0; i < n; i++)
    {
        if (arr[i] > x)
        {
            x = arr[i];
            {
                if (arr[i] < y)

                    y = arr[i];
            }
        }
    }
    printf("\nThe largest arry is: %d\nThe smalest arry is: %d", x, y);
}