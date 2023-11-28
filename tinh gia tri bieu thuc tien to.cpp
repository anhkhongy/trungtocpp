#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int tinh(int a, int b, char c){
	if(c == '+') return a + b;
	if(c == '-') return a - b;
	if(c == '*') return a * b;
	if(c == '/') return a / b;
}
int tinhtiento(string s){
	stack<int> st;
	for (int i = s.length() - 1; i >= 0; i--){
		if(isdigit(s[i])){
			int n = s[i] - '0';
			st.push(n);
		}
		else{
			int a = st.top();
			st.pop();
			int b = st.top();
			st.pop();
			st.push(tinh(a, b, s[i]));
		}
	}
	return st.top();
}
int main(int argc, char** argv) {
	int t;
	cin >> t;
	while (t--){
		string s;
		cin >> s;
		cout << tinhtiento(s) << endl;
	}
	return 0;
}
