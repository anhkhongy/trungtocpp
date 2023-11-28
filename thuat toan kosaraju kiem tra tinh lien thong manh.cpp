#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//thuat toan kosaraju
vector<int> List[1005], rList[1005];
bool chuaxet[1005];
stack<int> st;
int v, e, cnt;
void init(){
	cin >> v >> e;
	int d, c;
	while (e--){
		cin >> d >> c;
		List[d].push_back(c);
		rList[c].push_back(d);
	}
}
void dfs1(int u){
	chuaxet[u] = false;
	for (int v : List[u]){
		if(chuaxet[v]){
			dfs1(v);
		}
	}
	st.push(u);
} 
void dfs2(int u){
	chuaxet[u] = false;
	for (int v : rList[u]){
		if(chuaxet[v]){
			dfs2(v);
		}
	}
}
void scc(){
	cnt = 0;
	memset(chuaxet, true, sizeof(chuaxet));
	for (int i = 1; i <= v; i++){
		if(chuaxet[i]){
			dfs1(i);
		}
	}
	memset(chuaxet, true, sizeof(chuaxet));
	while (!st.empty()){
		int u = st.top(); st.pop();
		if(chuaxet[u]){
			dfs2(u);
			cnt++;
		}
	}
	if(cnt == 1)cout << "YES" << endl;
	else cout << "NO" << endl;
}
int main(int argc, char** argv) {
	int t;
	cin >> t;
	while (t--){
		memset(chuaxet, true, sizeof(chuaxet));
		for (int i = 0; i < 1005; i++){
			List[i].clear();
			rList[i].clear();
		}
		init();
		scc();
	}
	return 0;
}
