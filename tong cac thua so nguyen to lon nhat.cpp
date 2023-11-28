#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int nt(int n){
	if(n == 1){
		return 0;
	}
	int ans = 0;
	for (int i = 2; i <= sqrt(n); i++){
			while (n % i == 0){
				ans = max(ans, i);
				n /= i;
			}	
	}
	ans = max(ans, n);
	return ans;
}
int main(int argc, char** argv) {
	int t;
	cin >> t;
	while (t--){
		int l, r;
		cin >> l >> r;
		int sum = 0;
		for (int i = l; i <= r; i++){
			sum += nt(i);
		}
		cout << sum << endl;
	}
	return 0;
}
