#include<stdio.h>
void charecter(char x)
{
    if(x>='A' && x<='Z' )
    {
        printf("capital letter");
        {
            if(x=='A' || x=='E' || x=='I' || x=='O' || x=='U')
            {
                printf(" & Vowel.");
            }
        }
    }
    else if(x>='a' && x<='z')
    {
        printf("small letter");
        {

            if(x=='a' || x=='e' || x=='i' || x=='o' || x=='u')
            {
                printf(" & Vowel.");
            }
        }
    }
    else if(x>='0' && x<='9')
    {
        printf("Digit.");
    }
    else
    {
        printf("Special symbol.");
    }
}



int main()
{
    char n,i;
    printf("The unknown number is: ");
    scanf("%c",&n);
    charecter(n);


}
