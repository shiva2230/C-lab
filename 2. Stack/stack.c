

#include<stdio.h>
#define N 5
int t= -1;
int stack[100];
void push();
void pop();
void top();
void display();
void main(){
int c;
do{
printf("\nEnter choice:\n 1. Push\n2.Pop\n3.Top\n4.Display\n5.Exit\n");
scanf("%d",&c);
switch(c){
case 1: push();
break;
case 2: pop();
break;
case 3: top();
break;
case 4: display();
break;
default: printf("Invalid Choice\n");
case 0: printf("Exiting\n");
break;
}
}while(c!=0);
}

void push(){
int x;
printf("Enter the data\n");
scanf("%d",&x);
if(t==N-1){
printf("overflow\n");
}
else{
t++;
stack[t]=x;
}
}

void pop(){
int item;
if(t==-1){
printf("underflow\n");
}
else{
item=stack[t];
t--;
printf("%d - popped item\n",item);
}
}

void top()
{if(t==-1){
printf("Stack is empty\n");
}
else{
printf("%d",stack[t]);
}
}

void display(){
int i;
for(i=t;i>=0;i--){
printf("%d\t",stack[i]);
}
}

