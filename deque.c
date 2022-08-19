//deque ±¸Çö 
#include<bits/stdc++.h>
using namespace std;
#define MX 10000

int dequearr[2*MX+1];
int front = MX;
int back = MX+1;

void push_front(int data);
void push_back(int data);
void pop_front();
void pop_back();
void show();

int main(){
	int w,data;
	while(1){
		cout << "\n1:push_front | 2:push_back | 3:pop_front | 4:pop_back | 5:show\n";	
		cin >> w;
		switch(w){
			case 1:
				cin >> data;
				push_front(data);
				break;
			case 2:
				cin >> data;
				push_back(data);
				break;
			case 3:
				pop_front();
				break;
			case 4:	
				pop_back();
				break;
			case 5:
				show();
				break;
			default:
				exit(0);
				break;
		}
	}
	return 0;
}

void push_front(int data){
	dequearr[front] = data;
	front -= 1;
}

void push_back(int data){
	dequearr[back] = data;
	back += 1;
}

void pop_front(){
	if(dequearr[MX] == 0 && dequearr[MX+1] == 0) cout << "Empty" << "\n";
	else {
		cout << dequearr[++front];
		dequearr[front] = 0;
	}
}


void pop_back(){
	if(dequearr[MX] == 0 && dequearr[MX+1] == 0) cout << "Empty" << "\n";
	else {
		cout << dequearr[--back];
		dequearr[back] = 0;
	}
}

void show(){
	for(int i=front; i<=back; i++){
		cout << dequearr[i] << " ";
	}
	cout << "\n";
}
