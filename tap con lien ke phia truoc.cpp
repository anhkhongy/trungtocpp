#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin >> t;
	while (t--){
		int n, k;
		cin >> n >> k;
		int a[n + 1];
		for (int i = 1; i <= k; i++){
			cin >> a[i];
		}
		int pos = k - 1;
		while (a[pos] + 1 == a[pos + 1] && pos > 0){
			pos--;
		}
		if (pos == 0){
			for (int i = n - k + 1; i <= n; i++){
				cout << i << " "; 
			}
		}
		else {
			pos++;
			a[pos] -- ;
			for (int j = pos + 1; j <= k; j++){
				a[j] = n - k + j;
			}
			for (int i = 1; i <= k; i++){
				cout << a[i] << " ";
			}
		}
		cout << endl;
	}
	return 0;
}
