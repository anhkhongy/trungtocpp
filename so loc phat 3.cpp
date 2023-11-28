#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		queue<string> q;
		stack<string> s;
		q.push("6");
		q.push("8");
		int dem = 0;
		while (!q.empty()){
			string k = q.front();
			q.pop();
			s.push(k);
			if(k.length() < n){
				q.push(k + "6");
				q.push(k + "8");
			}
		}
		cout << s.size() << endl;
		while (s.size()){
			cout << s.top() << " ";
			s.pop();
		}
		cout << endl;
	}
	return 0;
}
