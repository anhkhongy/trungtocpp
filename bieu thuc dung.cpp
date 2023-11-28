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
		int k = 0;
		int ans = 0;
		for (int i = 0; i < s.length(); i++){
			if(st.size() == 0){
				st.push(s[i]);
			}
			else if(st.top() == '[' && s[i] == ']'){
				st.pop();
				k += 2;
			}
			else if(st.top() == ']' && s[i] == '['){
				ans += st.size() + k;
				st.pop();
			}
			else if(s[i] == '['){
				st.push(s[i]);
			} 
			else if(st.top() == ']' && s[i] == ']'){
				st.push(s[i]);
			} 
			if(st.size() == 0){
				k = 0;
			}
		}
		cout << ans << endl;
	}
	return 0;
}
