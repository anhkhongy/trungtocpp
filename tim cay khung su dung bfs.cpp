#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int V;
int a[1000][1000];
int check[1000] = {};
vector<pair<int,int>> v;
void Tree_BFS(int u){
	queue<int> q;
	q.push(u);
	check[u] = 1;
	while (!q.empty()){
		int k = q.front();
		q.pop();
		for (int i = 1; i <= V; i++){
			if(a[k][i] == 1 && check[i] == 0){
				q.push(i);
				v.push_back({k, i});
				check[i] = 1;
			}
		}
	}
}
int main(int argc, char** argv) {
	cin >> V;
	for (int i = 1; i <= V; i++){
		for (int j = 1; j <= V; j++){
			cin >> a[i][j];
		}
	}
	int u;
	cin >> u;
	Tree_BFS(u);
	if (v.size() < V - 1){
		cout << "Do thi khong lien thong";
	}
	else {
		for (auto it : v){
			cout << it.first << " " << it.second << endl;
		}
	}
	return 0;
}
