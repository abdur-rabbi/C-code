#include<stdio.h>
int main()
{
    int n;
    printf("The password length is: ");
    scanf("%d",&n);      // enter length

    if(n<8)
    {
        printf("The password length must be at last 8 character.\n");
        return 1;
    }
    int i, j, caplen=0, smllen=0, spclen=0, dilen=0, alllen=0;

    char capl[]= "ABCDEFGHIJKLMNOPQRSTUVWXYZ"; // input capital letter
    for(i=0; capl[i] !='\0'; i++)
    {
        caplen++;
    }
    char smll[]="abcdefghijklmnopqrstuvwxyz";  //input small letter
    for(i=0; smll[i]!='\0'; i++)
    {
        smllen++;
    }

    char di[]="0123456789";   //input digit letter
    for(i=0; di[i]!='\0'; i++)
    {
        dilen++;
    }

    char spc[]="!@#$%^&*()_-+[]{}|;:,.<>?";   //input special letter
    for(i=0; spc[i]!='\0'; i++)
    {
        spclen++;
    }

    char x[n+1];

    x[0]= capl[rand()%caplen];
    x[1]= smll[rand()%smllen];
    x[2]= di[rand()%dilen];
    x[3]= spc[rand()%spclen];

    char y[]="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&*()_+[]{}|;:,.<>?";  // y= all character
    for(i=0; y[i]!='\0'; i++)
    {
        alllen++;  // length of all character
    }

    char temp;

    for(i=4; i<n; i++)
    {
        x[i]= y[rand()%(alllen-1)];
    }

    for(i=0; i<n; i++)
    {
        j= rand()% n;
        temp= x[i];
        x[i]=x[j];
        x[j]= temp;

    }
    x[n]='\0';
    printf("The password is: %s\n",x);
}
