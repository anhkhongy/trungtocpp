#include<bits/stdc++.h>
using namespace std;
vector<int> List[1005];
bool chuaxet[1005];
int v, e;
void dfs(int u){
	chuaxet[u] = false;
	for (int i : List[u]){
		if(chuaxet[i]){
			dfs(i);
		}
	}
}
int main(){
	int t;
	cin >> t;
	while (t--){
		memset(chuaxet, true, sizeof(chuaxet));
		for (int i = 0; i < 1005; i++){
			List[i].clear();
		}
		cin >> v >> e;
		int c, d;
		while (e--){
			cin >> c >> d;
			List[c].push_back(d);
		}
		int tplt = 0;
		for (int i = 1; i <= v; i++){
			if(chuaxet[i]){
				tplt++;
				dfs(i);
			}
		}
		cout << tplt << endl;
	}
}
