#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using ll = long long;
const ll mod = 1e9 + 7;
int n, k;
ll F[20][20];
ll M[20][20];
void mul(ll f[20][20], ll m[20][20]){
	int t[20][20];
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			ll sum = 0;
			for (int k = 0; k < n; k++){
				sum += f[i][k] * m[k][j] % mod;
			}
			sum = sum % mod;
			t[i][j] = sum;
		}
	}
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			F[i][j] = t[i][j];
		}
	}
}
void poww(ll f[20][20], int k){
	if (k <= 1)return;
	poww(f, k / 2);
	mul(f,f);
	if (k % 2 == 1) {
		mul (f, M);
	}
}
int main(int argc, char** argv) {
	int t;
	cin >> t;
	while (t--){
		cin >> n >> k;
		for (int i = 0; i < n; i++){
			for (int j = 0; j < n; j++){
				cin >> F[i][j];
				M[i][j] = F[i][j];
			}
		}
		poww(F, k);
		for (int i = 0; i < n; i++){
			for (int j = 0; j < n; j++){
				cout << F[i][j] << " ";
			}
			cout << endl;
		}
	}
	return 0;
}
