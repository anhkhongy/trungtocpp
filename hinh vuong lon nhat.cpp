#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin >> t;
	while (t--){
		int n, m;
		cin >> n >> m;
		int a[1000][1000];
		for (int i = 1; i <= n; i++){
			for (int j = 1; j <= m; j++){
				cin >> a[i][j];
			}
		}
		for(int i = 0; i <= n; i++){
			a[i][0] = 0;
		}
		for (int i = 0; i <= m; i++){
			a[0][i] = 0;
		}
		int ans = 0;
		for (int i = 1; i <= n; i++){
			for (int j = 1; j <= m; j++){
				if(a[i][j] == 1){
					a[i][j] = min(a[i - 1][j] + 1, min(a[i - 1][j - 1] + 1, a[i][j - 1] + 1));
					ans = max(ans, a[i][j]);
				}
			}
		}
		cout << ans << endl;
	}
	return 0;
}
/*
0 1 1 1 1 0 1 0
1 1 1 1 1 0 1 1
0 1 1 1 1 0 1 0
0 1 1 1 1 0 1 1
1 1 1 0 1 0 1 0
1 1 1 0 1 0 1 0
0 0 0 0 0 0 0 0*/
/*0 1 0 1 1 0 1 0
1 0 0 1 0 1 0 1
0 1 1 0 0 1 1 0
1 0 1 0 1 0 1 0
0 1 0 1 1 0 1 0
1 0 0 1 0 1 0 1
0 1 1 0 0 1 1 0
1 0 1 0 1 0 1 0 */
