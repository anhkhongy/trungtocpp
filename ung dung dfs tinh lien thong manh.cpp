#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int a[1000][1000];
vector<int> v;
int V;
int check[1000] = {0};
void dfs(int u){
	stack<int> st;
	st.push(u);
	check[u] = 1;
	v.push_back(u);
	while (!st.empty()){
		int k = st.top();
		st.pop();
		for (int i = 1; i <= V; i++){
			if (a[i][k] == 1 && check[i] == 0){
				check[i] = 1;
				st.push(k);
				st.push(i);
				v.push_back(i);
				break;
			}
		}
	}
}
bool Strong_Connected(){
	for (int i = 1; i <= V; i++){
		memset(check,0,sizeof(check));
		dfs(i);
		if (v.size() != V){
			return false;
		}
		v.clear();
	}
	return true;
}
int main(int argc, char** argv) {
	cin >> V;
	for (int i = 1; i <= V; i++){
		for (int j = 1; j <= V; j++){
			cin >> a[i][j];
		}
	}
	if (Strong_Connected()){
		cout << "YES\n";
	}
	else {
		cout << "NO\n";
	}
	return 0;
}
