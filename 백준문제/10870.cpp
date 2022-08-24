#include <bits/stdc++.h>
using namespace std;

int memo[25] = {0,1,1,2,3,5,8,13};

int fibo(int n){
    if(memo[n]) return memo[n];
    return memo[n] = fibo(n-1) + fibo(n-2);
}

int main(){
    int n;
    cin >> n;
    cout << fibo(n);
    return 0;
}
