#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int a[100];
int n, k, S;
int ans;
void Try(int s, int tmp){
	if (ans){
		return;
	}
	if (tmp == k){
		ans = 1;
		return;
	}
	for (int i = 0; i < n; i++){
		if (s == S){
			Try(0, tmp + 1);
		}
		else if(s < S){
			Try(s + a[i], tmp);
		}
		else {
			return;
		}
	}
}
int main(int argc, char** argv) {
	int t;
	cin >> t;
	while (t--){
		S = 0;
		ans = 0;
		cin >> n >> k;
		for (int i = 0; i < n; i++){
			cin >> a[i];
			S += a[i];
		}
		if (S % k != 0){
			cout << 0 << endl;
		}
		else {
			S /= k;
			Try(0, 0);
			cout << ans << endl;
		}
	}
	return 0;
}
