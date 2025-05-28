#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
    struct student
    {
        char name[100],dep[100],sect[100];
        int id,batch;
        float gpa;
    };

    int a,i;
    printf("Student number: ");
    scanf("%d",&a);
    struct student s[a];
    for(i=0; i<a; i++)
    {
        getchar();

        printf("Student name: ");
        fgets(s[i].name, sizeof(s[i].name), stdin);


        printf("Student dep: ");
        fgets(s[i].dep, sizeof(s[i].dep), stdin);


        printf("Student section: ");
        fgets(s[i].sect, sizeof(s[i].sect), stdin);


        printf("Student id: ");
        scanf("%d",&s[i].id);

        printf("Student batch: ");
        scanf("%d",&s[i].batch);

        printf("Student gpa: ");
        scanf("%f",&s[i].gpa);
    }
    printf("NAME\tDEPERTMENT\tSECTION\tID\tBATCH\tGPA\n");
    for(i=0; i<a; i++)
    {
        printf("%s\t%s\t%s\t%d\t%d\t%.2f\n",s[i].name,s[i].dep,s[i].sect,s[i].id,s[i].batch,s[i].gpa);
    }

}
