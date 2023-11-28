#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int n, k;
int a[20][20], x[20];
int chuaxet[20] = {0}; 
vector<string> ans;
void Try(int i){
	for (int j = 1; j <= n; j++){
		if (chuaxet[j] == 0){
			x[i] = j;
			chuaxet[j] = 1;
			if (i == n){
				int tong  = 0;
				for (int  i = 1; i <= n; i++){
					tong += a[i][x[i]];
				}
				if (tong == k){
					string tmp = "";
					for (int  i = 1; i <= n; i++){
						tmp += to_string(x[i]) + " "; 
					}
					ans.push_back(tmp);
				}
			}
			else{
				Try(i + 1);
			}
			chuaxet[j] = 0;
		}
	}
}
int main(int argc, char** argv) {
	cin >> n >> k;
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= n; j++){
			cin >> a[i][j];
		}
	}
	Try(1);
	cout << ans.size() << endl;
	for (string x : ans){
		cout << x << endl;
	}
	return 0;
}
