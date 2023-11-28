#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		int a[n];
		for (int i = 0; i < n; i++){
			cin >> a[i];
		}
		map<int, int> mp;
		stack<int> st, sa;
		int R[n];
		for (int i = n - 1; i >= 0; i--){
			while (!st.empty() && st.top() <= a[i]){
				st.pop();
			}
			if(st.empty()){
				R[i] = -1;
			}
			else {
				R[i] = st.top();
			}
			st.push(a[i]);
		}
		for (int i = n - 1; i >= 0; i--){
			while (!sa.empty() && sa.top() >= a[i]){
				sa.pop();
			}
			if(sa.empty()){
				mp[a[i]] = -1;
			}
			else {
				mp[a[i]] = sa.top();
			}
			sa.push(a[i]);
		}
		for(int i = 0; i < n; i++){
			if(R[i] == -1){
				cout << -1 << " ";
			}
			else {
				cout << mp[R[i]] << " ";
			}
		}
		cout << endl;
	}
	return 0;
}
