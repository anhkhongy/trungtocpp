#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin >> t;
	while (t--){
		long long n;
		cin >> n;
		queue<long long> q;
		q.push(1);
		long long sum  = 0;
		while (!q.empty()){
			long long x = q.front();
			q.pop();
			if(x <= n){
				sum++;
				q.push(x * 10);
				q.push(x * 10 + 1);
			}
			else {
				break;
			}
		}
		cout << sum << endl;
	}
	return 0;
}
