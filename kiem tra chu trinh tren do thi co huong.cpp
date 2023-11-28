#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
vector<int> List[1005];
int v, e;
int color[1005];
void init(){
	cin >> v >> e;
	int c, d;
	while (e--){
		cin >> c >> d;
		List[c].push_back(d);
	}
}
bool dfs(int u){
	color[u] = 1;
	for (int v : List[u]){
		if(color[v] == 0){
			if(dfs(v))return true;
		}
		else if(color[v] == 1)return true;
	}
	color[u] = 2;
	return false;
}
int main(int argc, char** argv) {
	int t;
	cin >> t;
	while (t--){
		memset(color, 0, sizeof(color));
		for (int i = 0; i < 1005; i++){
			List[i].clear();
		}
		int ok = 0;
		init();
		for (int i = 1; i <= v; i++){
			if(color[i] == 0){
				if(dfs(i)){
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
