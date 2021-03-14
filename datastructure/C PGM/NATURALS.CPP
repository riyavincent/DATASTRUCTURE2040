#include<stdio.h>
int main()
{
int n,count,sum=0;
printf("enter the limit");
scanf("%d",&n);
for(count=1;count<=n;count++)
{
sum=sum+count;
}
printf("sum of 1st %d natural number is %d",n,sum);
return 0;
}