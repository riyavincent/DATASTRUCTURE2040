#include<stdio.h>
int main()
{
int n,i,a[50];
printf("enter the length of array?n");
scanf("%d",&n);
printf("enter the element\n");
for(i=0;i<=n;i++)
scanf("%d",&a[i]);
printf("the elements are.....\n");
for(i=0;i<n;i++)
printf("%d\n",a[i]);
return 0;
}
