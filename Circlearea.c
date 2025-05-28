#include<stdio.h>
#define PI 3.1416
float circle(float r)
{
    return PI*r*r;

}
float curcumference( float r)
{
    return 2*PI*r;
}
int main ()
{
    float r,x;
    printf("Enter radias: ");
    scanf("%f",&r);

    printf("The radias is: %.2f\n Curcumference is: %.2f",circle(r),curcumference(r));
}
