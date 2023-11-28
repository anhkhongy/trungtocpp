#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int a[1001][1001], c[1001][1001];
void xuly(int n, int m){
	queue<pair<int, int>> q;
	memset(c, -1, sizeof(c));
	q.push({1, 1}); c[1][1] = 0;
	while (!q.empty()){
		pair<int, int> t = q.front();
		int i = t.first; int j = t.second;
		int x = a[i][j]; q.pop();
		if(c[i][j + x] == -1){
			q.push({i, j + x});
			c[i][j + x] = c[i][j] + 1;
		}
		if(c[i + x][j] == -1){
			q.push({i + x, j});
			c[i + x][j] = c[i][j] + 1;
		}
		if(c[i +])
		if(c[n][m] != -1)break;
	}
	cout << c[n][m] << endl;
}
int main(int argc, char** argv) {
	int t;
	cin >> t;
	while (t--){
		int n, m;
		cin >> n >> m;
		for (int i = 1; i <= n; i++){
			for (int j = 1; j <= m; j++){
				cin >> a[i][j];
			}
		}
		xuly(n, m);
	} 
	return 0;
}
