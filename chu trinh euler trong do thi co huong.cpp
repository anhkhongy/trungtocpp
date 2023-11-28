#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin >> t;
	while (t--){
		int V, E;
		cin >> V >> E;
		vector<vector<int>> v(V + 1);
		vector<vector<int>> u(V + 1);
		int a, b;
		for (int i = 1; i <= E; i++){
			cin >> a >> b;
			v[a].push_back(b);
			u[b].push_back(a);
		}
		int cnt = 0;
		for (int i = 1; i <= V; i++){
			if(v[i].size() != u[i].size()){
				cnt ++ ;
			}
		}
		if(cnt == 0){
			cout << 1 << endl;
		}
		else {
			cout << 0 << endl;
		}
	}
	return 0;
}
