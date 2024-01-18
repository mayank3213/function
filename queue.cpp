#include<stdio.h>
#define max 5
int queue[max];
int front=-1;
int rear=-1;
void enqueue();
void dequeue();
void display();
int main()
{
int choice;
  printf("press 1.enqueue 2.dequeue 3.display 4.exit\n");
  scanf("d",&choice);
  while(1)
  {
switch (choice)
{
case(1):enqueue();
    break;
case(2):dequeue();
    break;
case(3):display();
    break;
case(4):exit(1);
    break;        
default:printf("enter correct choice");
}
  }  
    return 0;
}
void enqueue()
{
    int element;
    if (rear==max-1)
    {
        printf("queue is full");
    }
    else
    {
        if (front==-1)
            front=0;
            rear=rear+1;
            printf("enter element: ");
            scanf("%d",&element);
            queue[rear]=element;
        
    }
}
void dequeue()
{
    if (front==-1 || front>rear)
    {
        printf("queue is empty");
    }
    else
    {
        printf("dequeued element is %d",queue[front]);
        front=front+1;
    }
    
}
void display()
{
    int i;
    if (front==-1 || front==rear+1)
    {
        printf("queue is empty");
    }
    else
    {
        for(i=front;i<=rear;i++)
        printf("%d ",queue[i]);
    }
    
}