#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
bool check(string s){
	int n = s.length();
	if(n % 2 == 1){
		return false;
	}
	for (int i = 0; i < n/2; i++){
		if(s[i] != s[n - i - 1]){
			return false;
		}
	}
	return true;
}
int main(int argc, char** argv) {
	int t;
	cin >> t;
	while (t--){
		int dem = 0;
		int n;
		cin >> n;
		queue<string> q;
		vector<string> s;
		q.push("6");
		q.push("8");
		while(!q.empty()){
			string k = q.front();
			q.pop();
			if(check(k)){
				cout << k << " ";
				dem ++;
			}
			if(dem == n){
				break;
			}
			else {
				q.push(k + "6");
				q.push(k + "8");
			}
		}
		cout << endl;
	}
	return 0;
}
