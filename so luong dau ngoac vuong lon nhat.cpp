
#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	string s;
	cin >> s;
	int cnt = 0, res = 0;
	stack<pair<char, int>> st;
	st.push({'*', 0});
	for (int i = 0; i < s.length(); i++){
		if(st.size() && ((s[i] == ')' && st.top().first == '(') || (s[i] == ']' && st.top().first == '['))){
			st.pop();
			if(st.size()){
				res = max(res, cnt - st.top().second);
			}
		}
			else {
				cnt += s[i] == '[';
				st.push({s[i], cnt});
			}
	}
	cout << res;
	return 0;
}
