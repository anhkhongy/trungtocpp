#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n;
	cin >> n;
	cin.ignore();
	vector<vector<int>> a(n + 1, vector<int>(n + 1, 0));
	string s;
	for (int i = 1; i <= n; i++){
		getline(cin, s);
		s += ' ';
		int k = 0;
		int x[2];
		int t = 0;
		for (int j = 0; j < s.size(); j++){
			if (s[j] >= '0' && s[j] <= '9'){
				k = k * 10 + s[j] - '0';
			}
			else {
				a[i][k] = a[k][i] = 1;
                k = 0;
			}
		}
	}
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= n; j++){
			cout << a[i][j] <<" ";
		}
		cout << endl;
	}
	return 0;
}
