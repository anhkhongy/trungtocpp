#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		pair<int,int> x, k;
		queue<pair<int,int>> q;
		x.first = n;
		x.second = 0;
		q.push(x);
		while (!q.empty()){
			x = q.front();
			q.pop();
			if (x.first == 1){
				cout << x.second << endl;
				break;
			}
			k.second = x.second + 1;
			if (x.first % 2 == 0){
				k.first = x.first / 2;
				q.push(k);
			}
			if (x.first % 3 == 0){
				k.first = x.first / 3;
				q.push(k);
			}
			if (x.first > 1){
				k.first = x.first - 1;
				q.push(k);
			}
		}
	}
	return 0;
}
