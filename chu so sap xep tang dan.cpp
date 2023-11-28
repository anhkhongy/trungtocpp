#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;
const int MAXN = 105;

int dp[MAXN][10];

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;

        // Kh?i t?o b?ng DP
        for (int i = 0; i < 10; i++) {
            dp[1][i] = 1;
        }

        // Tính toán các giá tr? trong b?ng DP
        for (int i = 2; i <= N; i++) {
            for (int j = 0; j < 10; j++) {
                dp[i][j] = 0;
                for (int k = 0; k <= j; k++) {
                    dp[i][j] += dp[i-1][k];
                    dp[i][j] %= MOD;
                }
            }
        }

        // Tính t?ng c?a t?t c? các ph?n t? trong b?ng DP
        int ans = 0;
        for (int i = 0; i < 10; i++) {
            ans += dp[N][i];
            ans %= MOD;
        }

        cout << ans << endl;
    }
    return 0;
}
