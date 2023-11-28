#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
vector<int> List[1005];
bool check[1005];
int truoc[1005];
void bfs(int u){
	queue<int> q;
	q.push(u);
	check[u] = false;
	while(!q.empty()){
		int k = q.front();
		q.pop();
		for (int v : List[k]){
			if(check[v]){
				check[v] = false;
				truoc[v] = k;
				q.push(v);
			}
		}
	}
}
int main(int argc, char** argv) {
	int t;
	cin >> t;
	while(t--){
		int v, e, u, z;
		memset(check, true, sizeof(check));
		memset(truoc, 0, sizeof(truoc));
		for(int i = 0; i < 1005; i++){
			List[i].clear();
		}
		cin >> v >> e >> u >> z;
		int  d, c;
		for (int i = 1; i <= e; i++){
			cin >> d >> c;
			List[d].push_back(c);
			List[c].push_back(d);
		}
		bfs(u);
		int t = z;
		vector<int> V;
		V.push_back(z);
		int ok = 1;
		while (t != u){
			t = truoc[t];
			if(t == 0){
				ok = 0;
				break;
			}
			V.push_back(t);
		}
		if(!ok)cout << -1 << endl;
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
