//Write a program to take marks of 5 subjects from the user. Assume marks are given out of 100 and passing marks is 33. Now display whether the candidate passed the examination or failed

#include <stdio.h>

int main()
{
float s1,s2,s3,s4,s5,T,P;

printf("Enter the marks of the 5 subjects respectively");
scanf("%f %f %f %f %f",&s1,&s2,&s3,&s4,&s5);

T = s1+s2+s3+s4+s5;

printf("Total Marks is %f",T);

P=T/500*100;

if (P>=33)
printf("Passed\n");

else
printf("Failed");

return 0;
}
