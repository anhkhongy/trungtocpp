#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int n;
long long k, F[92];
long long tinh(int n, int k){
	if (n < 2)return n;
	if(k <= F[n]) return tinh(n-1, k);
	return F[n - 1] + tinh(n - 2, k - F[n]);
}
int main(int argc, char** argv) {
	int t;
	cin >> t;
	F[0] = 0; F[1] = 1;
	for (int i = 2 ;i <= 91; i++){
		F[i] = F[i - 1] + F[i - 2];
	}
	while (t--){
		cin >> n ;
		cin >> k;
		cout << k - tinh(n, k);
		
	}
	return 0;
}
