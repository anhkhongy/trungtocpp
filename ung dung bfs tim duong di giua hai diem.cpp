#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int a[1000][1000];
int truoc[1000];
int check[1000] = {0};
int V,d,c;
void bfs(int u){
	queue<int> q;
	q.push(u);
	check[u] = 1;
	while (!q.empty()){
		int k = q.front();
		q.pop();
		for (int i = 1; i <= V; i++){
			if (a[k][i] == 1 && check[i] == 0){
				check[i] = 1;
				q.push(i);
				truoc[i] = k;
			}
		}
	}
}
void process(){
	if (truoc[c] == 0){
		cout << "no path" ;
	}
	else{
		int u = c;
		cout << c << " ";
		while (u != d){
			u = truoc[u];
			cout << u << " ";
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
	cin >> d >> c;
	bfs(d);
	process();
	return 0;
}
