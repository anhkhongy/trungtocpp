#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int a[9][9];
int n;
vector<string> ans;
vector<pair<char, pair<int,int>>> v = {{'D',{1,0}},{'L',{0,-1}},{'R',{0,1}},{'U',{-1,0}}};
void Try(int i, int j, string s){
	if (i == n-1 && j == n-1){
		ans.push_back(s);
		return;
	}
	for (int k = 0; k < 4; k++){
		int u = i + v[k].second.first;
		int y = j + v[k].second.second;
		if (u >= 0 && u < n && y >= 0 && y < n && a[u][y] == 1){
			a[u][y] = 0;
			Try(u,y,s+v[k].first);
			a[u][y] = 1;
		}
	}
}

int main(int argc, char** argv) {
	int t;
	cin >> t;
	while (t--){
		ans.clear();
		cin >> n;
		for (int i = 0; i < n; i++){
			for (int j = 0; j < n; j ++){
				cin >> a[i][j];
			}
		}
		if (a[0][0] == 1){
			a[0][0] = 0;
			Try(0,0,"");
		}
		if (ans.size() == 0){
			cout << "-1";
		}
		else {
			for (string x:ans){
				cout << x << " ";
			}
		}
		cout << endl;
	}
	return 0;
}
