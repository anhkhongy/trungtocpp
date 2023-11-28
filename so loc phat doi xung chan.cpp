#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin >> t;
	while (t--){
		int dem = 0;
		int n;
		cin >> n;
		queue<string> q;
		q.push("6");
		q.push("8");
		while(1){
			string k = q.front();
			q.pop();
			int ok = 1;
			if(k.length() % 2 == 1){
				ok = 0;
			}
			string tmp = k;
			int i = 0, j = tmp.length() - 1;
			while (i < j){
				if (tmp[i] != tmp[j]){
					ok = 0;
					break;
				}
				else{
					++i;
					--j;
				}
			}
			if(ok == 1){
				cout << k <<" ";
				dem ++;
			}
			if(dem == n){
				break;
			}
			else {
				q.push(k + "6");
				q.push(k + "8");
			}
		}
		cout << endl;
	}
	return 0;
}
