#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
vector<int> List[1005];
bool chuaxet[1005];
void dfs(int u){
	chuaxet[u] = false;
	for (int v : List[u]){
		if(chuaxet[v]){
			dfs(v);
		}
	}
}
int main(int argc, char** argv) {
	int t;
	cin >> t;
	while (t--){
		int v, e;
		cin >> v >> e;
		for (int i = 0; i < 1005; i++){
			List[i].clear();
		}
		int d, c;
		for (int i = 1; i <= e; i++){
			cin >> d >> c;
			List[d].push_back(c);
			List[c].push_back(d);
		}
		int q;
		cin >> q;
		while (q--){
			memset(chuaxet, true, sizeof(chuaxet));
			int u, z;
			cin >> u >> z;
			dfs(u);
			if(chuaxet[z]){
				cout << "NO\n";
			}
			else {
				cout << "YES\n";
			}
		}
	}
	return 0;
}
