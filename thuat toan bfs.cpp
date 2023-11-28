#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int V, u, check[1000] = {0};
int a[1000][1000];
void BFS(int u){
	queue<int> q;
	q.push(u);
	check[u] = 1;
	while (!q.empty()){
		int k = q.front();
		q.pop();
		for (int i = 1; i <= V; i++){
			if(a[V][i] == 1 && check[i] == 0){
				check[i] = 1;
				q.push(i);
			}
		}
	}
}
void process(){
	ifstream fin("matrix.in");
	fin >> V;
	for (int i = 1; i <= V; i++){
		for (int j = 1; j <= V; j++){
			fin >> a[i][j];
		}
	}
}
int main(int argc, char** argv) {
	process();
	return 0;
}
