#include<stdio.h>

void main()
{
int n,i,es=0,os=0,s=0;
printf("Enter the limit");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if(i%2==0)
{
es=es+i;
}
else
{
os=os+i;
}

s=es+os;
}
printf("sum of odd and even numbers are:%d\n",s);
}
