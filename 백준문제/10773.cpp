#include <bits/stdc++.h>
using namespace std;

int main(){
	stack<int> S;
	int n,a,res=0;
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> a;
		if(a == 0) S.pop();
		else S.push(a);
	}
	while(!S.empty()){
		res += S.top();
		S.pop();
	}
	cout << res;
}
