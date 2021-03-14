#include<stdio.h>
void main()
{
int mark;
printf("enter your mark\n");
scanf("%d",&mark);
if(mark>90&&mark<=100)
{
printf("you got A+");
}
else if(mark>80&&mark<=90)
{
printf("you got B+");
}
else if(mark>70&&mark<=80)
{
printf("you got C+");
}
else
printf("FAILED");
}
