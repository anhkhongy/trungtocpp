#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int V, u, check[1000] = {0};
int a[1000][1000] ;
void DFS(int u){
	stack<int> s;
	check[u] = 1;
	s.push(u);
	while (!s.empty()){
		int k=s.top();
		s.pop();
		for (int i = 1; i <= V; i++){
			if(check[i] == 0 && a[V][i] == 1){
				check[i] = 1;
				s.push(k);
				cout << "Duyet dinh: " << i << "\n";
				s.push(i);
			}
		}
	}
}
void process(){
	ifstream fin("dfs_vd1.in");
	fin >> V;
	for (int i = 1; i <= V; i++){
		for (int j = 1; j <= V; j++){
			fin >> a[i][j];
		}
	}
	DFS(1);
}
int main(int argc, char** argv) {
	process();
	return 0;
}
