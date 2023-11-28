#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int a[1001][1001];
int check[1001];
int V, E, u, v;
int truoc[1001];
vector<int> f;
void bfs(int u){
	queue<int> q;
	q.push(u);
	check[u] = 1;
	while (!q.empty()){
		int k = q.front();
		q.pop();
		for(int i = 1; i <= V; i++){
			if(a[k][i] == 1 && check[i] == 0){
				check[i] = 1;
				truoc[i] = k;
				q.push(i);
			}
		}
	}
}
void GhiNhan(){
	if(truoc[v] == 0){
		cout << "-1";
	}
	else {
		f.push_back(v);
		int k = truoc[v];
		while (k != u){
			f.push_back(k);
			k = truoc[k];
		}
		f.push_back(u);
		reverse(f.begin(),f.end());
		for (int i : f){
			cout << i <<" ";
		}
	}
}
int main(int argc, char** argv) {
	int t;
	cin >> t;
	while (t--){
		f.clear();
		memset(check, 0, sizeof(check));
		memset(truoc, 0, sizeof(truoc));
		memset(a, 0, sizeof(a));
		cin >> V >> E >> u >> v;
		int b, c;
		for (int i = 1; i <= E; i++){
			cin >> b >> c;
			a[b][c] = 1;
		}
		bfs(u);
		GhiNhan();
		cout << endl;
	}
	return 0;
}
