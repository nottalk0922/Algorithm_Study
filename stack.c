#include <stdio.h>
#include <stdlib.h>
#define MAX 10
int top = -1;
int stack[MAX];

void push();
void pop();
void show();

int main(){
	int w;
	while(1){
		printf("1: push  |  2: pop  |  3: show  |  아무숫자키: exit\n");
		scanf("%d",&w);
		switch(w){
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				show();
				break;
			default:
				exit(0);
		}
	}
	return 0;
}

void push(){
	if(top == MAX-1)
		printf("Full");
	else{
		int val;
		printf("숫자를 입력하세요: ");
		scanf("%d",&val);
		top += 1;
		stack[top] = val; 
	}
}

void pop(){
	if(top == -1) printf("Empty\n");
	else{
		printf("%d\n",stack[top]);
		top -= 1;
	}
}

void show(){
	if(top == -1) printf("Empty\n");
	for(int i=top; i>=0; i--){
		printf(" %d \n",stack[i]);
	}
	printf("\n");
}
