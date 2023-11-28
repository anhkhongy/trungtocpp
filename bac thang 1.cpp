#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin >> t;
	while (t--){
		int n, k;
		cin >> n >> k;
		long long f[n + 1] = {1}, mod = 1e9 + 7;
		f[0] = f[1] = 1;
		for (int i = 2; i <= n; i++){
			for (int j = min(i, k); j >= 1; j--){
				f[i] = (f[i] + f[i - j]) % mod;
			}
		}
		cout << f[n] << endl;
	}
	return 0;
}
