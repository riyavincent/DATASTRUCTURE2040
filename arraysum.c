#include<stdio.h>
int main()
{
int i,sum;
int a[5]={5,6,7,8,9};
sum=0;
for(i=0;i<5;i++)
{
sum=sum+a[i];
}
printf("sum of array is %d",sum);
return 0;
}
