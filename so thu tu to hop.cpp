#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int x[16],y[16];
int n, k;
int ok ;
bool check(){
	for (int i = 1; i <= k; i++){
		if (x[i] != y[i]){
			return false;
		}
	}
	return true;
}
void init(){
	for (int i = 1; i <= k; i++){
		x[i] = i;
	}
}
void sinh(){
	int i = k;
	while (i >= 1 && x[i] == n-k+i){
		--i;
	}
	if (i == 0)ok = 0;
	else {
		x[i]++;
		for (int j = i+1; j <=k; j++){
			x[j] = x[j-1] + 1;
		}
	}
}
int main(int argc, char** argv) {
	int t;
	cin >> t;
	while (t--){
		
		cin >> n >> k;
		ok = 1;
		init();
		for (int i = 1; i <= k; i++){
			cin >> y[i];
		}
		int cnt = 1;
		while (ok){
			if(check()){
				cout << cnt << endl;
				break;
			}
				sinh();
				cnt ++;
			
		}
	}
	return 0;
}
