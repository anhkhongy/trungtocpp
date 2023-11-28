#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin >> t;
	while (t--){
		string s;
		cin >> s;
		stack<char> st;
		st.push(s[0]);
		for (int i = 1; i < s.length(); i++){
			if ((!st.empty()) && (s[i] == ']' && st.top() == '[' || s[i] == ')' && st.top() == '(' || s[i] == '}' && st.top() == '{')){
				st.pop();
			}
			else {
				st.push(s[i]);
			}
		}
		if (st.empty()){
			cout << "YES\n";
		}
		else {
			cout << "NO\n";
		}
	}
	return 0;
}
