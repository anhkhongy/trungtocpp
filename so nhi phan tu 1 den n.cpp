#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin >> t;
	
	while (t--){
		int n;
		cin >> n;
		string f[10001];
		queue<string> q;
		q.push("1");
		f[1]="1";
		int i = 2;
		while (i <= n){
			string tmp = q.front();
			f[i++] = tmp+"0";
			f[i++] = tmp+"1";
			q.push(tmp+"0");
			q.push(tmp+"1");
			q.pop();
		}
		for (int i = 1; i <= n; i++){
			cout << f[i] << " ";
		}
		cout << endl;
	}
	return 0;
}
