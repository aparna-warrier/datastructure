#include<stdio.h>
void cenqueue();
void cdequeue();
void display();
int isEmpty();
int isFull();
int rear=-1;
int front=-1;
int queue[100],n,x;
void main()
{
int ch;
printf("Enter the size of the queue\n");
scanf("%d",&n);
do
{
printf("\n\n\nCIRCULAR QUEUE OPERATIONS\n\n1-Enqueue\n2-Dequeue\n3-Display\n4.Exit\nEnter your choice\n");
scanf("%d",&ch);
switch(ch)
{
case 1:cenqueue();
        break;
case 2:cdequeue();
        break;
case 3:display();
        break;
case 4:Exit(1);
        break;       
default:printf("Invalid choice\n");
break;
}
}while(ch<4);
}
void cenqueue()
{
    if(isFull())
    {
      printf("Queue is full");
      return ;
    }
    else
    {
     if(front==-1)
        front=0;
    printf("Enter the element to be inserted\n");
    scanf("%d",&x);
    rear=(rear+1)%n;
    queue[rear]=x;
    printf("Element inserted successfully\n");
    }
}
void cdequeue()
{
if(isEmpty())
{
printf("Queue is empty");
return;
}
else
{
x=queue[front];
if(front==rear)
{
front=-1;
rear=-1;
}
else
{
front=(front+1)%n;
}
printf("Element deleted is %d",x);
}
}
void display()
{
  int i;
  if (isEmpty())
    printf(" \n Empty Queue\n");
  else {
    for (i = front; i != rear; i = (i + 1) % n) {
      printf("%d ", queue[i]);
    }
     printf("%d ", queue[i]);
  }
}
int isEmpty()
{
        if(front==-1)
                return 1;
        else
                return 0;
}
int isFull()
{
        if((front==0 && rear==n-1) || (front==rear+1))
                return 1;
        else
                return 0;

}


