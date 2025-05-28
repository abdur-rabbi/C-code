#include<stdio.h>
int main()
{
    char str[1000];
    int i,consonant=0,vowel=0,digit=0,word=1,symbol=0;
    printf("The string is: ");
    gets(str);

    for(i=0; str[i]!='\0'; i++)
    {
        if (str[i]>='A' && str[i]<='Z' || str[i]>='a' && str[i]<='z')
        {
            if(str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U' || str[i]=='a' || str[i]=='e' || str[i]=='o' || str[i]=='u' || str[i]=='i')
              {
                  vowel++;
              }

        else
        {
            consonant++;
        }
    }

    else if(str[i]>='0' && str[i]<='9')
    {
        digit++;
    }

    else if (str[i]==' ')
    {
        word++;
    }

    else
    {
        symbol++;
    }

}
printf("The number of vowel is: %d\n The number of consonant is: %d\n The number of digit is: %d\n The number of word id: %d\nThe number of Symbol is: %d\n",vowel,consonant,digit,word,symbol);

}









