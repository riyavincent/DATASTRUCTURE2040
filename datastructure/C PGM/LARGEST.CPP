#include<stdio.h>
int main()
{
int num1,num2,num3;
printf("enter 3 numbers");
scanf("%d%d%d",&num1,&num2,&num3);
if((num1>num2)&&(num1>num3))
printf("number is largest");
else if((num2>num1)&&(num2>num3))
printf("number 2 is greater");
else
printf("number 3 is greater");
return 0;
}