#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		queue<int> q;
		int k;
		while (n--){
			cin >> k;
			if (k == 1){
				cout << q.size() << endl;
			}
			else if(k == 2){
				if (!q.empty()){
					cout << "NO\n";
				}
				else {
					cout << "YES\n";
				}
			}
			else if(k == 3){
				int t;
				cin >> t;
				q.push(t);
			}
			else if (k == 4){
				if (!q.empty()){
					q.pop();
				}
			}
			else if(k == 5){
				if(!q.empty()){
					cout << q.front() <<endl;
				} 
				else {
					cout << "-1" <<endl;
				}
			}
			else if(k == 6){
				if(!q.empty()){
					cout << q.back() <<endl;
				}
				else {
					cout << "-1" << endl; 
				}
			}
		}
	}
	return 0;
}
