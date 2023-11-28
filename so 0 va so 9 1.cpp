#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin >> t;
	while (t--){
		queue<int> q;
		int n;
		cin >> n;
		q.push(9);
		while (!q.empty()){
			int x = q.front();
			q.pop();
			if(x % n == 0){
				cout << x << endl;
				break;
			}
			q.push(x * 10);
			q.push(x * 10 + 9);
		}
	}
	return 0;
}
