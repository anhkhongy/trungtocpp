#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		int ok = 0;
		for (int i = 0; i <= n / 4; i++){
			if ((n - i * 4) % 7 == 0){
				ok = 1;
				for (int k = 1; k <= i; k++){
					cout << 4;
				}
				for (int j = 1; j <= (n - i * 4) / 7; j++){
					cout << 7;
				}
				break;
			}
		}
		if (ok == 0){
			cout << -1;
		}
		cout << endl;
	}
	return 0;
}
