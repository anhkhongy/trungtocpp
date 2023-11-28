#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int n, m, u;
vector<pair<int, int>> v;
int chuaxet[1005] ;
vector<int> List[1005];
void Tree_DFS(int u){
	chuaxet[u] = 0;
	for (auto i : List[u]){
		if(chuaxet[i] == 1){
			v.push_back({u, i});
			Tree_DFS(i);
		}
	}
}
int main(int argc, char** argv) {
	int t;
	cin >> t;
	while (t--){
		memset(chuaxet, 1, sizeof(chuaxet));
		for (int i = 0; i < 1005; i++){
			List[i].clear();
		}
		v.clear();
		cin >> n >> m >> u;
		int y, z;
		while(m--){
			cin >> y >> z;
			List[y].push_back(z);
			List[z].push_back(y);
		}
		Tree_DFS(u);
		/*if(v.size() < n - 1){
			cout << "-1" << endl;
		}
		else {*/
			for (int i = 0; i < v.size(); i++){
				cout << v[i].first << " " << v[i].second << endl;
			}
		//}
	}
	return 0;
}
