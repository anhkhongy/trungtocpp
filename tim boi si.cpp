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
		q.push("9");
		if (9 % n == 0){
			cout << "9" << endl;
			continue;
		}
		while (1){
			string k  = q.front();
			q.pop();
			string t1 = k + "0";
			string t2 = k + "9";
			if (stoll(t1) % n == 0){
				cout << t1 << endl;
				break;
			} 
			if (stoll(t2) % n == 0){
				cout << t2 << endl;
				break;
			}
			q.push(t1);
			q.push(t2);
		}
	}
	return 0;
}
