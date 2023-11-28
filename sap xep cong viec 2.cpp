#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		vector<pair<int,int>> v;
		int j, d, p;
		for (int i = 1; i <= n; i++){
			cin >> j >> d >> p;
			v.push_back({d,p});
		}
		sort(v.begin(), v.end());
		priority_queue<int,vector<int>,greater<int>> pq;
		int ma = v[0].first;
		int mi = v[0].second;
		pq.push(v[0].second);
		for (int i = 1; i < v.size(); i++){
			int k = pq.top();
			if (v[i].first > pq.size()){
				pq.push(v[i].second);
			}
			else if(v[i].first == pq.size()){
				if (v[i].second > k){
					pq.pop();
					pq.push(v[i].second);
				}
			}
		}
		int s = 0;
		cout << pq.size() << " ";
		while (!pq.empty()){
			int k = pq.top();
			s += k;
			pq.pop();
		}
		cout << s << endl;
	}
	return 0;
}
