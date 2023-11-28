#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin >> t;
	while (t--){
		long long p;
		cin >> p;
		if(p == 1){
			cout << 1 << endl;
			continue;
		}
		stack<int> st;
		for (int i = 9; i >= 2; i --){
			while (p % i == 0){
				st.push(i);
				p /= i;
			}
		}
		if(p > 1){
			cout << -1 << endl;
		}
		else{
			while (st.size()){
				cout << st.top();
				st.pop();
			}
			cout << endl;
		}
	}
	return 0;
}
