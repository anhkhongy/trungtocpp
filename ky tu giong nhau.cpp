#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		int x, y, z;
		cin >> x >> y >> z;
		int f[105] = {0};
		f[1] = x;
		for (int i = 2; i <= n; i++){
			if(i % 2 == 0){
				f[i] = min(f[i - 1] + x, f[i / 2] + z);
			}
			else {
				f[i] = min(f[i - 1] + x, f[(i + 1) / 2] + y + z);
			}
		}
		cout << f[n] << endl;
	}
	return 0;
}
