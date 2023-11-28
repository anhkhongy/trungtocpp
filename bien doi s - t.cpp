#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin >> t;
	while (t--){
		int s, t;
		cin >> s >> t;
		int c[20001] = {0};
		queue<int> q;
		q.push(s);
		while (c[t] == 0){
			int tmp = q.front();
			q.pop();
			if(tmp - 1 > 0 && c[tmp - 1] == 0){
				c[tmp - 1] = c[tmp] + 1;
				q.push(tmp - 1);
			}
			if(tmp * 2 < 20000 && c[tmp * 2] == 0){
				c[tmp * 2] = c[tmp] + 1;
				q.push(tmp * 2);
			}
		}
		cout << c[t] << endl;
	}
	return 0;
}
