#include<stdio.h>
int main()
{
int m,n,i,j,a[51][30];
printf("enter the rows");
scanf("%d",&m);
printf("enter the columns:");
scanf("%d",&n);
printf("enter the elements:");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("the array elemnts are..........\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("%d",a[i][j]);
}
}
return 0;
}
