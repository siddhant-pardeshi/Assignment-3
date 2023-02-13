//Write a program which takes the cost price and selling price of a product from the user. Now calculate and print profit or loss percentage

#include <stdio.h>

int main()
{
float sp,cp,profit,loss,percentage;

printf("Enter the Cost price of the product");
scanf("%f",&cp);

printf("Enter the selling price of the product");
scanf("%f",&sp);

if (sp>cp)
{
profit = sp - cp;
printf("profit percentage is %f",profit/cp*100);
}

if (cp>sp)
{
loss= cp - sp;
printf("loss percentage is %f",loss/cp*100);
}

return 0;
}
