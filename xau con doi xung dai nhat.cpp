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
		int ans = 1;
		bool f[1001][1001] ;
		for (int i = 0; i < n; i++){
			f[i][i] = true;
		}
		for (int i = 1; i <= n - 1; i++){
			for (int j = 0; j < n - i; j++){
				int k = j + i;
				f[j][k] = ((j + 1 > k - 1 || f[j + 1][k - 1]) && s[j] == s[k]);
				if(f[j][k] == true){
					ans = i + 1;
				}
			}
		}
		cout << ans << endl;
	}
	return 0;
}
