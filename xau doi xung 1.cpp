#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin >> t;
	while (t--){
		string s;
		cin >> s;
		int n = s.length();
		int f[100][100];
		for (int i = 0; i < n; i++){
			f[i][i] = 1;
		}
		for (int i = 1; i <= n - 1; i++){
			for (int j = 0; j < n - i; j++){
				int k = j + i;
				if(s[j] == s[k]){
					if(i >= 2){
						f[j][k] = f[j + 1][k - 1] + 2;
					}
					else {
						f[j][k] = 2;
					}
				}
				else {
					f[j][k] = max(f[j + 1][k], f[j][k - 1]);
				}
			}
		}
		cout << n - f[0][n - 1] << endl;
	}
	return 0;
}
