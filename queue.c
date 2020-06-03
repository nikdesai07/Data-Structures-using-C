#include<stdio.h>

int rear=0;
int max=10;
int queue[100];
int front=0;
int i,choice;
void main();

void enque()
{
if (front==0 && rear==0)
{
rear=1;
front=1;
printf("Enter a element to enque- ");
scanf("%d",&queue[rear]);
rear++;
printf("Element sucessfully Enqued..!!");
}
else if(rear!=max+1 && front<rear)
{
printf("Enter a element to enque- ");
scanf("%d",&queue[rear]);
rear++;
printf("Element sucessfully Enqued..!!");
}
else
printf("Queue full, please deque some elements and try again.");
}

void deque()
{
if(front!=rear)
{
printf("Dequed");
front++;
max++;
}
else
{
printf("Queue Empty, please enque some elements and try again.");
}
}

void display()
{
if(front!=rear)
{
int di;
printf("Elements present in the Queue are- ");
for(di=front;di<rear;di++)
{
printf(" %d ",queue[di]);
}
}
else
{
printf("Unable to display as queue is empty, please enque some elements and try again.");
}
}

void main()
{
printf("\n\n\n-------Welcome to NK7's Queue Program-------\n       Please Note the Queue limit is 10\n\n\n");
begin:
printf("\n\n       Please enter your choice:\n       1.Enque\n       2.Deque\n       3.Display the existing Queue\n       4.Exit\n\n");
scanf("%d",&choice);
switch (choice)
{
case 1:
	enque();
	goto begin;
	break;
case 2:
	deque();
	goto begin;
	break;
case 3:
	display();
	goto begin;
	break;
case 4:
	break;
default:
	printf("Invalid entry, please try again");
	goto begin;
}
}

