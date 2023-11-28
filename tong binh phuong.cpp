#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		int f[n + 1];
		f[0] = 0;
		f[1] = 1;
		for (int i = 2; i <= n ; i++){
			f[i] = i;
			for (int j = 1; j <= sqrt(i); j++){
				f[i] = min(f[i], f[i - j * j] + 1);
			}
		}
		cout << f[n] << endl;
	}
	return 0;
}
