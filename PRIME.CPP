#include<stdio.h>
int main()
{
int n,i;
printf("enter a number");
scanf("%d",&n);
for(i=2;i<=n/2;i++)
{
if(n%i==0)
{
flag=1;break;
}
}
if(n==1)
{
printf("number is prime");
}
else
{
if(flag==1)
printf("number is prime");
else
printf("number is not prime");
}
return 0;
}