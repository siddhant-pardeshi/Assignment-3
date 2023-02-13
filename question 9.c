//Write a program to find the greatest among three given numbers. Print number once if the greatest number appears two or three times

#include <stdio.h>
int main()

{
int a,b,c;

printf("Enter the numbers to check:-");
scanf("%d %d %d",&a,&b,&c);

if (a>b && a>c)
printf("Given number %d is greater",a);

if (b>a && b>c)
printf("Given number %d is greater",b);

if (c>a&& c>b)
printf("Given number %d is greater",c);

if ((a==b) || (a==c) || (b==c))
printf("Greatest number is repeated",a);

return 0;
}
