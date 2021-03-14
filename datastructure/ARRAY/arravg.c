#include<stdio.h>
int main()
{
int i,n,a[50],sum=0,avg=0;
printf("enter the size\n");
scanf("%d",&n);
printf("enter the elements\n");
for(i=0;i<n;i++)

scanf("%d",&a[i]);
printf("array elements are\n");
for(i=0;i<n;i++)

printf("%d\n",a[i]);
printf("calculating average of array elements\n");
for(i=0;i<n;i++)
sum=sum+a[i];
avg=sum/n;
printf("avarege  of array elements is%d",avg);
return 0;
}
