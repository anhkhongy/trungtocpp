#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
vector<string> v;
string s;
int x[101] = {0};
int n;
void Try(int i,int k){
	for (int j = x[i-1] + 1; j <= n-k+i; j++){
		x[i] = j;
		if (i == k){
			string tmp = "";
			for (int t = 1; t <=k ;t++){
				tmp = tmp + s[x[t]-1];
			} 
			v.push_back(tmp);
		}
		else Try(i+1, k);
	}
}
int main(int argc, char** argv) {
	int t;
	cin >> t;
	while (t--){
		v.clear();
		cin >> n;
		cin >> s;
		for (int i = 1; i <= n; i++){
			memset(x,0,sizeof(x));
			Try(1,i);
		}
		sort(v.begin(),v.end());
		for (string x:v){
			cout << x << " ";
		}
		cout << endl;
	}
	return 0;
}
