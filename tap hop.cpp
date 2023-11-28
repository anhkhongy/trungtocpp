#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int cnt;
int x[100];
int n, k, s;
bool check(){
	int tong = 0;
	for (int i = 1; i <= k; i++){
		tong += x[i];
	}
	if (tong == s){
		return true;
	}
	return false;
}
void Try(int i){
	for (int j = x[i-1] + 1; j <= n; j++){
		x[i] = j;
		if (i == k){
			if (check()){
				cnt++;
			}
		}
		else {
			Try(i + 1);
		}
	}
}
int main(int argc, char** argv) {
	while (1){
		cin >> n >> k >> s;
		x[0] = 0;
		cnt = 0;
		if (n == 0 && k == 0 && s == 0){
			break;
		}
		else{
			Try(1);
			cout << cnt << endl;
		}
	}
	return 0;
}
