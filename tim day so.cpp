#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n;
	cin >> n;
	int a[n];
	
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a, a + n);
	int ans = 0;
	int ok = 0;
	for (int i = a[0]; i >= 0; i--){
		for (int j = 0; j < n; j++){
			int tmp = a[j] / (i + 1) + 1;
			if(a[j] / tmp != i){
				ans = 0;
				break;
			}
			else {
				ans += tmp;
			}
			if(j == n - 1){
				ok = 1;
			}
		}
		if(ok){
			break;
		}
	}
	cout << ans ;
	return 0;
}
