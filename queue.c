#include<stdio.h>

int rear=0;
int max=10;
int queue[9];
int front=0;
int i,choice;
void main();

void enque()
{
if (front==0 && rear==0)
{rear=1;
front=1;
printf("Enter a element to enque- ");
scanf("%d",&queue[rear]);
rear++;
printf("Element sucessfully Enqued..!!");
main();
}
if (front!=rear && front<rear)
{
printf("Enter a element to enque- ");
scanf("%d",&queue[rear]);
rear++;
printf("Element sucessfully Enqued..!!");
main();
}
else
printf("Queue full, please deque some elements and try again.");
main();
}

void deque()
{
if(front!=rear)
{
printf("Dequed");
front++;
main();
}
else
{
printf("Queue Empty, please enque some elements and try again.");
main();
}
}

void display()
{
if(front!=rear )
{
int di;
printf("Elements present in the Queue are- ");
for(di=front;di<rear;di++)
{
printf(" %d ",queue[di]);
}
main();
}
else
{
printf("Unable to display as queue is empty, please enque some elements and try again.");
main();
}
}

void main()
{
printf("\n\n\n-------Welcome to NK7's Queue Program-------\n       Please Note the Queue limit is 10\n       Please enter your choice:\n       1.Enque\n       2.Deque\n       3.Display the existing Queue\n       4.Exit\n\n");
scanf("%d",&choice);
if (choice==4) return;
else
{
switch (choice)
{
case 1:
	enque();
	break;
case 2:
	deque();
	break;
case 3:
	display();
	break;
default:
	printf("Invalid entry, please try again");
}
}
}
