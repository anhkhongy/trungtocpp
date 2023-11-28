#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int v, e;
bool chuaxet[1005];
vector<int> List[1005];
void dfs(int u){
	chuaxet[u] = false;
	for (int v : List[u]){
		if(chuaxet[v]){
			dfs(v);
		}
	}
}
void dinhtru(){
	for (int i = 1; i <= v; i++){
		chuaxet[i] = false;
		if(i == 1)dfs(2);
		else dfs(1);
		for (int j = 1; j <= v; j++){
			if(chuaxet[j]){
				cout << i << " ";
				break;
			}
		}
		memset(chuaxet, true, sizeof(chuaxet));
	}
}
int main(int argc, char** argv) {
	int t;
	cin >> t;
	while (t--){
		memset(chuaxet, true, sizeof(chuaxet));
		for (int i = 0; i < 1005; i++){
			List[i].clear();
		}
		cin >> v >> e;
		int c, d;
		for (int i = 1; i <= e; i++){
			cin >> c >> d;
			List[c].push_back(d);
			List[d].push_back(c);
		}
		dinhtru();
		cout << endl;
	}
	return 0;
}
