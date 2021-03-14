#include<stdio.h>
void main()
{
    int i=0,sum=0,es=0,os=0;
    i=0;
    do
    {
        if(i%2==0)
        {
          es=es+i;
        }
        else
        {
            os=os+i;
        }

        sum=es+os;
        i++;
    }
    while(i<=50);
    printf("sum of even and odd=%d",sum);
}
