#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int a[1001][1001];
int v, e, u;
int check[1001];
void dfs(int u){
	stack<int> s;
	s.push(u);
	check[u] = 1;
	cout << u << " ";
	while (s.size()){
		int k = s.top();
		s.pop();
		for (int i = 1; i <= v; i++){
			if(a[k][i] == 1 && check[i] == 0){
				check[i] = 1;
				cout << i << " ";
				s.push(k);
				s.push(i);
				break;
			}
		}
	}
}
int main(int argc, char** argv) {
	int t;
	cin >> t;
	while (t--){
		cin >> v >> e >> u;
		memset(a, 0, sizeof(a));
		memset(check, 0, sizeof(check));
		int c, b;
		for (int i = 1; i <= e; i++){
			cin >> c >> b;
			a[c][b] = 1;
		}
		dfs(u);
		cout << endl;
	}
	return 0;
}
