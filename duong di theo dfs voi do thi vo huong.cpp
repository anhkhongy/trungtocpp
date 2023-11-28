#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
vector<int> List[1005];
bool chuaxet[1005];
int truoc[1005];
void dfs(int u){
	chuaxet[u] = false;
	for (int v : List[u]){
		if(chuaxet[v]){
			truoc[v] = u;
			dfs(v);
		}
	}
}
int main(int argc, char** argv) {
	int t;
	cin >> t;
	while (t--){
		memset(chuaxet, true, sizeof(chuaxet));
		memset(truoc, 0, sizeof(truoc));
		for (int i = 0; i < 1005; i++)List[i].clear();
		int v, e, u, z;
		cin >> v >> e >> u >> z;
		int d, c;
		for (int i = 1; i <= e; i++){
			cin >> d >> c;
			List[d].push_back(c);
			List[c].push_back(d);
		}
		dfs(u);
		vector<int> V;
		int t = z;
		V.push_back(z);
		int ok = 1;
		while (t != u){
			t = truoc[t];
			if(t == 0){
				ok = 0;
			}
			V.push_back(t);
		}
		if(!ok){
			cout << -1 << endl;
		}
		else {
			reverse(V.begin(), V.end());
			for (int i : V){
				cout << i << " ";
			}
			cout << endl;
		}
	}
	return 0;
}
