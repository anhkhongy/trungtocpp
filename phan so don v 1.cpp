#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin >> t;
	while (t--){
		long long a, b;
		cin >> a >> b;
		while (b % a != 0){
			long long n = a;
			long long m = b;
			long long k = b / a;
			cout << 1 << "/" << k + 1 << " + ";
			++k;
			long long t = __gcd(m, k);
			long long lc = m * k / t;
			b = lc;
			a = n * (lc / m) - lc / k;
		} 
		cout << 1 << "/" << b / a << endl;
	}
	return 0;
}
