#include<stdio.h>
#include<stdlib.h>
void enqueue();
void dequeue();
void top();
void display();
void search();
struct node{
	int data;
	struct node *next;	
}*newnode,*temp,*front=NULL,*rear=NULL;

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
	case 5: search();
	break;
	case 0: printf("Exiting...");
	break;
	default: printf("Invalid choice\n");
	}
	}
	while(c!=0);
}



void enqueue(){
	
	newnode=malloc(sizeof(struct node));
	printf("Enter the element you want to insert\n");
	scanf("%d",&newnode->data);
	
	if(rear==NULL){
		newnode->next=NULL;
		front=rear=newnode;
	}	
	else{
		rear->next=newnode;
		newnode->next=NULL;
		rear=newnode;		
	}	
	
}

void dequeue(){
	if(rear==NULL){
		printf("Nothing to delete\n");	
	}
	else{
		temp=front;
		front=front->next;
		printf("Deleted element=%d\n",temp->data);
		free(temp);
	}
}

void top(){
		if(rear==NULL){
			printf("Nothing to display\n");
		}
		printf("Top element =%d\n",front->data);
	}

void search(){
	int item,flag=0,count=0;
	if(top==NULL){
		printf("No element to search\n");	
	}
	else{
	printf("Enter the element you want to search\n");
	scanf("%d",&item);
	for(temp=front;temp!=NULL;temp=temp->next){
		count=count+1;
		if(temp->data==item){
			flag=1;
			
			break;
		}
	}
	if(flag==1){
		printf("Item found at position: %d\n",count);
	}
	else{
		printf("Item not found\n");			
	}
	}
	}

void display(){
	if(front==NULL){
		printf("The queue is empty\n");
	}
	else{
		for(temp=front;temp!=NULL;temp=temp->next){
			printf("%d \t",temp->data);
		}
	}

	}
