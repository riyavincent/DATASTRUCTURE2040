#include<stdio.h>
int main()
{
int i,k,j,a[50],b[50],n,m,sum[15];
printf("enter the size of the array\n");
scanf("%d",&n);
printf("enter elements\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("enter the size of the second array:");
scanf("%d",&m);
printf("enter the array elements:");
for(i=0;i<m;i++)
scanf("%d",&b[j]);
if(m==n)
{
for(i=0;i<n;i++)
for(j=0;j<m;j++)
{
sum[k]=a[i]+b[j];
}

printf("%d",sum[k]);
}
else
printf("addition is not possible");
return 0;
}
