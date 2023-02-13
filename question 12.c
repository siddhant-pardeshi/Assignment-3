//Write a program to check whether a given alphabet is in uppercase or lowercase.

#include <stdio.h>
int main()
{
char ch;
printf("Enter an alphabet:-");
scanf("%c",&ch);

if (ch>='A' && ch<='Z')
printf("Given alphabet is in Upper case");

if (ch>='a' && ch<='z')
printf("Given alphabet is in lower case");


return 0;
}
