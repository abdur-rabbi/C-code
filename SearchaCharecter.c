#include <stdio.h>
int main()
{
    char a, str[1000];
    int i, flag = 0;
    printf("The input string is: ");
    gets(str);
    printf("The search charecter is: ");
    scanf("%c", &a);
    printf("The position of character is: ");
    for (i = 0; str[i] != '\0'; i++)
    {
        if (a == str[i])
        {
            flag = 1;
            {
                printf("%d ", i + 1);
            }
        }
    }
    if (flag == 0)
        printf("\nNot Found.");
    else
        printf(".");
}
