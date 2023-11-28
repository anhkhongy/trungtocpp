#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin >> t;
	while (t--){
		string s;
		cin >> s;
		for (int i = 0; i < s.size(); i++){
			if (i == 0){
				cout << s[i] ;
			}
			else {
				if (s[i] != s[i-1])cout << 1;
				else cout << 0;
			}
		}
		cout << endl;
	}
	return 0;
}
