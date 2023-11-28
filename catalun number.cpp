#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
long long catalunNumber(int n){
	long long res = 0;
	long long catalun[n + 1];
	catalun[0] = catalun[1] = 1;
	for (int i = 2; i <= n; i++){
		catalun[i] = 0;
		for (int j = 0; j < i; j++){
			catalun[i] += catalun[j] * catalun[i - j - 1];
		}
	}
	return catalun[n];
}
int main(int argc, char** argv) {
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		cout << catalunNumber(n) << endl;
	}
	return 0;
}
