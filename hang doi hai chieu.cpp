#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int q;
	cin >> q;
	deque<int> dq;
	string s;
	while (q--){
		cin >> s;
		if (s == "PUSHBACK"){
			int x;
			cin >> x;
			dq.push_back(x);
		}
		else if(s == "PUSHFRONT"){
			int x;
			cin >> x;
			dq.push_front(x);
		}
		else if (s == "PRINTFRONT"){
			if (!dq.empty()){
				cout << dq.front()<<endl;
			}
			else {
				cout << "NONE" <<endl;
			}
		}
		else if(s == "PRINTBACK"){
			if (!dq.empty()){
				cout << dq.back() << endl;
			}
			else {
				cout << "NONE" <<endl;
			}
		}
		else if (s == "POPFRONT"){
			if (!dq.empty()){
				dq.pop_front();
			}
		}
		else if (s == "POPBACK"){
			if (!dq.empty()){
				dq.pop_back();
			}
		}
	}
	return 0;
}
