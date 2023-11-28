#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int V;
int a[1000][1000] ;
vector<int> x;
int check[1000] = {0};
void DFS(int u){
	stack<int> s;
	check[u] = 1;
	s.push(u);
	x.push_back(u);
	while (!s.empty()){
		int k=s.top();
		s.pop();
		for (int i = 1; i <= V; i++){
			if(check[i] == 0 && a[k][i] == 1){
				check[i] = 1;
				s.push(k);
				s.push(i);
				x.push_back(i);
				break;
			}
		}
	}
}
void Duyetcau(){
	memset(check, 0, sizeof(check));
	x.clear();
	for (int i = 1; i <= V; i++){
		for (int j = i+1; j <= V; j++){
			if (a[i][j] == 1){
				a[i][j] = a[j][i] = 0;
				DFS(1);
				if (x.size() < V){
					cout << i << " " << j << endl;
				}
				a[i][j] = a[j][i] = 1;
				memset(check, 0, sizeof(check));
				x.clear();
			}
		}
	}
}
int main(int argc, char** argv) {
	cin >> V ;
	for (int i = 1; i <= V; i++){
		for (int j = 1; j <= V; j++){
			cin >> a[i][j];
		}
	}
	Duyetcau();
	return 0;
}
//0 1 1 0 0
//1 0 1 0 1
//1 1 0 1 0
//0 0 1 0 0
//0 1 0 0 0 
