//Write a program which takes the length of the sides of a triangle as an input. Display whether the triangle is valid or not.

#include <stdio.h>
int main()
{
int a,b,c;
printf("Enter sides of triangle to check:-");
scanf("%d %d %d",&a,&b,&c);

if (a+b>c) || (b+c>a) || (c+a)>b)
printf("Given Triangle is valid");

else
printf("Given Trianle is not Valid");

return 0;

}
