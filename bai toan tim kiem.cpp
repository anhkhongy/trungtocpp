#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin >> t;
	while (t--){
		int n, s;
		int k;
		cin >> n >> s >> k;
		int a[n + 1], f[n + 1];
		f[0] = 0;
		
		for (int i = 1; i <= n; i++){
			cin >> a[i];
			f[i] = f[i - 1] + a[i];
		}
		int ans = f[s];
		int ok = 0;
		int ind;
		for (int i = 1; i <= s; i++){
			if(ans <= k){
				ind = i;
				ok = 1;
				break;
			}
			ans = ans - a[i];
		}
		if(ok == 0){
			cout << "-1" << endl;
		}
		else {
			cout << ind << endl;
		}
	}
	return 0;
}
