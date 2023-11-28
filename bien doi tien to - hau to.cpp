#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
string dau = "+-*/";
bool check(char c){
	for (int i = 0; i < dau.length(); i++){
		if (dau[i] == c){
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
				string k = "";
				k = st.top() ;
				st.pop();
				k = k + st.top() + s[i];
				st.pop();
				st.push(k);
			}
			else {
				st.push(string (1,s[i]));
			}
		}
		cout << st.top() <<endl;
	}
	return 0;
}
