#include <bits/stdc++.h>
using namespace std;

int main() {
	
	while (1) {
		bool val = true;
		string a;
		getline(cin, a);
		if (a == ".")
			break;
		stack<char> ST;
    for (auto arr : a) {
			if (arr == '(' || arr == '[')
				ST.push(arr);
			else if (arr == ')') {
				if (ST.empty() || ST.top() != '('){
                    val = false;
                    break;
                }
                ST.pop();
			} 
            else if (arr == ']') {
				if (ST.empty() || ST.top() != '['){
					val = false;
                    break;
                }
                ST.pop();				
			}
		}
        if(!ST.empty()) val = false;
		if (val == true)
			cout << "yes"
				 << "\n";
	    else cout << "no" << "\n";
    }
	return 0;
}
