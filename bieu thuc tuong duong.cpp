#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
char daonguoc (char c){
	if(c == '+')return '-';
	if(c == '-')return '+';
}
int main(int argc, char** argv) {
	int t;
	cin >> t;
	while (t--){
		string s;
		cin >> s;
		stack<char> st;
		vector<char> v;
		for (int i = s.length() - 1; i >= 0; i--){
			v.clear();
			if(s[i] == '+' || s[i] == '-'){
				st.push(s[i]);
			}
			else if(s[i] == ')'){
				st.push(s[i]);
			}
			else if(s[i] == '('){
				if(s[i - 1] == '-'){
					while (st.top() != ')'){
						char c = daonguoc(st.top());
						v.push_back(c);
						st.pop();
					}
					reverse(v.begin(), v.end());
					st.pop();
					for (char x : v){
						st.push(x);
					}
				}
			}
		}
		for (int i = 0; i < s.length(); i++){
			if(isalpha(s[i])){
				cout << s[i];
			}
			else if(s[i] == '+' || s[i] == '-'){
				cout << st.top();
				st.pop();
			}
		}
		cout << endl;
	}
	return 0;
}
