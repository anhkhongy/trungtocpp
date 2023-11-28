#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int rx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int ry[] = {-1, 0, 1, -1, 1, -1, 0, 1};
int n, m, a[505][505];
void dfs(int u, int v){
	a[u][v] = 0;
	for (int i = 0; i < 8; i++){
		int dx = u + rx[i];
		int dy = v + ry[i];
		if(dx >= 1 && dx <= n && dy >= 1 && dy <= m && a[dx][dy] == 1){
			dfs(dx, dy);
		}
	}
}
int main(int argc, char** argv) {
	int t;
	cin >> t;
	while (t--){
		cin >> n >> m;
		for (int i = 1; i <= n; i++){
			for (int j = 1; j <= m; j++){
				cin >> a[i][j];
			}
		}
		int tplt = 0;
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= m; j++){
				if(a[i][j] == 1){
					tplt++;
					dfs(i, j);
				}
			}
		}
		cout << tplt << endl;
	}
	return 0;
}
