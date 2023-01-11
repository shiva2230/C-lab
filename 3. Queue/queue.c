#include<stdio.h>
#define N 10
void enqueue();
void dequeue();
void top();
void display();
int front=-1,rear=-1;
int queue[N];
void main(){
int c;
do{
printf("Enter your choice \n1.enqueue\n2.dequeue\n3.top\n4.display\n0.Exit\n");
scanf("%d",&c);
switch(c)
{
case 1: enqueue();
break;
case 2: dequeue();
break;
case 3: top();
break;
case 4: display();
break;
case 0: printf("Exiting...");
break;
default: printf("Invalid choice");
}
}
while(c!=0);
}

void enqueue()
{
int data;
printf("Enter data\n");
scanf("%d",&data);
if(rear==N-1)
{
printf("Queue is full\n");
}
else if(front==-1 && rear==-1)
{
front=rear=0;
queue[rear]=data;
}
else{
rear++;
queue[rear]=data;
}}

void dequeue()
{
if(front==-1 && rear==-1){
printf("Underflow\n");
}
else if(front==rear)
{
front=rear=-1;
}
else{
printf("Element deque %d",queue[front]);
front++;
}
}

void top(){
if(front==-1&&rear==-1){
printf("Underflow\n");}
else{
printf("top element =%d",queue[front]);
}
}

void display()
{
int i;
for(i=front;i<=rear;i++){
printf("%d\t",queue[i]);
}
printf("\n");
}
