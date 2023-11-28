#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int v, parent[1005]; 
void init(){
	for (int i = 1; i <= v; i++){
		parent[i] = i;
	}
}
int find(int u){
	if(u != parent[u]){
		parent[u] = find(parent[u]);
	}
	return parent[u];
}
void Union(int u, int v){
	int a = find(u);
	int b = find(v);
	if(a == b)return;
	parent[b] = a;
}
int main(int argc, char** argv) {
	int t;
	cin >> t;
	while(t--){
		cin >> v;
		init();
		int e = v - 1;
		while (e--){
			int c, d;
			cin >> c >> d;
			Union(c, d);
		}
		int dem = 0;
		for (int i = 2; i <= v; i++){
			if(parent[i] != parent[1]){
				dem++;
			}
		}
		if(dem > 0){
			cout << "NO" << endl;
		}
		else {
			cout << "YES" << endl;	
		}
	}
	return 0;
}
