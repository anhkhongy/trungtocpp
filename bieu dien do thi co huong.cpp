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
		for (int i = 1; i <= E; i++){
			int x, y;
			cin >> x >> y;
			v[x].push_back(y);
		}
		for (int i = 1; i <= V; i++){
			cout << i << ":";
			for (int it : v[i]){
				cout << " " << it;
			}
			cout << endl;	
		}
	}
	return 0;
}
