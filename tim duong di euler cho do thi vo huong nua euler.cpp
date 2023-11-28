#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int a[1000][1000];
vector<int> v;
int V;
int check[1000] ;
vector<int> CE;
vector<int> c(2);
int OK = 0;
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
		v.clear();
		memset(check,0,sizeof(check));
		dfs(i);
		if (v.size() != V){
			return false;
		}
	}
	return true;
}
bool check1(){
	int dem = 0;
	for (int i = 1; i <= V; i++){
		int t = 0;
		for (int j = 1; j <= V; j++){
			if (a[i][j] == 1){
				t++;
			}
		}
		if (t % 2 == 1){
			dem ++;
		}
	}
	if (dem == 0 || dem == 2 ){
		return true;
	}
	return false;
}
void Euler_Cycle(int u){
	stack<int> st;
	st.push(u);
	while (st.size()){
		int ok = 0;
		int k = st.top();
		for (int i = 1; i <= V; i++){
			if (a[i][k] == 1){
				ok = 1;
				st.push(i);
				a[i][k] = a[k][i] = 0;
				break;
			}
		}
		if (ok == 0){
			st.pop();
			CE.push_back(k);
		}
	}
}
int main(){
	OK = 0;
	cin >> V;
	for (int i = 1; i <= V; i++){
		for (int j = 1; j <= V; j++){
			cin >> a[i][j]	;	
		}
	}
	for (int  i = 1; i <= V; i++){
		int t = 0;
		for (int j = 1; j <= V; j++){
			t += a[i][j];
		}
		if(t % 2 == 1){
			c.push_back(i);
		}
	}
	if (Strong_Connected() && check1()){
		Euler_Cycle(c[0]);
		reverse(CE.begin(), CE.end());
		for (int i : CE){
			cout << i << " ";
		}
	}
}
