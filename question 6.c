//Write a program to print greater between two numbers. Print one number if both are the same.

#include <stdio.h>
int main()

{
int a,b;

printf("Enter a number:-");
scanf("%d",&a);

printf("Enter a number:-");
scanf("%d",&b);


if (a==b)
printf("%d\n",a);

if (a>b)
printf(" %d is greater than %d\n",a,b);

if (a<b)
printf("%d is greater than %d\n",b,a);

return 0;
}
