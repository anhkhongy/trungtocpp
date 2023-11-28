#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int tinh(int a, int b, string c){
	if(c == "+") return a + b;
	if(c == "-") return a - b;
	if(c == "*") return a * b;
	if(c == "/") return a / b;
}
int tinhhauto(string s, int n){
	stack<long long> st;
	stringstream ss(s);
	string tmp;
	while(ss >> tmp){
		if(tmp != "+" && tmp != "-" && tmp != "*" && tmp != "/"){
			long long n = stoll(tmp);
			st.push(n);
		}
		else{
			long long a = st.top();
			st.pop();
			long long b = st.top();
			st.pop();
			st.push(tinh(b, a, tmp));
		}
	}
	return st.top();
}
int main(int argc, char** argv) {
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		cin.ignore();
		string s;
		getline(cin, s);
		cout << tinhhauto(s, n) <<endl;
	}
	return 0;
}
