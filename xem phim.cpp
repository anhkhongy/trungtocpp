#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int c, n;
	cin >> c >> n;
	int w[n + 1];
	for (int i = 1; i <= n ;i++){
		cin >> w[i];
	}
	vector<vector<int>> dp(n + 1, vector<int>(c + 1, 0));
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= c; j++){
			if(j >= w[i]){
				dp[i][j] = max(dp[i - 1][j - w[i]] + w[i], dp[i - 1][j]);
			}
			else {
				dp[i][j] = dp[i - 1][j];
			}
		}
	}
	cout << dp[n][c];
	return 0;
}
