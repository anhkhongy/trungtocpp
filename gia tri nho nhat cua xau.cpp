#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin >> t;
	while (t--){
		int k;
		cin >> k;
		string s;
		cin >> s;
		priority_queue<int> pq;
		map<char,int> mp;
		for (int i = 0; i < s.length(); i++){
			mp[s[i]] ++;
		}
		for (auto it : mp){
			pq.push(it.second);
		}
		while (k > 0){
			int t = pq.top();
			pq.pop();
			t--;
			k--;
			pq.push(t);
		}
		long long sum = 0;
		while(pq.size()){
			int k = pq.top();
			pq.pop();
			sum += k * k;
		}
		cout << sum << endl;
	}
	return 0;
}
