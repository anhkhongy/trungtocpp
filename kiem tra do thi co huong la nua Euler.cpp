#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int V;
int a[1000][1000];
int b[1000][1000];
vector<int> v;
int check[1000];
void dfs(int u){
	stack<int> s;
	s.push(u);
	check[u] = 1;
	v.push_back(u);
	while (!s.empty()){
		int k = s.top();
		s.pop();
		for (int i = 1; i <= V; i++){
			if(check[i] == 0 && b[i][k] == 1){
				check[i] = 1;
				v.push_back(i);
				s.push(k);
				s.push(i);
			}
		}
	}
}
bool checklt(){
	for (int i = 1; i <= V; i++){
		v.clear();
		memset(check, 0, sizeof(check));
		dfs(i);
		if(v.size() != V){
			return false;
		}
	}
	return true;
}
bool check1(){
	int dem  = 0;
	for (int i = 1; i <= V; i++){
		int in = 0, out = 0;
		for (int j = 1; j <= V; j++){
			in += a[i][j];
			out += a[j][i];
		}
		if(in != out){
			dem++;
			if(abs(in - out) != 1){
				return false;
			}
		}
	}
	if(dem != 2){
		return false;
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
	if(checklt() && check1()){
		cout << "La do thi nua Euler";
	}
	else {
		cout <<"Khong phai do thi nua Euler";
	}
	return 0;
}
