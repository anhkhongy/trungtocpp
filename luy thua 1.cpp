#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int mod = 1e9+7;
long long poww(int n, int k){
	if (k == 0){
		return 1;
	}
	else {
		long long x = poww(n, k/2);
		if (k % 2 == 0)return x*x%mod;
		else return n*(x*x%mod)%mod;
	}
}
int main(int argc, char** argv) {
	int t;
	cin >> t;
	while (t--){
		int n, k ;
		cin >> n >> k;
		cout << poww(n, k) << endl;
	}
	return 0;
}
