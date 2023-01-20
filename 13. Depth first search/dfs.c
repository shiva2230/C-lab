#include <stdio.h>
#define V 6

int stack[V];
int graph[V][V]  ={
       //1 2 3 4 5 6 
  /*1*/ {0,0,0,0,1,1},
  /*2*/ {0,0,0,0,0,1},
  /*3*/ {0,0,0,1,1,1},
  /*4*/ {0,0,1,0,1,0},
  /*5*/ {1,0,1,1,0,0},
  /*6*/ {1,1,1,0,0,0}
    };

int main(){
    int top=0
    int visited[V];

    stack[top] = 0; //source inserted and visited
    visited[0] = 1;

    while(top>=0){ // empty condition
        int source = stack[top--];//dequeue and pop
        printf("%d ",source);
        for(int i=0;i<V;i++){//traverse visited
            if(graph[source][i] == 1 && visited[i]!=1){
                stack[++top] = i;//insertion
                visited[i] = 1;//vmarked as visited
            }
        }
    }
}
