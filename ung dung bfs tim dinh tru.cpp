#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int a[1000][1000];
int check[1000] = {0};
int V;
vector<int> x;
void BFS(int u,int v){
	queue<int> q;
	q.push(u);
	check[u] = 1;
	x.push_back(u);
	while (!q.empty()){
		int k = q.front();
		q.pop();
		for (int i = 1; i <= V; i++){
			if(a[k][i] == 1 && check[i] == 0 && i != v){
				check[i] = 1;
				q.push(i);
				x.push_back(i);
			}
		}
	}
}
void Duyet_Tru(){
	
	for (int i = 1; i <= V; i++){
		memset(check,0,sizeof(check));
		if (i == 1){
			BFS(2,1);
			if (x.size() != V-1){
				cout << "1" << endl;
			}
		}
		else {
			BFS(1,i);
			if(x.size() != V-1){
				cout << i << endl;
			}
		}
		x.clear();
	}
}
int main(int argc, char** argv) {
	cin >> V;
	for (int i = 1; i <= V; i++){
		for (int j = 1; j <= V; j++){
			cin >> a[i][j];
		}
	}
	Duyet_Tru();
	return 0;
}
//0 1 1 0 0
//1 0 1 0 1
//1 1 0 1 0
//0 0 1 0 0
//0 1 0 0 0 
