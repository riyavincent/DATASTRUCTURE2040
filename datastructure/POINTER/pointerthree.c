#include<stdio.h>
int main()
{
int a[]={2,3,4};
int *q;
q=a;
printf("base address of array a=%p\n",q);

q=&a[2];
printf("address of last elemnt in the array %p\n",q);
return 0;

}
