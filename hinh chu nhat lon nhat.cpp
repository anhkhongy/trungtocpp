#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
		int m, n;
		cin >> m >> n;
		long long H[n], L[n], R[n], K[n];
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
		long long ans1 = 0;
		for (int i = 0; i < n; i++){
			ans1 = max(ans1, (R[i] - L[i] + 1) * H[i]);
		}
	
		for (int i = 0; i < n; i++){
			K[i] = m - H[i];
		}
		stack<int> se;
		se.push(-1);
		for (int i = 0; i < n; i++){
			while (se.size() > 1 && K[se.top()] >= K[i]){
				se.pop();
			}
			L[i] = se.top() + 1;
			se.push(i);
		}
		stack<int> sf;
		sf.push(n);
		for (int i = n - 1; i >= 0; i--){
			while (sf.size() > 1 && K[sf.top()] >= K[i]){
				sa.pop();
			}
			R[i] = sf.top() - 1;
			sf.push(i);
		}
		long long ans2 = 0;
		for (int i = 0; i < n; i++){
			ans2 = max(ans2, (R[i] - L[i] + 1) * K[i]);
		}
		if(ans1 >= ans2){
			cout << ans1 ;
		}
		else cout << ans2 ;
	
	return 0;
}
