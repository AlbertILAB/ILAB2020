#include <stdio.h>
#include <stdlib.h>
#include "function.h"


int main()
{
   printf("Program solves solves linear and quadratic equations, ver.0.1, by Albert Shamsutdinov \n"
          "Enter coeffs a,b,c to solve quadratic equation ax^2+bx+c=0\n"
          "If you want to solve linear equation, ypu should enter a=0 before\n");

   float a=0,b=0,c=0;
   printf("Enter a:\n");
   scanf("%f",&a);

   printf("Enter b:\n");
   scanf("%f",&b);

   printf("Enter c:\n");
   scanf("%f",&c);


   if(a==0)
   {
       linear(b, c);
   }

   if(a!=0)
   {
       squad(a,b,c);
   }

}



