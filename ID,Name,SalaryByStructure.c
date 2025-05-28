#include<stdio.h>
int main()
{
    struct employ
    {
        char name[100];
        int id;
        float salary;
    };
    printf("The number of employ are: ");
    int i,n;
    scanf("%d",&n);
    struct employ e[n];
    for(i=0; i<n; i++)
    {
        printf("The employ name is: ");
        getchar();
        gets(e[i].name);
        printf("The employ id is: ");
        getchar();
        scanf("%d",&e[i].id);
        printf("The employ salary is: ");
        getchar();
        scanf("%f",&e[i].salary);
    }
    printf("NAME\tID\tSALARY\n");
    for(i=0; i<n; i++)
    {
        printf("%s\t%d\t%.2f\n",e[i].name, e[i].id, e[i].salary);
    }
    float x;
    for(i=0; i<n; i++)
    {
        x+=e[i].salary;
    }
    printf("The total salary is: %f",x);

}
