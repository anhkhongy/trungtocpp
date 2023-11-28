#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin >> t;
	while (t--){
		int n, k;
		cin >> n >> k;
		int a[k+1];
		map<int,int> mp;
		for (int i = 1; i <= k; i++){
			cin >> a[i];
			mp[a[i]] = 1;
		}
		int b[k + 1];
		int i = k;
		while (a[i] == n - k + i){
			--i;
		}
		if (i == 0){
			cout << k << endl;
		}
		else{
			a[i] += 1;
			int cnt = 0;
			for (int j = i + 1; j <= k; j++){
				a[j] = a[j-1] + 1;
			}
			for (int t = i; t <= k ;t++){
				if (mp[a[t]] == 0){
					cnt ++ ;
				}
			}
			cout << cnt << endl;
		}
	}
	return 0;
}
