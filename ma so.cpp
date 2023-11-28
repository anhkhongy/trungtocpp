#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int n;
vector<vector<int>> a, b;
vector<int> v(10), u(10);
int check[10] = {0};
void Try1(int i){
	for (int j = 1; j <= n; j++){
		v[i] = j;
		if (i == n){
			a.push_back(v);
		}
		else {
			Try1(i + 1);
		}
	}	
}
void Try2(int i){
	for (int j = 1; j <= n; j++){
		if (check[j] == 0){
			u[i] = j;
			check[j] = 1;
			if (i == n){
				b.push_back(u);
			}
			else{
				Try2(i + 1);
			}
			check[j] = 0;
		}
	}
}
int main(int argc, char** argv) {
	cin >> n;
	Try1(1);
	Try2(1);
	for (int i = 0; i < b.size(); i++){
		for (int j = 0; j < a.size(); j++){
			for (int k = 1; k <= n; k++)
                cout << (char)(b[i][k] + 'A' - 1);
            for (int k = 1; k <= n; k++)
                cout << a[j][k];
            cout << endl;
		}
	}
	return 0;
}
