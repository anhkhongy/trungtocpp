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
		int t[n + 1], g[n + 1] ;
		for (int i = 1; i <= n; i++){
			cin >> a[i];
			t[i] = a[i];
			g[i] = a[i];
		}
		t[1] = g[1] = a[1];
		int ans = a[1];
		for (int i = 2; i <= n; i++){
			for (int j = 1; j < i; j++){
				if (a[j] < a[i]){
					t[i] = max(t[i], t[j] + a[i]);
				}
				else if(a[j] > a[i]){
					g[i] = max(g[i], g[j] + a[i]);
				}
			}
			g[i] = max(g[i], t[i]);
			ans = max(ans, g[i]);
		}
		cout << ans << endl;
	}
	return 0;
}
// 100 20 30 50 70 60 40 20 10 92 12 25 47 39 21 82 35 47 28 39 
