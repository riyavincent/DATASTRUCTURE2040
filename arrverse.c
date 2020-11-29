#include<stdio.h>
int main()
{
int i,n,a[50];
printf("enter the length of array\n");
scanf("%d",&n);
printf("enter the elements\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("printing the array elements \n");
for(i=0;i<n;i++)
printf("%d\n",a[i]);
printf("printing the array elements in reverse order\n");
for(i=n-1;i>=0;i--)
printf("%d\n",a[i]);
return 0;
}
