#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	stack<int> p;
	string s;
	while(cin >>s ){
		if(s == "push"){
			int n;
			cin >> n;
			p.push(n);
		}
		else if(s == "pop"){
			p.pop();
		}
		else {
			if(p.size()){
				vector<int> v;
				while(!p.empty()){
					v.push_back(p.top());
					p.pop();
				}
				reverse(v.begin(),v.end());
				for (int x : v){
					cout << x << " ";
					p.push(x);
				}
				cout << endl;
			}
			else {
				cout << "empty" <<endl;
			}
		}
	}
	return 0;
}
