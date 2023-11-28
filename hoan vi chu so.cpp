#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int n;
vector<int> a; 
int s;
vector<int> v;
int x[10];
int check[10] = {0};
void Try(int i){
	for (int j = 0; j < s; j++){
		if (check[j] == 0){
			check[j] = 1;
			x[i] = j;
			if (i == s){
				int tmp = 0;
				for (int k = 1; k <= s; k++){
					tmp = tmp * 10 + a[x[k]];
				}
				v.push_back(tmp);
			}
			else {
				Try(i+1);
			}
			check[j] = 0;
		}
	}
}
int main(int argc, char** argv) {
	int t;
	cin >> t;
	while (t--){
		cin >> n ;
		s = 0; 
		v.clear();
		memset(check, 0, sizeof(check));
		while (n > 0){
			int t = n % 10;
			a.push_back(t);
			n /= 10; 
			s ++ ; 
		}
		Try(1);
		sort(v.begin(), v.end());
		for (int x : v){
			cout << x << endl;
		}
	}
	return 0;
}
