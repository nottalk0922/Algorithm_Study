#include <bits/stdc++.h>
using namespace std;

int cnt;

void hansoo(int n){
  int a,b;
  float res;
  a = n % 10;
  b = (n % 100) / 10;
  n = n / 100;
  res = n-b;
  if(res == b-a) cnt++;
}

int main() {
  int a;
  cin >> a;
  if(a < 100) {
    cout << a; 
  }
  else if(a == 1000){
    for(int i=100; i<1000; i++)
      hansoo(i);
    cout << (cnt+99) ;
  }
  else{
    for(int i=100; i<=a; i++)
      hansoo(i);
    cout << (cnt+99);
  }
    
}
