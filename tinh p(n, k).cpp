#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin >> t;
	while (t--){
		int n, k;
		cin >> n >> k;
		long long p[k + 1][n + 1] = {}, mod = 1e9 + 7;
		for (int i = 1; i <= n; i++){
			p[1][i] = i;
		}
		for (int i = 2; i <= k ; i++){
			for (int j = i; j <= n; j++){
				p[i][j] = ((p[i - 1][j - 1]  * k) % mod + p[i][j - 1] % mod) % mod;
			}
		}
		cout << p[k][n] << endl;
	}
	return 0;
}
