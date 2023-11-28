#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
vector<int> List[1005];
bool chuaxet[1005];
void dfs(int u){
	chuaxet[u] = false;
	cout << u << " ";
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
		memset(chuaxet, true, sizeof(chuaxet));
		for (int i = 0; i < 1005; i++)List[i].clear();
		int v, e, u;
		cin >> v >> e >> u;
		int d, c;
		for (int i = 1; i <= e; i++){
			cin >> d >> c;
			List[d].push_back(c);
		}
		dfs(u);
		cout << endl;
	}
	return 0;
}
