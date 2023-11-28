#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
vector<pair<int,int>> t;
vector<pair<int, pair<int,int>>> c;
int d, V;
int ok;
int u[101][101];
int check[101] = {};

void Kruscal(){
	t.clear();
	d = 0;
	sort(c.begin(), c.end());
	int i = 0;
	while (t.size() < V - 1 && i < c.size()){
		int a = c[i].second.first;
		int b = c[i].second.second;
		if(check[a] == 0 || check[b] == 0){
			check[a] = 1;
			check[b] = 1;
			t.push_back({a, b});
			d += u[a][b];
		}
		++i;
	}
	if(t.size() < V - 1){
		ok = 0;
	}
}
int main(int argc, char** argv) {
	cin >> V;
	ok = 1;
	for (int i = 1; i <= V; i++){
		for (int j = 1; j <= V; j++){
			cin >> u[i][j];
			if (u[i][j] > 0 && i < j){
				c.push_back({u[i][j], {i, j}});
			}
		}
	}
	Kruscal();
	if(ok == 0){
		cout << "Do thi khong lien thong" << endl;
	}
	else {
		for(auto it : t){
			cout << it.first << " " << it.second << endl;
		}
		cout << d ;
	}	
	return 0;
}
