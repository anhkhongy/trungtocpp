#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n, s;
	cin >> n >> s;
	if(s > 9 * n || s == 0){
		cout << -1 << " " << -1;
	}
	else{	
		vector<int> v;
		int ans = s - 1;
		while (v.size() < n - 1){
			int k = min (ans, 9);
			v.push_back(k);
			ans -= k;
		} 
		if(ans > 0){
			v.push_back(ans + 1);
		}
		else {
			v.push_back(1);
		}
		for (int i = v.size() - 1; i >= 0; i--){
			cout << v[i] ;
		}
		cout << " " ;
		vector<int> p;
		int tmp = s ;
		while (p.size() < n){
			int u = min(tmp, 9);
			p.push_back(u);
			tmp -= u;
		}
		for (int i = 0; i < p.size(); i++){
			cout << p[i];
		}
	}
	return 0;
}
