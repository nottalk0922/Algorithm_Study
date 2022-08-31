#include <bits/stdc++.h>
using namespace std;

int cnt;

int main(){
	int n;
	bool res;
	string a;

	cin >> n;
	while(n--){	
		stack<int> S;
		res = true;
		cin >> a;
		for(int i=0; i<a.length(); i++){
			if(a[i] == ')'){
				if(S.empty()){
					res = 0;
					break;
				}
				S.pop();
			}
			else S.push(a[i]);
		}
		if(S.empty() && res){
			cout << "YES" << "\n";
		} 
		else cout << "NO" << "\n"; 
	}
}
