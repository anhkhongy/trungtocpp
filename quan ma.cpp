#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int rx[] = {1, 2, -1, 2, 1, -2, -1, -2};
int ry[] = {2, 1, 2, -1, -2, 1, -2, -1};
int main(int argc, char** argv) {
	int t;
	cin >> t;
	while (t--){
		int c[10][10];
		string s1, s2;
		cin >> s1 >> s2;
		int x1 = s1[0] - 'a' + 1;
		int y1 = s1[1] - '0';
		int x2 = s2[0] - 'a' + 1;
		int y2 = s2[1] - '0';
		for (int i = 1; i <= 8; i++){
			for (int j = 1; j <= 8; j++){
				c[i][j] = -1;
			}
		}
		c[x1][y1] = 0;
		queue<pair<int,int>> q;
		q.push({x1, y1});
		while (!q.empty()){
			pair<int, int> t = q.front();
			int a = t.first; int b = t.second;
			q.pop();
			for (int i = 0; i < 8; i++){
				if(c[a + rx[i]][b + ry[i]] == -1){
					q.push({a + rx[i], b + ry[i]});
					c[a + rx[i]][b + ry[i]] = c[a][b] + 1;
				}
			}
			if(c[x2][y2] != -1)break;
		}
		cout << c[x2][y2] << endl;
	}
	return 0;
}
