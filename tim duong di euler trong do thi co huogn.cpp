#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int V;
int a[1000][1000];
vector<int> v;
int check[1000];
int point;
vector<int> CE;
void dfs(int u){
	stack<int> s;
	s.push(u);
	check[u] = 1;
	v.push_back(u);
	while(!s.empty()){
		int k = s.top();
		s.pop();
		for (int i = 1; i <= V; i++){
			if((a[i][k] == 1 || a[k][i] == 1) && check[i] == 0){
				check[i] = 1;
				v.push_back(i);
				s.push(k);
				s.push(i);
			}
		}
	}
}
bool checklt(){
	for (int  i =1; i <= V; i++){
		v.clear();
		memset(check, 0, sizeof(check));
		dfs(i);
		if(v.size() != V){
			return false;
		}
	}
	return true;
}
void Euler_Cycle(int u){
	stack<int> st;
	st.push(u);
	while (st.size()){
		int ok = 0;
		int k = st.top();
		for (int i = 1; i <= V; i++){
			if (a[k][i] == 1){
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
bool check1(){
	set<int> se;
	int dem = 0;
	for (int i = 1; i <= V; i++){
		int c = 0, h = 0;
		for (int j = 1;  j <= V; j++){
			h += a[i][j];
			c += a[j][i];
		}
		if(abs(h - c) > 1){
			return false;
		}
		if (h - c == 1){
			point = i;
			dem++;
			se.insert(h - c);
		}
		else if(h - c == -1){
			dem ++;
			se.insert(-1);
		}
	}
	if(dem == 2 && se.size() == 2){
		return true;
	}
	return false;
}
int main(int argc, char** argv) {
	cin >> V;
	for (int i = 1; i <= V; i++){
		for (int j = 1; j <= V; j++){
			cin >> a[i][j];
		}
	}
	if(checklt() && check1()){
		Euler_Cycle(point);
		reverse(CE.begin(), CE.end());
		for (int i : CE){
			cout << i << " ";
		}
	}
	else {
		cout << "Khong co duong di Euler";
	}
	return 0;
}
