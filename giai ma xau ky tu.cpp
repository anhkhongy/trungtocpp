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
		vector<int> v;
		int n = 0;
		for (int i = 0; i < s.length(); i++){
			if(s[i] == '['){
				if(n == 0){
					v.push_back(1);
				}
				else {
					v.push_back(n);
					n = 0;
				}
				st.push(string(1, s[i]));
			}
			else if(isalpha(s[i])){
				st.push(string(1, s[i]));
			}
			else if(isdigit(s[i])){
				n = n * 10 + s[i] - '0';
			}
			else {
				string tmp = "";
				string ans = "";
				while (st.top() != "["){
					ans = st.top() + ans;
					st.pop();
				}
				st.pop();
				for (int i = 1; i <= v[v.size() - 1]; i++){
					tmp += ans;
				}
				st.push(tmp);
				v.erase(v.end() - 1, v.end());
			}
		}
		string str = "";
		while (st.size()){
			str = st.top() + str;
			st.pop();
		}
		cout << str << endl;
	}
	return 0;
}
