#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
		int n, v;
		cin >> n >> v;
		int a[n + 1], c[n + 1];
		for (int i = 1; i <= n; i++){
			cin >> a[i] >> c[i];
		}
		int f[n + 1][v + 1] = {};
		for (int i = 1; i <= n; i++){
			for (int j = 1; j <= v; j++){
				if(a[i] <= j){
					f[i][j] = max(f[i - 1][j], f[i - 1][j - a[i]] + c[i]);
				}
				else {
					f[i][j] = f[i - 1][j];
				}
			}
		}
		cout << f[n][v] << endl;
	
	return 0;
}
