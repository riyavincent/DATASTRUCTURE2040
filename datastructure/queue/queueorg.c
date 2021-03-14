#include<stdio.h>
#include<stdlib.h>
#define size 100
int queue[size];
int front=-1,rear=-1;
void enqueue();
void dequeue();
void top();
void display();
int main()
{
	int choice;
	while(1)
	{
		printf("\n1.Enqueue operation\n2.Dequeue operation\n3.Top\n4.Display\n5.Exit");
		printf("\nEnter the choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				enqueue();
				break;
			case 2:
				dequeue();
				break;
			case 3:
				top();
				break;
			case 4:
				display();
				break;
			case 5:
				exit(0);
			default:
				printf("\nInvalid choice");
				
			}
	}
}

	void enqueue()
		{
			int x;
			printf("ENETER ELEMENTS:");
			scanf("%d",&x);
			if(rear==size-1)
				{
					printf("\nOverflow");
				}
			else if(front==-1 && rear==-1)
				{
					front=rear=0;
					queue[rear]=x;
				}
			else
				{
					rear++;
					queue[rear]=x;
				}
				printf("\nItem inserted");
		}
		
	void dequeue()
		{
			if(front==-1 && rear==-1)
			{
				printf("\nUnderflow");
			}
			else if(front==rear)
			{
				front=rear=-1;
			}
			else
			{
				printf("Element DEQUEUE: %d",queue[front]);
				front++;
			}
		}
	void top()
		{
			if(front==-1 && rear==-1)
			{
				printf("\nQUEUE IS EMPTY");
			}
			else
			{
				printf("TOP ELEMENT IS:%d",queue[front]);
			}
	
		}
	void display()
		{
			if(front==-1 && rear==-1)
			{
				printf("\nQUEUE IS EMPTY");
			}
			else
			{
				for(int i=front;i<rear+1;i++)
				{
					printf("%d\n",queue[i]);
				}
			 }
		}
