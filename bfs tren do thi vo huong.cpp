#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int check[1001];
vector<int> v[1001];
int V, E, u;
void init(){
	cin >> V >> E >> u;
	for (int i = 1; i <= E; i++){
		int x, y;
		cin >> x >> y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	for (int i = 1; i <= V; i++){
		sort(v[i].begin(),v[i].end());
	}
	memset(check, 0, sizeof(check));
}
void bfs(int u){
	
	queue<int> q;
	q.push(u);
	check[u] = 1;
	while (!q.empty()){
		int k = q.front();
		cout << k << " ";
		q.pop();
		for (int i : v[k]){
			if (check[i] == 0){
				check[i] = 1;
				q.push(i);
			}
		}
	}
}
int main(int argc, char** argv) {
	int t;
	cin >> t;
	while (t--){
		init();
		bfs(u);
		cout << endl;
		for(int i = 1; i <= V; i++){
			v[i].clear();
		}
	}
	return 0;
}
