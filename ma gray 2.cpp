#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		cin>>s;
		string bin = "";
		bin += s[0];
		for (int i = 1; i < s.size(); i++){
			int n = bin.size() - 1;
			if (bin[n] != s[i])bin += "1";
			else {
				bin += "0";
			}
		}
		cout << bin << endl;
	}
	return 0;
}
