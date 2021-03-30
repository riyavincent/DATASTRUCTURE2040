#include<stdio.h>
#include<stdlib.h>
void push();
void pop();
void display();
struct node
{
int value;15
struct node*next;
};
struct node*head;
int main()
{
int choice=0;
printf("\n*********Linked Stack*********\n");
printf("\n--------------------------\n");
while(choice!=4)
{
printf("\n\n Choose one from the below options...\n");
printf("\n1.push\n2.pop\n3.display\n4.exit\n");
printf("\n Enter your choice:");
scanf("%d",&choice);
switch(choice)
{
case 1:
{
push();
break;
}
case 2:
{
pop();
break;
}
case 3:
{
display();
break;16
}
case 4:
{
printf("Existing...");
break;
}
default:
{
printf("Please enter valid choice:");
}
};
}
}
void push ()
{
int value;
struct node *ptr=(struct node*)malloc(sizeof(struct node));
if(ptr==NULL)
{
printf("not able to push the element");
}
else
{
printf("Enter the value:");
scanf("%d",&value);
if(head==NULL)
{
ptr->value=value;
ptr->next=NULL;
head=ptr;17
}
else
{
ptr->value=value;
ptr->next=head;
head=ptr;
}
printf("item pushed");
}
}
void pop()
{
int item;
struct node*ptr;
if(head==NULL)
{
printf("Underflow");
}
else
{
item=head->value;
ptr=head;
head=head->next;
free(ptr);
printf("item popped");
}
}
void display()
{18
int i;
struct node*ptr;
ptr=head;
if(ptr==NULL)
{
printf("Stack is empty!!!\n");
}
else
{
printf("printing stack elements:\n");
while(ptr!=NULL)
{
printf("%d\n",ptr->value);
ptr=ptr->next;
}
}
}