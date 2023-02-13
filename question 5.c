//Write a program to check whether a given number is a three digit number or not

#include <stdio.h>
int main()
{
int n;

printf("Enter a number:-");
scanf("%d",&n);

if ((n>99) && (n<1000))
printf("Given number is a three digit number");

else
printf("given number is not a three digit number");

return 0;
}
