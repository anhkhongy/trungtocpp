#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int v, e, ans,  parent[100001], num[100001];
void init(){
	for (int i = 1; i <= v; i++){
		parent[i] = i;
		num[i] = 1;
	}
}
int find(int u){
	if(u != parent[u])
		parent[u] = find(parent[u]);
	return parent[u];
}
void Union(int u, int v){
	int a = find(u);
	int b = find(v);
	if(a == b)return;
	if(num[a] < num[b])swap(a, b);
	parent[b] = a;
	num[a] += num[b];
	ans = max(ans, num[a]);
}
int main(int argc, char** argv) {
	int t, u, z;
	cin >> t;
	while (t--){
		cin >> v >> e;
		ans = 0;
		init();
		while(e--){
			cin >> u >> z;
			Union(u, z);
		}
		cout << ans << endl;
	}
	return 0;
} 
