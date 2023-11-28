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
		q.push("1");
		string ans;
		if (1%n == 0){
			cout << "1" <<endl;
		}
		else {
			while (1){
				string t1 = q.front() + "0";
				string t2 = q.front() + "1";
				if (stoll(t1) %n == 0){
					ans = t1;
					break;
				}
				if(stoll(t2) % n == 0){
					ans = t2;
					break;
				}
				q.pop();
				q.push(t1);
				q.push(t2);
			}
			cout << ans << endl;
		}
	}
	return 0;
}
