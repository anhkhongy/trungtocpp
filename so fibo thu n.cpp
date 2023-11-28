#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const ll mod = 1e9 + 7;
ll M[2][2];
ll F[2][2];
void mul(ll f[2][2], ll m[2][2]){
	long long x = (f[0][0] * m[0][0] % mod + f[0][1] * m [1][0] % mod) % mod;
	long long y = (f[0][0] * m[0][1] % mod + f[0][1] * m [1][1] % mod) % mod;
	long long z = (f[1][0] * m[0][0] % mod + f[1][1] * m [1][0] % mod) % mod;
	long long t = (f[1][0] * m[0][1] % mod + f[1][1] * m [1][1] % mod) % mod;
	F[0][0] = x; F[0][1] = y; F[1][0] = z; F[1][1] = t;
}
void poww(ll f[2][2], ll n){
	if (n <= 1)return;
	poww(f, n/2);
	mul(f,f);
	if (n % 2 == 1){
		mul (f,M);
	}
}
int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		F[0][0] = 1; F[0][1] = 1; F[1][0] = 1; F[1][1] = 0;
		M[0][0] = 1; M[0][1] = 1; M[1][0] = 1; M[1][1] = 0;
		poww(F, n-1);
		cout << F[0][0] << endl;
	}
}
