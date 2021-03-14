#include<stdio.h>
void main()
{
int n,i,s,es,os;
printf("enter limit\n");
scanf("%d",&n);
i=0;
do
{
if(i%2==0)
es=es+i;
else
os=os+i;
}while(i<=n);
s=os+es;
printf("sum=%d",s);
}

