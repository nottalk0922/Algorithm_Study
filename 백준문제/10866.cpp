#include <bits/stdc++.h>
using namespace std;

int main(void) {
 
  deque<int> DQ;
  int n;
  cin >> n;
  while (n--) {
    string k;
    cin >> k;
    if (k == "push_back") {
      int val;
      cin >> val;
      DQ.push_back(val);
    }
    else if (k == "push_front") {
      int val;
      cin >> val;
      DQ.push_front(val);
    }
    else if(k == "pop_front"){
      if(DQ.empty()) cout << -1 << '\n';
      else{
        cout << DQ.front() << '\n';
        DQ.pop_front();
      }
    }
    else if(k == "pop_back"){
      if(DQ.empty()) cout << -1 << '\n';
      else{
        cout << DQ.back() << '\n';
        DQ.pop_back();
      }
    }
    else if (k == "size")
      cout << DQ.size() << '\n';
    else if (k == "empty")
      cout << DQ.empty() << '\n';
    else if (k == "front") {
      if(DQ.empty()) cout << -1 << '\n';
      else cout << DQ.front() << '\n';
    }
    else { 
      if(DQ.empty()) cout << -1 << '\n';
      else cout << DQ.back() << '\n';
    }
  }
  
  return 0;
}
