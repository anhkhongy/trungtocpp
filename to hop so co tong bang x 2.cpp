#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int n, x;
int a[100];
int c[100];
int ok = 0;
void in(int m){
	cout << "[";
	for (int i = 1; i < m; i++){
		cout << c[i] << " ";
	}
	cout << c[m] << "]";
}
void quaylui(int i, int s){
	for (int j = 1; j <= n; j++){
		if (a[j] >= c[i-1] && s + a[j] <= x){
			c[i] = a[j];
			s = s + a[j];
			if (s == x){
				ok = 1; in(i);
			}
			else {
				quaylui(i+1, s);
				s = s - a[j];
			}
		}
	}
}
int main(int argc, char** argv) {
	int t;
	cin >> t;
	while (t--){
		memset(c, 0, sizeof(c));
		cin >> n >> x;
		ok = 0;
		for (int i = 1; i <= n; i++){
			cin >> a[i];
		}
		sort(a,a + n);
		quaylui(1, 0);
		if (ok == 0){
			cout << "-1" ;
		}
		cout << endl;
	}
	return 0;
}
