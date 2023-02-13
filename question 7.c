//Write a program to check whether roots of a given quadratic equation are real distinct, real & equal or imaginary roots

#include <stdio.h>
#include <math.h>
int main ()
{

double a,b,c,discriminant;

printf("Enter the coefficient of x^2 x and constant:-");
scanf("%1f %1f %1f",&a,&b,&c);

discriminant = b*b - 4*a*c;

if (discriminant >0)
printf("roots are real and unequal");

else if (discriminant == 0)
printf("roots are real and equal");

else
printf("roots are imaginary and unequal");

return 0;
}
