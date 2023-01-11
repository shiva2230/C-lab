#include<stdio.h>
#include<stdlib.h>
void push();
void pop();
void display();
void search();
struct node{
	int data;
	struct node *next; 
}*top=NULL,*newnode,*current,*tmp;


void main(){
	int choice;
	do{
	printf("Enter the choice: \n1.Push \n2.Pop \n3.Display\n4.Search");
	scanf("%d",&choice);
	switch(choice){
	case 1:push();
	break;	
	case 2:pop();
	break;
	case 3:display();
	break;	
	case 4:search();
	break;
		
	}
	}while(choice!=0);
}
	




void push(){
	newnode=malloc(sizeof(struct node));
	printf("Enter the value you want to insert");
	scanf("%d",&newnode->data);
	
	
		newnode->next=top;
		top=newnode;	

	
}

void pop(){
	if(top==NULL){
	printf("Nothing to pop");
	}
	else{
	tmp=top;
	top=top->next;
	printf("Popped item= %d",tmp->data);
	free(tmp);	
	}
}

void display(){

	if(top==NULL){
	printf("Nothing to display");	
	}
	else{
	for(current=top;current!=NULL;current=current->next){
	printf("%d\t",current->data);
	}
	}
}

void search(){
	int item,flag=0,count=0;
	if(top==NULL){
		printf("No element to search");	
	}
	else{
	printf("Enter the element you want to search");
	scanf("%d",&item);
	for(current=top;current!=NULL;current=current->next){
		count=count+1;
		if(current->data==item){
			flag=1;
			
			break;
		}
	}
	if(flag==1){
		printf("Item found at position: %d",count);
	}
	else{
		printf("Item not found");			
	}
	}
	}
