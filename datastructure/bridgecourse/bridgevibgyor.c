#include<stdio.h>
void main()
{
char ch;
printf("enter  a charecter in VIBGYOR\n");
scanf("%c",&ch);
if(ch=='v'||ch=='V')
{
printf("VIOLET");
}
else if(ch=='i'||ch=='I')
{
printf("INDIGO");
}
else if(ch=='b'||ch=='B')
{
printf("BLUE");
}
else if(ch=='g'||ch=='G')
{
printf("GREEN");
}
else if(ch=='y'||ch=='Y')
{
printf("YELLOW");
}
else if(ch=='o'||ch=='O')
{
printf("ORANGE");
}
else if(ch=='r'||ch=='R')
{
printf("RED");
}
else
{
printf("INVALID");
}
}


