#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float linear(float b, float c)
{
    float x=0;
    if( b!=0)
    {
        x=-c/b;
        printf("1 decision: x= %.2f",x);
    }
    if(b==0 && c==0)
    {
        printf("Infinite set");
    }
    if(b==0 && c!=0)
    {
        printf("No solutions");
    }
    return 0;
}
float squad(float a,float b, float c)
{
    double discr=0;
    discr=b*b-4*a*c;
    double x1=0,x2=0;
    if(discr>0)
    {
        x1=(-b-sqrt(discr))/(2*a);
        x2=(-b+sqrt(discr))/(2*a);
        printf("2 solutions:\n");
        printf("x1= %.2f\n",x1);
        printf("x2= %.2f",x2);
    }
    if(discr==0)
    {
        x1=(-b)/(2*a);
        printf("1 solution: x= %.2f",x1);
    }
    if(discr<0)
    {
        printf("No solutions");
    }
    return 0;

}

