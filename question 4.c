//Write a program to check whether a given number is an even number or an odd number without using % operator

#include <stdio.h>
int main()

{
int n;

printf("Enter a number");
scanf("%d",&n);

if (n&1)
printf("Given number is an odd number");

else
printf("given number is an even number");

return 0;
}
