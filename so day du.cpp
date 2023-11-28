#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int  solve(string s){
	if(s[0]=='0') return -1;
	set<char> se;
	for (char x:s){
		if (!isdigit(x))return -1;
		se.insert(x);
	}
	return se.size()==10;
}
int main(int argc, char** argv) {
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		cin>>s;
		if(solve(s)==-1){
			cout<<"invalid\n";
		}
		else if(solve(s))cout<<"yes\n";
		else cout<<"no\n";
	}
	
	return 0;
}
