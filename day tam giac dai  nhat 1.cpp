#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		int a[n + 1];
		for (int i = 1; i <= n; i++){
			cin >> a[i];
		}
		int mi[n + 1], ma[n + 1];
		mi[n] = n; ma[n] = n;
		for (int i = n - 1; i >= 1; i--){
			if(a[i] > a[i + 1]){
				mi[i] = mi[i + 1];
			}
			else {
				mi[i] = i;
			}
			if(a[i] < a[i + 1]){
				ma[i] = ma[i + 1];
			}
			else {
				ma[i] = i;
			}
		}
		int ans = 1;
		for (int i = 1; i <= n; i++){
			ans = max(ans, mi[ma[i]] - i + 1);
		}
		cout << ans << endl;
	}
	return 0;
}
