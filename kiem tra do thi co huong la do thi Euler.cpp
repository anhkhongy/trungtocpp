#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int V;
int a[1000][1000];
int b[1000][1000];
int check[1000] = {0};
vector<int> v;
void dfs(int u){
	stack<int> s;
	s.push(u);
	check[u] = 1;
	v.push_back(u);
	while (!s.empty()){
		int k = s.top();
		s.pop();
		for (int i = 1; i <= V; i++){
			if (b[i][k] == 1 && check[i] == 0){
				check[i] = 1;
				v.push_back(i);
				s.push(k);
				s.push(i);
				break;
			}
		}
	}
}
bool checklt(){
	for (int i = 1; i <= V; i++){
		v.clear();
		memset(check, 0, sizeof(check));
		dfs(i);
		if (v.size() != V){
			return false;
		}
	}
	return true;
}
bool check1(){
	for (int i = 1; i <= V; i++){
		int tc = 0, th = 0;
		for (int j = 1; j <= V; j++){
			th += a[i][j];
			tc += a[j][i];
		}
		if (th != tc){
			return false;
		}
	}
	return true;
}
int main(int argc, char** argv) {
	cin >> V;
	for (int i = 1; i <= V; i++){
		for (int j = 1; j <= V; j++){
			cin >> a[i][j];
			b[i][j] = b[j][i] = a[i][j];
		}
	}
	if (checklt() && check1()){
		cout << "La do thi Euler";
	}
	else {
		cout << "Khong phai la do thi Euler";
	}
	return 0;
}
