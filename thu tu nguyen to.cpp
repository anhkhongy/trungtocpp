#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int n, k;
int a[20];
vector<int> x;
vector<vector<int>> v;
bool check(int n){
	if (n <= 1){
		return false;
	}
	for (int i = 2; i <= sqrt(n); i++){
		if (n % i == 0){
			return false;
		}
	}
	return true;
}
void Try(int i){
	for (int j = a[i - 1] + 1; j <= n - k + i ; j++){
		a[i] = j;
		if (i == k){
			for (int t = 1; t <= k; t++){
				x.push_back(a[t]);
			}
			v.push_back(x);
			x.clear();
		}
		else{
			Try(i + 1);
		}
	}
}
int main(int argc, char** argv) {
	cin >> n >> k;
	a[0] = 0;
	Try(1);
	for (int i = 0; i < v.size(); i++){
		if(check(i + 1)){
			cout << i + 1 << ":";
			for (int j = 0; j < v[i].size(); j++){
				cout <<" " << v[i][j];
			}
			cout << endl;
		}
	}
	return 0;
}
