#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin >> t;
	while (t--){
		long long k;
		string s = "";
		string a, b;
		cin >> k;
		cin >> a >> b;
		int ok = 0;//xem co du hay khong
		while (a.length() < b.length()){
			a = "0" + a;
		}
		while (b.length() < a.length()){
			b = "0" + b;
		}
		int n = a.length();
		for (int i = n - 1; i >= 0; i--){
			int x = a[i] - '0' + b[i] - '0';
			if (ok == 1){
				x++;
				ok = 0;
			}
			if (x > k - 1){
				x -= k;
				ok = 1;
			}
			if (x >= 10){
				s = (char)('A' + x - 10) + s;
			}
			else {
				s = to_string(x) + s;
			}
		}
		if (ok == 1){
			s = "1" + s;
		}
		cout << s << endl;
	}
	return 0;
}
