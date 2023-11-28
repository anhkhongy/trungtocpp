#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
vector<int> v, V;
int d, n;
vector<pair<int,int>> t;
int check;
int u[101][101];
void Prim(int s){
	t.clear();
	d = 0;
	v.push_back(s);
	V.erase(V.begin() + s - 1);
	while (V.size() > 0){
		int ma = INT_MAX;
		int a, b, ind;
		int ok = 0;
		for (int i = 0; i < v.size(); i++){
			for (int j = 0; j < V.size(); j++){
				if(u[v[i]][V[j]] < ma && u[v[i]][V[j]] > 0){
					ok = 1;
					a = v[i];
					b = V[j];
					ind = j;
					ma = u[v[i]][V[j]];
				}
			}
		}
		if(ok == 0){
			check = 0;
		}
		t.push_back({a, b});
		d += u[a][b];
		v.push_back(b);
		V.erase(V.begin() + ind);
	}
}
int main(int argc, char** argv) {
	cin >> n;
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= n; j++){
			cin >> u[i][j];
		}
		V.push_back(i);
	}
	check = 1;
	int s;
	cin >> s;
	Prim(s);
	if(check == 0){
		cout << "Do thi khong lien thong" ;
	}
	else {
		for(auto it : t){
			cout << it.first << " " << it.second << endl;
		}
		cout << d ;
	}
	return 0;
}
