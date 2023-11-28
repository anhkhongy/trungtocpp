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
		map<int, int> mp;
		for (int i = 0; i < n; i++){
			cin >> a[i];
			mp[a[i]] ++;
		}
		int R[n];
		stack<int> st;
		for (int i = n - 1; i >= 0; i--){
			while (!st.empty() && mp[a[i]] >= mp[st.top()]){
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
		for (int i = 0; i < n; i++){
			cout << R[i] << " ";
		}
		cout << endl;
	}
	return 0;
}
