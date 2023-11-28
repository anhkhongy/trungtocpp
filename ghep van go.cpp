#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		long long H[n], L[n], R[n];
		for (int i = 0; i < n; i++){
			cin >> H[i];
		}
		stack<int> st;
		st.push(-1);
		for (int i = 0; i < n; i++){
			while (st.size() > 1 && H[st.top()] >= H[i]){
				st.pop();
			}
			L[i] = st.top() + 1;
			st.push(i);
		}
		stack<int> sa;
		sa.push(n);
		for (int i = n - 1; i >= 0; i--){
			while (sa.size() > 1 && H[sa.top()] >= H[i]){
				sa.pop();
			}
			R[i] = sa.top() - 1;
			sa.push(i);
		}
		long long ans = 0;
		for (int i = 0; i < n; i++){
			if(R[i] - L[i] + 1 >= H[i]){
				ans = max(ans, H[i]);
			}
		}
		cout << ans << endl;
	}
	return 0;
}
