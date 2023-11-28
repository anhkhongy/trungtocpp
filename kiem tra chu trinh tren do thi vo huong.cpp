#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
vector<int> List[1005];
bool chuaxet[1005];
int v, e;
void init(){
	cin >> v >> e;
	int c, d;
	while (e--){
		cin >> c >> d;
		List[c].push_back(d);
		List[d].push_back(c);
	}
}
bool dfs(int u, int par){
	chuaxet[u] = false;
	for (int v : List[u]){
		if(chuaxet[v]){
			if(dfs(v, u))return true;
		}
		else if(v != par)return true;
	}
	return false;
}
int main(int argc, char** argv) {
	int t;
	cin >> t;
	while (t--){
		memset(chuaxet, true, sizeof(chuaxet));
		for (int i = 0; i < 1005; i++){
			List[i].clear();
		}
		int ok = 0;
		init();
		for (int i = 1; i <= v; i++){
			if(chuaxet[i]){
				if(dfs(i, 0)){
					ok = 1;
				}
			}
		}
		if(ok == 0){
			cout << "NO" << endl;
		}
		else {
			cout << "YES" << endl;
		}
	}
	return 0;
}
