#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int n, x;
int a[21];
vector<int> v;
vector<vector<int>> ans;
void Try(int i, int s){
	for(int j = i; j <=n ;j++){
		if (s + a[j] == x){
			v.push_back(a[j]);
			ans.push_back(v);
			v.pop_back();
		}
		if (s + a[j] < x){
			v.push_back(a[j]);
			Try(j,s + a[j]);
			v.pop_back();
		}
	}
}
int main(int argc, char** argv) {
	int t;
	cin >> t;
	while (t--){
		ans.clear();
		cin >> n >> x;
		for (int i = 1; i <= n; i ++){
			cin >> a[i];
		}
		sort(a+1,a+n+1);
		Try(1,0);
		if (ans.size() == 0){
			cout << "-1" << endl;
		}
		else{
			for (auto it : ans){
				cout <<"[";
				for (int i = 0; i < it.size()-1; i++){
					cout << it[i] <<" ";
				}
				cout << it[it.size()-1] <<"]";
			}
			cout << endl;
		}
	}
	return 0;
}
