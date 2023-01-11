#include<stdio.h>
#include<stdlib.h>
#define N 10
void enqueue();
void display();
void top();
void dequeue();
int queue[N];
int front=-1,rear=-1;
int item,i;
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
void enqueue(){
	if((rear+1)%N==front){
		printf("Overflow");
			
	}
	else{
		printf("Enter the element you want to add\n");
		scanf("%d",&item);
		if(front==-1&&rear==-1){
			front=rear=0;
			queue[rear]=item;
		}
	
	
		else{	
			rear=(rear+1)%10;	
			queue[rear]=item;
		}
	}
}

void dequeue(){
		if(rear==-1&& front==-1){
			printf("Underflow \n");			
		}	
		else if(front==rear)  
	    {  
	   	printf("\nThe deleted element is %d", queue[front]);  
	   	front=-1;  
	   	rear=-1;  
	    }   
	    else  
	    {  
		printf("\nThe deleted element is %d", queue[front]);  
	
		front=front+1; 
	    }  
		}

void top()
	{
		if(front==-1&&rear==-1){
		printf("Underflow\n");}
		else{
		printf("top element =%d\n",queue[front]);
		}
	}

void display(){
		if(front ==-1 && rear==-1){
			printf("Queue is empty\n");
		}else{
			for(i=front;i<=rear;i++){
				printf("%d \t",queue[i]);			
			}	
		}

	}
