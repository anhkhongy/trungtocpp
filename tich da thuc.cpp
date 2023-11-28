#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin >> t;
	while (t--){
		int m, n;
		cin >> m >> n;
		int p[m + 1], q[n + 1];
		map<int,int> mp;
		for (int i = 1; i <= m; i++){
			cin >> p[i];
		}	
		for (int i = 1; i <= n; i++){
			cin >> q[i];
			for (int j = 1; j <= m; j++){
				mp[i + j - 1] += q[i] * p[j];
			}
		}
		int u = m + n - 1;
		for (int i = 1; i <= u; i++){
			cout << mp[i] << " ";
		}
		cout << endl;
	}
	return 0;
}
