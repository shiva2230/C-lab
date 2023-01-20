#include <stdio.h>
#define V 6

int queue[V];
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
    int front = 0;
    int rear = 0;
    int visited[V];

    queue[rear] = 0; //source inserted and visited
    visited[0] = 1;

    while(front<=rear){ // empty condition
        int source = queue[front++];//dequeue and pop
        printf("%d ",source);
        for(int i=0;i<V;i++){//traverse visited
            if(graph[source][i] == 1 && visited[i]!=1){
                queue[++rear] = i;//insertion
                visited[i] = 1;//vmarked as visited
            }
        }
    }
}