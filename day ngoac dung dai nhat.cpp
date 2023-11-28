#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin >> t;
	while (t--){
		string s;
		cin >> s;
		int ans = 0;
		stack<int> st;
		st.push(-1);
		for (int i = 0; i < s.length(); i++){
			if(s[i] == '('){
				st.push(i);
			}
			else {
				st.pop();
				if(!st.empty()){
					int j = st.top();
					ans = max(i - j, ans);
				}
				else {
					st.push(i);
				}
			}
		}
		cout << ans << endl;
	}
	return 0;
}
