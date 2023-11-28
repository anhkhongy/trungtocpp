#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin >> t;
	cin.ignore();
	while (t--){
		string s;
		getline(cin, s);
		stack<int> st;
		int x = 1;
		for (char &i : s){
			if(i == '('){
				st.push(x);
				cout << x << " ";
				x++;
			}
			else if(i == ')'){
				cout << st.top() << " ";
				st.pop();
			}
		}
		cout << endl;
	}
	return 0;
}
