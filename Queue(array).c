#include<stdio.h>
#include<stdlib.h>

int queue[100],i,n,front=-1,rear=-1;

void enqueue();
void dequeue();
void display();
void main()
{
	printf("\nEnter number of items:");
	scanf("%d",&n);
	printf("\n***** Operations *****\n");
	printf("\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
	int choice=0;
	while(choice!=4)
	{
		printf("\nEnter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:enqueue();break;
			case 2:dequeue();break;
			case 3:display();break;
			case 4:exit(0);
			default:printf("\nYou entered wrong key");
		}
	}
}
void enqueue()
{
	int item;
	if(rear==n-1)
	printf("\nOverflow");
	else
	{
		printf("\nEnter the item:");
		scanf("%d",&item);
		if(front==-1)
		front=front+1;
		rear=rear+1;
		queue[rear]=item;
		printf("\nItem enqueued");
	}
}
void dequeue()
{
	if(front==-1 || front>rear)
	printf("\nUnderflow");
	else
	{
		if(front==rear)
		{
			front=rear=-1;
			printf("\nItem dequeued");
		}
		else
		{
			front=front+1;
			printf("\nItem dequeued");
		}
	}
}
void display()
{
	if(front==-1 || front>rear)
	printf("\nUnderflow");
	else
	{
		printf("\nQueue: ");
		for(i=front;i<=rear;i++)
		{
			printf("%d ",queue[i]);
		}
	}
}
