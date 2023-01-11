#include<stdio.h>
#include<stdlib.h>
void insertbeg();
void display();
void insertAfter();
void insertend();
void deletebeg();
void deleteAfter();
void deleteend();
void search();
struct node{
	int data;
	struct node *next;
	struct node *prev;
};
struct node *newnode ,*head,*ptr,*preptr;
void main(){
int choice;
do{
	printf("\nEnter the choice\n\n1.Insertion from begining\n2.Insertion after a specific element\n3.Insertion in the end\n4.Deletion from the begining\n5.Deletion after a specific element\n6.Deletion from the end\n7.Seaching\n8.Display Elements\n0.Exit\n");
	scanf("%d",&choice);

	switch(choice){
		case 1:insertbeg();
		break;
		case 2:insertAfter();
		break;
		case 3:insertend();
		break;
		case 4:deletebeg();
		break;
		case 5:deleteAfter();
		break;
		case 6:deleteend();
		break;
		case 7:search();
		break;
		case 8:display();
		break;
		case 0:printf("Exiting...\n");
		break;
		default:printf("Wrong choice\n");
		
	}
	
}while(choice!=0);
}


void insertbeg(){
int item;
ptr=head;

newnode=malloc(sizeof(struct node));
printf("Enter the data to be inserted");
scanf("%d",&item);
newnode->data=item;
newnode->prev=NULL;
newnode->next=head;
head=newnode;
}


void insertAfter(){
	newnode=malloc(sizeof(struct node));
	int num,item;	
	ptr=head;
	printf("Enter the data\n");	
	scanf("%d", &item);
	newnode->data=item;
	printf("Enter the location after which you want to insert\n");
	scanf("%d",&num);
	while(ptr->data!=num){
		ptr=ptr->next;	
	}
		
	newnode->next=ptr->next;
	newnode->prev=ptr;
	ptr->next=newnode;
	ptr->next->prev=newnode;
	
}

void insertend(){
	int item;
	newnode=malloc(sizeof(struct node));
	ptr=head;
	printf("Enter the data to be inserted");
	scanf("%d",&item);

	if(head==NULL){
		newnode->data=item;
		newnode->prev=NULL;
		newnode->next=head;
		head=newnode;
	}
	else{

	newnode->data=item;
	newnode->next=NULL;
	while(ptr->next!=NULL){
	ptr=ptr->next;
	}
	newnode->prev=ptr;	
	ptr->next=newnode;
	
}}


void deletebeg(){

if(head==NULL){
printf("Underflow");
}

else{
	ptr=head;
	head=head->next;
	printf("Deleted item = %d",ptr->data);
	free(ptr);
}

}

void deleteAfter(){
int num;
if(head==NULL){
printf("Underflow");
}
else{
	printf("Enter the location:");
	scanf("%d",&num);
	ptr=head;
	while(ptr->data!=num){
preptr=ptr;
	ptr=ptr->next;
	}
	
	printf("%d deleted\n",ptr->data);
	preptr->next=ptr->next;
	ptr->next->prev=preptr;
	free(ptr);
}
}

void deleteend(){
	ptr=head;
	if(head==NULL){
	printf("Underflow");
	}
	else if(ptr->next==NULL){
	head=head->next;
	printf("Deleted item = %d",ptr->data);
	free(ptr);
	}
		
	
	else{
	
	while(ptr->next!=NULL){
		preptr=ptr;
		ptr=ptr->next;
	}
	preptr->next=NULL;
	free(ptr);
}
}


void display(){
	ptr=head;
	if(ptr==NULL){
		printf("Nothing to display\n");
	}
else{
	while(ptr!=NULL){
		printf("%d \t",ptr->data);
		ptr=ptr->next;
	}
	printf("\n");
}
	
}

void search(){
	
	int value,flag=0,count=0;
	printf("Enter the element to search\n");
	scanf("%d",&value);
	for(ptr=head;ptr!=NULL;ptr=ptr->next){
		count++;
		if(ptr->data==value){
			flag=1;
			break;
		}
	}
	if(flag==1){
		printf("%d found at position %d\n",value,count);
	}
	else{
		printf("Item not found!\n");
	}
}
