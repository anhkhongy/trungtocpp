#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin >> t;
	while (t--){
		string s;
		cin >> s;
		stack<string> st;
		for (int i = 0; i < s.length(); i++){
			if(s[i] >= 'A' && s[i] <= 'Z' || s[i] >= 'a' && s[i] <= 'z'){
				st.push(string(1, s[i]));
			}
			else {
				string res = "";
				res = st.top() + res;
				st.pop();
				res = st.top() + res;
				st.pop();
				res = s[i] + res;
				st.push(res);
			}
		}
		cout << st.top() << endl;
	}
	return 0;
}
