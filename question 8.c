//Write a program to check whether a given year is a leap year or not

#include <stdio.h>
int main()

{
int n;

printf("Enter the year to check:-");
scanf("%d",&n);

if ((n%4==0)& (n%100!=0) || (n%400==0))
printf("Given year is a leap year");

else
printf("Given year is not a Leap year");

return 0;
}
