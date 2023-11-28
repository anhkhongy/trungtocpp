#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int check[500] = {1};
void era(){
	check[0] = check [1] = 0;
	for (int i = 2; i <= 20; i++){
		for (int j = i * i; j <= 200; j += i){
			check[j] = 0;
		}
	}
}
int a[20];
int n;
vector<int> x;
vector<vector<int>> v;
void Try(int i, int s){
	for (int j = i+1; j <= n; j++){
		int tmp = s + a[j];
		if(check[tmp] == 1){
			x.push_back(a[j]);
			reverse(x.begin(),x.end());
			v.push_back(x);
			reverse(x.begin(),x.end());
			Try(i+1, tmp);
		}
		Try(i+1, s);
		x.pop_back();
	}
}
int main(int argc, char** argv) {
	era();
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		for (int i = 1; i <= n; i++){
			cin >> a[i];
		}
		sort(a+1, a+n+1);
		Try(0,0);
		for (auto it : v){
			for (int x : it){
				cout << x << " ";
			}
			cout << endl;
		}
	}
	return 0;
}
