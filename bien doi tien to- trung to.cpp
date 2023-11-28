#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
string dau = "+-*/";

bool check(char c){
	for (int i = 0; i < dau.length(); i ++){
		if (c == dau[i]){
			return true;
		}
	}
	return false;
}
int main(int argc, char** argv) {
	int t;
	cin >> t;
	while (t--){
		string s;
		cin >> s;
		stack<string> st;
		for (int i = s.length()-1; i >= 0; i--){
			if (check(s[i])){
				string k = '(' + st.top();
				st.pop();
				k = k + s[i] + st.top() + ')';
				st.pop();
				st.push(k);
			}
			else{
				st.push(string(1,s[i]));
			}
		}
		while (!st.empty()){
			cout << st.top() ;
			st.pop();
		}
		cout << endl;
	}
	return 0;
}
