#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin >> t;
	while (t--){
		string s;
		int n;
		cin >> n;
		cin >> s;
		int dp[n + 5][n + 5];
		memset(dp,0,sizeof(dp));
		for (int i = 1; i <= n; i++){
			for (int j = 1; j <= n; j++){
				if(s[i - 1] == s[j - 1] && i != j)
					dp[i][j] = dp[i - 1][j - 1] + 1;
				else {
					dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
				}
			}
		}
		cout << dp[n][n] << endl;
	}
	return 0;
}
