// Write a program to check whether a given character is an alphabet (uppercase), an alphabet (lower case), a digit or a special character

#include <stdio.h>
int main()
{
char ch;
printf("Enter an alphabet:-");
scanf("%c",&ch);

if (ch>='A' && ch<='Z')
printf("Given alphabet is in Upper case");

else if (ch>='a' && ch<='z')
printf("Given alphabet is in lower case");

else if ((ch>='0') && (ch<='9'))
printf("Given alphabet is a digit");

else
printf("given alphabet is a special character");


return 0;
}
