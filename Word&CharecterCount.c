#include<stdio.h>
int main()
{
    char str[1000],a;
    printf("A string is: ");
    gets(str);

    int i,vowel=0, consonant=0, words=1, digit=0, symbol=0,charecter=0;
    for(i=0; (a=str[i])!='\0'; i++)
    {

        if(a=='A' || a=='E' || a=='I' || a=='O' || a=='U' || a=='a' || a=='e' || a=='i' || a=='o' || a=='u')
        {

            vowel++;

        }


        else if(a>='A' && a<='Z' || a>='a' && a<='z')
        {
            consonant++;
        }


        else if(a==' ')
        {
            words++;
        }
        else if (a>='0' && a<='9')
        {
            digit++;
        }

        else
        {
            symbol++;
        }


    }
    printf("The number of vowel is: %d\n The number of consonant is: %d\n The number of words is: %d\n The number of digit is: %d\nThe number of symbol is: %d\n", vowel, consonant, words, digit, symbol);


}
