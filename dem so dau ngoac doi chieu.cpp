#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin >> t;
	while (t--){
		string s;
		cin >> s;
		stack <char> st;
		for (int i = 0; i < s.size(); i++){
			if(s[i] == ')' && !st.empty()){
				if(st.top() == '('){
					st.pop();
				}
				else {
					st.push(s[i]);
				}
			}
			else {
				st.push(s[i]);
			}
		}
		int k = st.size(),n = 0;
		while(!st.empty() && st.top() == '('){
			n++;
			st.pop();
		}
		cout << k/2+n%2 << endl;
	}
	return 0;
}
