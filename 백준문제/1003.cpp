#include <bits/stdc++.h>
using namespace std;

int mem0[41] = {1,0,1,1,2,3,5,};
int mem1[41] = {0,1,1,2,3,5,8,};

int fibo0(int n){
	if(mem0[n]){
		return mem0[n];
	}
	return mem0[n] = fibo0(n-1) + fibo0(n-2);
}

int fibo1(int n){
	if(mem1[n]) return mem1[n];
	return mem1[n] = fibo1(n-1) + fibo1(n-2);
}

int main(){
	int n;
	scanf("%d",&n);
	while(n--){
		int a;
		scanf("%d",&a);
		if(a == 0) cout << mem0[0] << " " << mem1[0] << "\n";
		else if(a == 1) cout << mem0[1] << " " << mem1[1] << "\n";
		else {
			cout << fibo0(a) << " " << fibo1(a) << "\n";
		}	
	}
	return 0;
}
