#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using ll = long long ;
int main(int argc, char** argv) {
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		int a[n];
		ll t = 0, tt = 0, tp = 0;
		for (int i = 0; i < n; i++){
			cin >> a[i];
			t += a[i];
		}
		bool ok = false;
		for (int i = 1; i < n-1; i++){
			tt += a[i-1];
			tp = t - tt - a[i];
			if(tt == tp){
				cout << i+1 << endl;
				ok = true;
			}
		}
		if(!ok){
			cout << "-1" << endl;
		}
	}
	return 0;
}
