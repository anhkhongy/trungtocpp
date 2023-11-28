#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	vector<string> v;
	v.push_back("44");
	v.push_back("55");
	queue<string> q;
	q.push("4");
	q.push("5");
	string s1, s2, top;
	while (v.size() < 10005){
		top = q.front();
		q.pop();
		s1 = top + "4";
		s2 = top + "5";
		q.push(s1);
		q.push(s2);
		string tmp  = "";
		reverse(s1.begin(), s1.end());
		v.push_back(top + "4" + s1);
		reverse(s2.begin(), s2.end());
		v.push_back(top + "5" + s2);
	}
	int t, n;
	cin >> t;
	while(t--){
		cin >> n;
		for (int i = 0; i < n; i++){
			cout << v[i] << ' ';
		}
		cout << endl;
	}
	return 0;
}
