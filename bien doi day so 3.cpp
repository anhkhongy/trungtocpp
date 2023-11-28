#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#define ll long long
int main(int argc, char** argv) {
	int t , n;
	cin >> t;
	while (t--){
		cin >> n;
		vector<pair<ll, ll>> vp(n);
		for (int i = 0; i < n; i ++){
			cin >> vp[i].first >> vp[i].second;
		}
		ll dp[n][2];
		dp[0][1] = vp[0].second;	
		dp[0][0] = 0;
		for (int i = 1; i < n; i++){
			if(vp[i].first == vp[i - 1].first){
				dp[i][1] = min(dp[i - 1][0], dp[i - 1][1]) + vp[i].second;
				dp[i][0] = dp[i - 1][1];
			}
			else{
				dp[i][0] = min(dp[i - 1][0], dp[i - 1][1]);
				dp[i][1] = min(dp[i - 1][0], dp[i - 1][1]) + vp[i].second;
			}
		}
		cout << min(dp[n - 1][0], dp[n - 1][1]) << endl;
	}
	return 0;
}
