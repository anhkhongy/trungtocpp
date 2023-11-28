#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int a[1000][1000];
vector<vector<int>> ans;
vector<int> x;
int check[1000] = {0};
int V;
void dfs(int u){
	stack<int>s;
	check[u]=1;
	s.push(u);
	x.push_back(u);
	while(!s.empty()){
		int k=s.top();
		s.pop();
		for(int i=1;i<=V;i++){
			if(a[k][i]==1 && check[i]==0){
				check[i]=1;
				x.push_back(i);
				s.push(k);
				s.push(i);
				break;
			}
		}
	}
}
int tplt(){
	int tpl = 0;
	for (int i = 1; i <= V; i++){
		if (check[i] == 0){
			tpl++;
			dfs(i);
			ans.push_back(x);
			x.clear();
		}
	}
	return tpl;
}
int main(int argc, char** argv) {
	cin >> V;
	for (int i = 1; i <= V; i++){
		for (int j = 1; j <= V; j++){
			cin >> a[i][j];
		}
	}
	cout << tplt() << endl;
	for (auto it : ans){
		for (int i : it){
			cout << i << " ";
		}
		cout << endl;
	}
	return 0;
}
