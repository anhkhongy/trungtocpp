#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	queue<long long> q;
	vector<long long> v;
	q.push(4);
	q.push(7);
	v.push_back(4);
	v.push_back(7);
	long long top, x, y;
	while (q.front() <= 1e9){
		top = q.front();
		q.pop();
		x = top * 10 + 4;
		y = top * 10 + 7;
		q.push(x);
		q.push(y);
		v.push_back(x);
		v.push_back(y);
	}
	int a, b, idx;
	cin >> a >> b;
	long long res = 0, cnt = 0;
	idx = lower_bound(v.begin(), v.end(), a) - v.begin();
	while (a <= b){
		cnt = min(v[idx], 1LL * b) - a + 1;
		res += cnt * v[idx];
		a = v[idx] + 1;
		++idx;
	}
	cout << res;
	return 0;
}
