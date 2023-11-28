#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
vector<int> x;
vector<vector<int>> v;
int n;
void Try(int s){
	for (int j = x[x.size()-1]; j >= 1; j--){
		if (s + j == n){
			x.push_back(j);
			v.push_back(x);
			x.pop_back();
		}
		if (s + j < n){
			x.push_back(j);
			Try(s + j);
			x.pop_back();
		}
	}
}
int main(int argc, char** argv) {
	int t;
	cin >> t;
	while (t--){
		v.clear();
		x.clear();
		cin >> n;
		x.push_back(n);
		Try(0);
		cout << v.size() << endl;
		for (int i = 0; i < v.size(); i++){
			cout << "(";
			for (int j = 1; j < v[i].size()-1; j++){
				cout << v[i][j] <<" ";
			}
			cout << v[i][v[i].size() - 1] << ") ";
		}
		cout << endl;
	}
	return 0;
}
