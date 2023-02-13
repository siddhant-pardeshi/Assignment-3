//Write a program to check whether a given number is positive, negative or zero.

#include <stdio.h>
int main()
{
int n;
printf("Enter a number to check:-");
scanf("%d",&n);

if (n>0)
printf("Given number is positive");

else if (n<0)
printf("Given number is Negative");

else if (n==0)
printf("Given number is zero");

return 0;

}
