#include<stdio.h>
void main()
{
    int i,sum=0,es=0,os=0;
    for(i=0;i<=50;i++)
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
    }
    printf("sum of even and odd=%d",sum);
}
