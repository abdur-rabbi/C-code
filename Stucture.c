#include<stdio.h>
int main()
{
    struct student
    {
        char name[20];
        int ID;
        char Depertment[100];
        float GPA;
        char Semester[100];
        char Section[10];
    };
    struct student s1,s2;
    printf("Enter First student name:");
    gets(s1.name);
    printf("Enter First student ID:");
    scanf("%d",&s1.ID);
    printf("Enter First student DEPT:");
    getchar();
    gets(s1.Depertment);
    printf("Enter First student GPA:");
    getchar();
    scanf( "%f",&s1.GPA);
    printf("Enter First student Semester:");
    getchar();
    gets(s1.Semester);
    printf("Enter First student Section:");
    getchar();
    gets(s1.Section);

    printf("Enter second student name:");
    gets(s2.name);
    printf("Enter second  student ID:");
    scanf( "%d",&s2.ID);
    printf("Enter second  student DEPT:");
    getchar();
    gets(s2.Depertment);
    printf("Enter second  student GPA:");
    getchar();
    scanf("%f",&s2.GPA);
    printf("Enter second  student Semester:");
    getchar();
    gets(s2.Semester);
    printf("Enter second  student Section:");
    getchar();
    gets(s2.Section);


    printf("Name\t\t ID\t\t Department\t\t GPA\t\t Semester\t\t Section\n");
    printf("%s\t\t%d\t\t%s\t\t%.2f\t\t%s\t\t%s\n\n",s1.name, s1.ID, s1.Depertment, s1.GPA, s1.Semester, s1.Section);
    printf("Name\tID\tDepartment\tGPA\tSemester\tSection\n");
    printf("%s\t\t%d\t\t%s\t\t%.2f\t\t%s\t\t\t%s\n\n",s2.name, s2.ID, s2.Depertment, s2.GPA, s2.Semester, s2.Section);



}
