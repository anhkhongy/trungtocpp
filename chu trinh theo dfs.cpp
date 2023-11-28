#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
vector<int> List[1005];
bool chuaxet[1005];
int v, e;
bool check ;
int truoc[1005];
int en;
void init(){
	cin >> v >> e;
	int c, d;
	while (e--){
		cin >> c >> d;
		List[c].push_back(d);
		List[d].push_back(c);
	}
	for (int i = 1; i <= v; i++){
		sort(List[i].begin(), List[i].end());
	}
}
void dfs(int u){
	if(check){
		return;
	}
	chuaxet[u] = false;
	for (int v : List[u]){
		if(chuaxet[v]){
			truoc[v] = u;
			dfs(v);
		}
		else if(v != truoc[u] && v == 1){
			en = u;
			check = true;
			return;
		}
	}
}
int main(int argc, char** argv) {
	int t;
	cin >> t;
	while (t--){
		check = false;
		memset(chuaxet, true, sizeof(chuaxet));
		for (int i = 0; i < 1005; i++){
			List[i].clear();
		}
		int ok = 0;
		init();
		dfs(1);
		if(check){
			stack<int> st;
			int t = en;
			st.push(en);
			while (t != 1){
				t = truoc[t];
				st.push(t);
			}
			while (!st.empty()){
				cout << st.top() << " ";
				st.pop();
			}
			cout << "1" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}
	return 0;
}
