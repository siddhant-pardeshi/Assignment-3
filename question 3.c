//Write a program to check whether a given number is an even number or an odd number

#include <stdio.h>
int main ()
{
    int n;
printf("Enter a number");
scanf("%d",&n);

if (n%2==0)
printf("Given number %d is an even nummber",n);

else
printf("Given number %d is an odd number",n);

return 0;
}
