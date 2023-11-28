#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int n,m,p,ss;

vector<bool> check(205,1);
vector<int> a,x;
vector<vector<int>> ans;
void era(){
	for (int i = 2; i <= 200; i++){
		if (check[i]){
			a.push_back(i);
			for (int j = i*i;j <= 200; j+=i){
				check[j] = 0;
			}
		}
	}
	m=a.size();
}

void Try(int i, int k, int s){
	for (int j = i+1; j < m; j++){
		if (s+a[j] == ss && k == n-1){
			x.push_back(a[j]);
			ans.push_back(x);
			x.pop_back();
		}
		if (s + a[j] < ss && k < n-1){
			x.push_back(a[j]);
			Try(j, k+1, s + a[j]);
			x.pop_back();
		}
	}	
}
int main(int argc, char** argv) {
	era();
	int t;
	cin >> t;
	while (t--){
		ans.clear();
		cin >> n >> p >> ss;
		int tmp;
		for (int i = 0; i < m; i++){
			if (a[i] > p){
				tmp = i;
				break;
			}
		}
		Try(tmp-1, 0, 0);
		cout << ans.size() << endl;
		for (auto it : ans){
			for (int i : it){
				cout << i <<  " ";
			}
			cout << endl;
		}
	}
	return 0;
}
