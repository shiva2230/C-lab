#include<stdio.h>
int arr[100],i;
float n;
void maximum();
void minimum();
void sum();
void mean();
void count();
void main(){
int choice;
printf("Enter how many numbers\n");
scanf("%f",&n);
printf("Enter the numbers\n");
for(int i=0;i<n;i++){
scanf("%d",&arr[i]);
}do{
printf("\nEnter your choice:\n1.Find Maximum\n2.Find Minimum\n3.Find Sum\n4.Find Mean\n5.Total number of elements\n0.Exit\n");
scanf("%d",&choice);
switch (choice){
case 1: maximum();
break;
case 2: minimum();
break;
case 3: sum();
break;
case 4: mean();
break;
case 5: count();
break;
case 0: printf("Exiting...\n");
break;
default: printf("Invalid choice\n");
}}while(choice!=0);
}

void maximum(){
int max=0;
for(i=0;i<n;i++){
if(max<arr[i]){
max=arr[i];
}
}printf("Maximum value= %d\n",max);
}

void minimum(){
int min=arr[0];
for(i=0;i<n;i++){
if(min>arr[i]){
min=arr[i];}
}printf("Minimum value=%d\n",min);
}

void sum(){
int s=0;
for(i=0;i<n;i++){
s=s+arr[i];
}
printf("Sum= %d\n",s);}

void mean(){
float s,m;
for(i=0;i<n;i++){
s=s+arr[i];
}

float num=n;
m=s/num;
printf("Mean=%f\n",m);

}

void count(){
printf("Number of elements = %f\n",n);
}

