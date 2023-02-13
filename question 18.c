//Write a program which takes the month number as an input and display number of days in that month

#include <stdio.h>
int main()
{
int m;

printf("Enter the month number");
scanf("%d",&m);

if ((m==1)||(m==3)||(m==5)||(m==7)||(m==8)||(m==10)||(m==12)||(m==14))
printf("month has 31 days");

if (m==2)
printf("February month has 28 days");

else
printf("month has 30 days");

return 0;
}
