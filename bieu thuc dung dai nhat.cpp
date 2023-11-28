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
			stack<char> st;
			for (int i = 0; i < s.length(); i++){
				if(s[i] == '('){
					st.push(s[i]);
				}
				else {
					if(!st.size() || st.top() != '('){
						st.push(s[i]);
					}
					else {
						ans += 2;
						st.pop();
					}
				}
			}
			cout << ans << endl;
		}
	return 0;
}
