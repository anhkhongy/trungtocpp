#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin >> t;
	while (t--){
		int n, m;
		cin >> n >> m;
		int a[n + 1][m + 1] ;
		int f[n + 1][m + 1] ;	
		for (int i = 1; i <= n; i++){
			for (int j = 1; j <= m; j++){
				cin >> a[i][j];
				f[i][j] = INT_MAX;
			}
		}
		f[1][1] = a[1][1];
		for (int i = 1; i <= n; i++){
			for (int j = 1; j <= m; j++){
				if(j > 1){
					f[i][j] = min(f[i][j], f[i][j - 1] + a[i][j]);
				}
				if(i > 1){
					f[i][j] = min(f[i][j], f[i - 1][j] + a[i][j]);
				}
				if(i > 1 && j > 1){
					f[i][j] = min(f[i][j], f[i - 1][j - 1] + a[i][j]);
				}
			}
		}
		cout << f[n][m] << endl;
	}
	return 0;
}
