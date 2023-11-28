#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin >> t;
	while (t--){
		int n, m;
		cin >> n >> m;
		long long f[100][100] = {};
		f[n][m] = 1;
		for (int i = n; i >= 1; i--){
			for (int j = m; j >= 1; j--){
				f[i][j] = f[i][j] + f[i + 1][j] + f[i][j + 1];
			}
		}
		for (int i = 1; i <= m; i++){
			f[0][i] += f[1][i];
			f[0][0] += f[0][i];
		}
		for (int i = 1; i <= n; i++){
			f[i][0] += f[i][1];
			f[0][0] += f[i][0];
		}
		cout << f[0][0] << endl;
	}
	return 0;
}
