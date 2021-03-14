#include<stdio.h>
int main()
{
int i,k,j,a[10],b[10],c[10],n;
printf("enter the size of first matrix");
scanf("%d",&n);
printf("enter the elements");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("enter the elements of second matrix");
for(j=0;j<n;j++)
scanf("5d",&b[j]);
for(i=0;i<n;i++)

for(j=0;j<n;j++)
for(k=0;k<n;k++)
c[k]=a[i]-b[j]
printf("answer is %d",c[k]);
return 0;
}
