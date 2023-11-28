#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	ifstream fin("CONTACT.in");
	string s;
	set<string> se;
	while(fin>>s){
		for (int i=0;i<s.size();i++){
			s[i]=tolower(s[i]);
		}
		se.insert(s);
	}
	for (string x:se){
		cout<<x<<endl;
	}
	return 0;
}
