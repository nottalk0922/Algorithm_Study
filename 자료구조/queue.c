#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int queue[MAX];
int front,rear;
front = -1;
rear = -1;

int isEmpty();
int isFull();
int enqueue();
int dequeue();

int main()
{
    int w;
    while(1){
        printf("1:enqueue |  2:dequeue | 3 exit()");
        scanf("%d", &w);
        switch(w){

            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
            	    break;
                
            default: 
        	       exit(0);
        }
    }
    return 0;
}


int isEmpty(){
    if(front==rear) return 1;
    else return 0;
}

int isFull(){
    if((rear+1)%MAX == front) return 1;
    else return 0;
}

int enqueue(){
    if(isFull()) {
        printf("full"); 
        return 0;
    }
    int val;
    scanf("%d", &val);
    printf("scan");
    queue[rear] = val;
    rear = ++rear % MAX; 
}

int dequeue(){
    if(isEmpty()){
        printf("Empty");
        return 0;
    }
    printf("%d￦n", queue[front]);
    front = ++front % MAX;
}
