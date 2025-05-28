#include<stdio.h>
#define PI 3.1416
void circle(float r)
{
 float result = PI*r*r;
  printf("The circle area is: %.2f\n",result);
}

void squre(float a)
{
    float result= a * a;
    printf("The squre is: %.0f\n",result);
}

void rectanguler(float a, float b)
{
    float result = a * b;
    printf("The rectanguler area is: %.0f\n",result);

}
void triangle(float a,float b)
{
   float result= .5 * a * b;
    printf("The triangle area is: %.2f\n",result);
}
int main()
{
    float r,a,b;
    scanf("%f %f %f",&r, &a, &b);
    circle(r);
    squre( a );
    rectanguler(a , b);
    triangle(a , b);
    return 0;

}
