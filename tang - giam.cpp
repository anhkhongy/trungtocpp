#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		double a[n + 1], b[n + 1];
		for (int i = 1; i <= n; i++){
			cin >> a[i] >> b[i];
		}
		int f[n + 1] ;
		f[1] = 1;
		int ma = 1;
		for (int i = 2; i <= n; i++){
			f[i] = 1;
			for (int j = 1; j < i; j++){
				if(a[i] > a[j] && b[i] < b[j]){
					f[i] = max(f[i], f[j] + 1);
				}
			}
			ma = max(ma, f[i]);
		}
		cout << ma << endl;
	}
	return 0;
}
