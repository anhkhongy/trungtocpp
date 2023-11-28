#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int n;
int c[101];
int d1[101],d2[101];
int dem;
void Try(int i){
	if (i == n+1){
		dem ++;
		return;
	}
	for (int j = 1; j <= n; j++){
		if (c[j] == 1 && d1[i+j-1] == 1 && d2[i-j+n] == 1){
			c[j] = 0;
			d1[i+j-1] = 0;
			d2[i-j+n] = 0;
			Try(i+1);
			c[j] = d1[i+j-1] = d2[i-j+n] = 1;
		}
	}
}
int main(int argc, char** argv) {
	int t;
	cin >> t;
	while (t--){
		dem = 0;
		cin >> n;
		for (int i = 1; i <= 100; i++){
			c[i] = d1[i] = d2[i] = 1;
		}
		Try(1);
		cout << dem << endl;
	}
	return 0;
}
