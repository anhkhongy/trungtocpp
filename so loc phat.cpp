#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin >> t;
	while (t--){
		long long n;
		cin >> n;
		long long sum = 0;
			long long f = 8;
			for (long long i = 1; i <= 100; i++){
				if(f * i > n){
					break;
				}
				else {
					long long ans = 0;
					long long tmp = f * i;
					while (tmp > 0){
						long long e = tmp % 10;
						if(e == 6 || e == 8){
							ans ++;
						}
						tmp /= 10;
					}
					sum +=	ans;
				}
			}
		
		cout << sum << endl;
	}
	return 0;
}
