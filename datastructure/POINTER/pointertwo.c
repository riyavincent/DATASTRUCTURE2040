#include<stdio.h>
int main()
{
int *p,a=5;
p=&a;
printf(" value of a %d\n",a);
printf("value of pointer p =%d\n",*p);
printf(" address of b=%p\n",&a);
printf("\n");
printf("value of pointer p =%p\n",p);

return 0;
}
